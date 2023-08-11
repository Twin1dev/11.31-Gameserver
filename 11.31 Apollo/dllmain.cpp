#include "Includes.h"
#include "Hooks.h"
// GO INTO INCLUDES.h TO DEFINE YOUR SDK!

/*
Usage:
    When you make a new file include Includes.h
    Uncomment out the sdk definition in Includes.h also
*/
DWORD WINAPI Main(LPVOID)
{
    AllocConsole();
    FILE* fptr;
    freopen_s(&fptr, "CONOUT$", "w+", stdout);

    SetConsoleTitleA("Apollo 11.31");

    MH_Initialize();

    /*
    UObject::GObjects = decltype(UObject::GObjects)();
    FNameToString = decltype(FNameToString)();
    FMemory_Free = decltype(FMemory_Free)();
    FMemory_Realloc = decltype(FMemory_Realloc)();
    FMemory_Malloc = decltype(FMemory_Malloc)();
    */    

    InitGObjects();

    Hooks::Init();

    return 0;
}
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Main, 0, 0, 0);
    }
    return TRUE;
}

