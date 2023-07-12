#include "schtasks.h"

wstring StringToWString(const string& str)
{
    wstring wstr;
    size_t size;
    wstr.resize(str.length());
    mbstowcs_s(&size, &wstr[0], wstr.size() + 1, str.c_str(), str.size());
    return wstr;
}

string WStringToString(const wstring& wstr)
{
    string str;
    size_t size;
    str.resize(wstr.length());
    wcstombs_s(&size, &str[0], str.size() + 1, wstr.c_str(), wstr.size());
    return str;
}


vector<Task> listAllScheduledTasks() {
    vector<Task> tasks;

    //  ------------------------------------------------------
    //  Initialize COM.
    HRESULT hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
    if (FAILED(hr))
    {
        printf("\nCoInitializeEx failed: %x", hr);
        return tasks;
    }

    //  Set general COM security levels.
    hr = CoInitializeSecurity(
        NULL,
        -1,
        NULL,
        NULL,
        RPC_C_AUTHN_LEVEL_PKT_PRIVACY,
        RPC_C_IMP_LEVEL_IMPERSONATE,
        NULL,
        0,
        NULL);

    if (FAILED(hr))
    {
        printf("\nCoInitializeSecurity failed: %x", hr);
        CoUninitialize();
        return tasks;

    }

    //  ------------------------------------------------------
    //  Create an instance of the Task Service. 
    ITaskService* pService = NULL;
    hr = CoCreateInstance(CLSID_TaskScheduler,
        NULL,
        CLSCTX_INPROC_SERVER,
        IID_ITaskService,
        (void**)&pService);
    if (FAILED(hr))
    {
        printf("Failed to CoCreate an instance of the TaskService class: %x", hr);
        CoUninitialize();
        return tasks;

    }

    //  Connect to the task service.
    hr = pService->Connect(_variant_t(), _variant_t(),
        _variant_t(), _variant_t());
    if (FAILED(hr))
    {
        printf("ITaskService::Connect failed: %x", hr);
        pService->Release();
        CoUninitialize();
        return tasks;

    }

    //  ------------------------------------------------------
    //  Get the pointer to the root task folder.
    ITaskFolder* pRootFolder = NULL;
    hr = pService->GetFolder(_bstr_t(L"\\"), &pRootFolder);

    pService->Release();
    if (FAILED(hr))
    {
        printf("Cannot get Root Folder pointer: %x", hr);
        CoUninitialize();
        return tasks;

    }

    //  -------------------------------------------------------
    //  Get the registered tasks in the folder.
    IRegisteredTaskCollection* pTaskCollection = NULL;
    hr = pRootFolder->GetTasks(NULL, &pTaskCollection);

    pRootFolder->Release();
    if (FAILED(hr))
    {
        printf("Cannot get the registered tasks.: %x", hr);
        CoUninitialize();
        return tasks;
    }

    LONG numTasks = 0;
    hr = pTaskCollection->get_Count(&numTasks);

    if (numTasks == 0)
    {
        printf("\nNo Tasks are currently running");
        pTaskCollection->Release();
        CoUninitialize();
        return tasks;
    }

    printf("\nNumber of Tasks : %d", numTasks);

    for (LONG i = 0; i < numTasks; i++)
    {
        vector<string> actions;

        IRegisteredTask* pRegisteredTask = NULL;
        hr = pTaskCollection->get_Item(_variant_t(i + 1), &pRegisteredTask);

        if (SUCCEEDED(hr))
        {
            Task task;
            BSTR taskName = NULL;
            hr = pRegisteredTask->get_Name(&taskName);

            if (SUCCEEDED(hr))
            {
                printf("\nTask Name: %S", taskName);

                ITaskDefinition* taskDefinition = NULL;
                IActionCollection* actionCollection = NULL;

                // forget about the goddamn error outputs
                hr = pRegisteredTask->get_Definition(&taskDefinition);
                hr = taskDefinition->get_Actions(&actionCollection);

                LONG numActions = 0;

                hr = actionCollection->get_Count(&numActions);

                for (LONG j = 1; j <= numActions; j++) {
                    IAction* action = NULL;
                    IExecAction* execAction = NULL;

                    actionCollection->get_Item(j, &action);

                    if (action == NULL) {
                        continue;
                    }

                    action->QueryInterface(IID_IExecAction,
                        reinterpret_cast<void**>(&execAction));

                    if (execAction == NULL) {
                        continue;
                    }

                    BSTR taskExecPath;
                    execAction->get_Path(&taskExecPath);
                    std::wstring wTaskExecPath(taskExecPath, SysStringLen(taskExecPath));

                    BSTR taskExecArgs;
                    execAction->get_Arguments(&taskExecArgs);
                    std::wstring wTaskExecArgs(taskExecArgs, SysStringLen(taskExecArgs));

                    BSTR taskExecRoot;
                    execAction->get_WorkingDirectory(&taskExecRoot);
                    std::wstring wTaskExecRoot(taskExecRoot, SysStringLen(taskExecRoot));

                    auto full = wTaskExecRoot + L" " + wTaskExecPath + L" " + wTaskExecArgs;

                    printf("\nAction %S", full);

                    actions.push_back(WStringToString(full));

                    action->Release();
                }
                if (actionCollection != NULL) {
                    actionCollection->Release();
                }

                if (taskDefinition != NULL) {
                    taskDefinition->Release();
                }

                task.name = WStringToString(taskName);
                task.actions = actions;

                tasks.push_back(task);

                SysFreeString(taskName);
            }
            else
            {
                printf("\nCannot get the registered task name: %x", hr);
            }
            pRegisteredTask->Release();
        }
        else
        {
            printf("\nCannot get the registered task item at index=%d: %x", i + 1, hr);
        }
    }

    pTaskCollection->Release();
    CoUninitialize();
    
    return tasks;
}

bool deleteScheduledTask(string& name) {
    if (FAILED(CoInitialize(nullptr))) {
        return false;
    }

    ITaskService* pITS;
    if (FAILED(CoCreateInstance(CLSID_TaskScheduler, nullptr, CLSCTX_INPROC_SERVER, IID_ITaskService, (void**)&pITS))) {
        CoUninitialize();
        return false;
    }

    if (FAILED(pITS->Connect(_variant_t(), _variant_t(), _variant_t(), _variant_t()))) {
        pITS->Release();
        CoUninitialize();
        return false;
    }

    ITaskFolder* pITF;
    if (FAILED(pITS->GetFolder(_bstr_t(L"\\"), &pITF))) {
        pITS->Release();
        CoUninitialize();
        return false;
    }

    pITS->Release();

    if (FAILED(pITF->DeleteTask(_bstr_t(name.c_str()), 0))) {
        pITF->Release();
        CoUninitialize();
        return false;
    }

    pITF->Release();

    CoUninitialize();

    return true;
}
