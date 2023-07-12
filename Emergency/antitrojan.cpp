#include <iostream>
#include <fstream>
#include <ShlObj.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <string>
#include <vector>
#include <regex>

#include "md5.h"
#include "json.hpp"
#include "schtasks.h"

using namespace std;
using namespace nlohmann;

string configFile = "config.json";
// whether to handle the operations
bool manage = false;

struct File {
    string path;
    string hash;
};

struct FileTask {
    string name;
    regex action;
};

struct Net {
    string ip;
    vector<int> ports;
};

struct Registry {
    string key;
    string value;
};

struct Service {
    string name;
};

vector<File> files;
vector<FileTask> tasks;
vector<Net> netWorks;
vector<Registry> registries;
vector<Service> services;


bool fileExists(string& filePath) {
    if (FILE* file = fopen(filePath.c_str(), "r")) {
        fclose(file);
        cout << filePath << " exists" << endl;
        return true;
    }
    else {
        cout << filePath << " does not exist" << endl;
        return false;
    }
}

string fileDigest(string& filePath) {
    ifstream in(filePath.c_str(), ios::binary);
    if (!in)
        return "";

    MD5 md5;
    streamsize length;
    char buffer[1024];
    while (!in.eof()) {
        in.read(buffer, 1024);
        length = in.gcount();
        if (length > 0)
            md5.update(buffer, length);
    }
    in.close();
    return md5.toString();
}

bool checkFileHash(string& hash, string& filePath) {
    // if the hash is empty delete it without checking the hash
    if (hash == "") {
        return true;
    }
    if (hash == fileDigest(filePath)) {
        return true;
    }
    return false;
}

void deleteFile(string& filePath) {
    if (remove(filePath.c_str()) != 0) {
        cout << filePath << " deleted unsuccessfully." << endl;
    }
    else {
        cout << filePath << " deleted successfully." << endl;
    }
}

void addFireWallRule(string& ip, vector<int> ports) {
    string cmd = "netsh advfirewall firewall add rule name=blocktrojan dir=out action=block protocol=tcp remoteip=\"" + ip + "\" ";
    if (!ports.empty()) {
        cmd += "remoteport=";
        int last = ports.back();
        ports.pop_back();
        for (int i : ports) {
            cmd += to_string(i) + ",";
        }
        cmd += to_string(last);
    }
    cout << cmd << endl;
    system(cmd.c_str());
}

/*
void deleteScheduledTask(string& taskName) {
    // add "" aroud the name
    string cmd = "schtasks /delete /tn \"" + taskName + "\" /f";
    cout << cmd << endl;
    system(cmd.c_str());
}
*/

void deleteRegistry(string& key, string& value) {
    string cmd = "reg delete " + key + " /v " + value + " /f";
    cout << cmd << endl;
    system(cmd.c_str());
}

void findService(string& name) {
    string cmd = "sc query | findstr " + '"' + name + '"';
    cout << cmd << endl;
    system(cmd.c_str());
}

void stopService(string& name) {
    string cmd = "sc stop " + name + " start=disabled";
    cout << cmd << endl;
    system(cmd.c_str());
}

void configure() {
    ifstream f("config.json");
    json config = json::parse(f);

    manage = config["handle"];

    for (auto& i : config["files"].items()) {
        File file;
        file.path = i.value()["path"];
        file.hash = i.value()["hash"];
        cout << "New file " << file.path << " added, hash: " << file.hash << endl;
        files.push_back(file);
    }

    for (auto& i : config["tasks"].items()) {
        FileTask task;
        task.name = i.value()["name"];
        task.action = regex(i.value()["action"]);
        cout << "New task " << task.name << " added" << endl;
        tasks.push_back(task);
    }

    for (auto& i : config["netWorks"].items()) {
        Net net;
        vector<int> ports;
        net.ip = i.value()["ip"];
        for (auto& j : i.value()["ports"].items()) {
            ports.push_back(j.value());
        }

        net.ports = ports;
        // format output
        cout << "New network " << net.ip << " added, ports: ";
        for (int j : net.ports) {
            cout << j << " ";
        }
        cout << endl;

        netWorks.push_back(net);
    }

    for (auto& i : config["registries"].items()) {
        Registry registry;
        registry.key = i.value()["key"];
        registry.value = i.value()["value"];
        cout << "New registry with key: " << registry.key << ", value " << registry.value << " added" << endl;
        registries.push_back(registry);
    }

    for (auto& i : config["services"].items()) {
        Service service;
        service.name = i.value()["name"];
        cout << "New service: " << service.name << " added" << endl;
        services.push_back(service);
    }

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    cout << "Configuration complete, execution started" << endl << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

bool scan() {
    for (File i : files) {
        if (fileExists(i.path)) {
            if (checkFileHash(i.hash, i.path)) {
                cout << "Hash of file is matched" << endl;
            }
            else {
                cout << "Hash of file is not matched" << endl;
            }
        }
        else {
            cout << i.path << " does not exist" << endl;
        }
    }

    vector<Task> currentTasks = listAllScheduledTasks();

    cout << endl;

    for (FileTask i : tasks) {
        // default name i.name
        string name = i.name;
        bool matched = false;

        for (Task j : currentTasks) {
            if (j.name == i.name) {
                for (string k : j.actions) {
                    if (regex_match(k, i.action)) {
                        matched = true;
                        break;
                    }
                }
                break;
            }
            // if name is not matched but action is matched delete it too
            else {
                for (string k : j.actions) {
                    if (regex_match(k, i.action)) {
                        cout << j.name << endl;
                        matched = true;
                        name = j.name;
                        break;
                    }
                }
            }
        }

        if (matched) {
            cout << "Task " << name << " mathces the regex" << endl;
        }
    }

    /*
    for (Net i : netWorks) {
        addFireWallRule(i.ip, i.ports);
    }

    for (Registry i : registries) {
        deleteRegistry(i.key, i.value);
    }
    */
    for (Service i : services) {
        findService(i.name);
    }
}

bool handle() {
    for (File i : files) {
        if (fileExists(i.path)) {
            if (checkFileHash(i.hash, i.path)) {
                cout << "Hash of file is matched" << endl;
                deleteFile(i.path);
            }
            else {
                cout << "Hash of file is not matched, delete unsuccessfull" << endl;
            }
        }
    }

    vector<Task> currentTasks = listAllScheduledTasks();

    cout << endl;

    for (FileTask i : tasks) {
        // default name i.name
        string name = i.name;
        bool matched = false;

        for (Task j : currentTasks) {
            if (j.name == i.name) {
                for (string k : j.actions) {
                    if (regex_match(k, i.action)) {
                        matched = true;
                        break;
                    }
                }
                break;
            }
            // if name is not matched but action is matched delete it too
            else {
                for (string k : j.actions) {
                    if (regex_match(k, i.action)) {
                        cout << j.name << endl;
                        matched = true;
                        name = j.name;
                        break;
                    }
                }
            }
        }

        if (matched) {
            if (deleteScheduledTask(name)) {
                cout << "Task " << name << " successfully deleted" << endl;
            }
            else {
                cout << "Task " << name << " unsuccessfully deletd" << endl;
            }
        }
    }

    for (Net i : netWorks) {
        addFireWallRule(i.ip, i.ports);
    }

    for (Registry i : registries) {
        deleteRegistry(i.key, i.value);
    }

    for (Service i : services) {
        stopService(i.name);
    }
}

int main() {
    bool manage = false;

    if (!IsUserAnAdmin()) {
        cout << "Please run as an administrator, Press enter to exit" << endl;
        cin.get();
        exit(1);
    }

    if (!fileExists(configFile)) {
        cout << "Please ensure there is a config.json file under this directory" << endl;
        cout << "Press enter to exit" << endl;
        cin.get();
        exit(1);
    }

    configure();

    if (manage) {
        handle();
    }
    else {
        scan();
    }

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    cout << "Task completed, Press enter to exit" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    cin.get();

    return 0;
}
