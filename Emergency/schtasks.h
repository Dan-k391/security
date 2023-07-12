#define _WIN32_DCOM

#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <comdef.h>
#include <wincred.h>
//  Include the task header file.
#include <taskschd.h>
#include <vector>
#include <cstdlib>

#pragma comment(lib, "taskschd.lib")
#pragma comment(lib, "comsupp.lib")
#pragma comment(lib, "credui.lib")

using namespace std;

typedef struct {
    string name;
    vector<string> actions;
} Task;

wstring StringToWString(const string& str);
string WStringToString(const wstring& wstr);
vector<Task> listAllScheduledTasks();
bool deleteScheduledTask(string& name);

