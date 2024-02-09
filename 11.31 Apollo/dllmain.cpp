#include "Includes.h"

#include "Globals.h"
#include "Memory.h"
#include "Abilities.h"
#include "Inventory.h"
#include "Util.h"
#include "NetHooks.h"

#include "Player.h"
#include "Gamemode.h"
#include "Hooks.h"


bool rettrue() { return true; }

/*
TODO:
    - Fix Some Crashes
    - Clean up dllmain (wtf was i doing)
    - make fully playable
    - make lategame
*/

DWORD WINAPI Main(LPVOID)
{
    AllocConsole();
    FILE* fptr;
    freopen_s(&fptr, "CONOUT$", "w+", stdout);

    SetConsoleTitleA("Apollo 11.31");

    MH_Initialize();

    Sleep(5000);

    InitGObjects();

    CREATEHOOK(BaseAddress() + 0x3b76fe0, GetNetModeWorld, nullptr);

    // CollectGarbage
    CREATEHOOK(BaseAddress() + 0x27C47A0, rettrue, nullptr);

    CREATEHOOK(SigScan("40 55 53 41 54 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 45 33 E4 48 8B DA 44 89 65 50"), ValidationDetour, &ValidationFailure);
    CREATEHOOK(BaseAddress() + 0x372fb80, KickPlayerHook, &KickPlayer);

    CREATEHOOK(BaseAddress() + 0x34af6c0, GetNetModeActor, nullptr);

    // i should figure out a better way for this..
    UWorld::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

    GetDefaultObject<UKismetSystemLibrary>()->ExecuteConsoleCommand(UWorld::GetWorld(), L"open Apollo_Terrain", nullptr);

    // ChangeGameSessionID
    auto func = BaseAddress() + 0x19b1660;

    DWORD dwProtection;
    VirtualProtect((PVOID)func, 1, PAGE_EXECUTE_READWRITE, &dwProtection);

    *(uint8_t*)func = 0xC3;

    DWORD dwTemp;
    VirtualProtect((PVOID)func, 1, dwProtection, &dwTemp);

    //


 
    auto DefaultFortPlayerController = StaticFindObject<AFortPlayerController>("/Script/FortniteGame.Default__FortPlayerControllerAthena");
    auto DefaultGameMode = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");

    CREATEHOOK(BaseAddress() + Offsets::ProcessEvent, ProcessEventHook, &ProcessEvent);
    VirtualHook(DefaultGameMode->Vft, 254, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);
    VirtualHook(DefaultGameMode->Vft, 197, SpawnDefaultPawnForHook);
    VirtualHook(DefaultGameMode->Vft, 203, HandleStartingNewPlayerHook, (PVOID*)&HandleStartingNewPlayer);
    VirtualHook(DefaultFortPlayerController->Vft, 617, ServerReadyToStartMatchHook, (PVOID*)&ServerReadyToStartMatch);
    VirtualHook(GetDefaultObject<UFortControllerComponent_Aircraft>()->Vft, 130, ServerAttemptAircraftJumpHook);

    CREATEHOOK(BaseAddress() + 0x2176a20, OnDamageServerHook, &OnDamageServer);

    auto ServerCreateBuildingActorFn = StaticFindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerCreateBuildingActor");
    HookExec(ServerCreateBuildingActorFn, ServerCreateBuildingActorHook, (PVOID*)&ServerCreateBuildingActor);

    VirtualHook(DefaultFortPlayerController->Vft, 567, ServerBeginEditingBuildingActorHook);

    auto ServerEditBuildingActorFn = StaticFindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerEditBuildingActor");
    HookExec(ServerEditBuildingActorFn, ServerEditBuildingActorHook, (PVOID*)&ServerEditBuildingActor);

    VirtualHook(DefaultFortPlayerController->Vft, 565, ServerEndEditingBuildingActor);

    VirtualHook(GetDefaultObject<UFortAbilitySystemComponentAthena>()->Vft, 0xF7, InternalServerTryActivateAbilityHook);

    CREATEHOOK(BaseAddress() + 0xe2bf70, DispatchRequestHook, &DispatchRequest);

    CREATEHOOK(BaseAddress() + 0x3883cd0, TickFlushHook, &TickFlush);



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

