#pragma once
#pragma region defines
#include "Util.h"
#include "Globals.h"
#include "NetHooks.h"
#include "Inventory.h"
#include "Memory.h"
#include "Abilities.h"

#include "SDK/SDK.hpp"
using namespace SDK;
using namespace Params;


#define CREATEHOOK(Address, Hook, Og) \
MH_CreateHook((void*)(Address), Hook, (void**)(Og)); \
MH_EnableHook((void*)(Address));
#pragma endregion




namespace Hooks {
	
    // chat hes using processevent.. i plan to remove later on, i just suck at native hooking

	static bool RTSM = false;
	void (*ProcessEvent)(UObject*, UFunction*, void*);
	void ProcessEventHook(UObject* pObject, UFunction* pFunction, void* pParams)
	{
		auto FuncName = pFunction->GetName();
		auto FullName = pFunction->GetFullName();

		if (FuncName == "ReadyToStartMatch")
		{
			TArray<AActor*> WarmupActors;
			GetDefaultObject<UGameplayStatics>()->GetAllActorsOfClass(GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);

			int WarmupNum = WarmupActors.Num();

			WarmupActors.Free();

			if (WarmupNum == 0)
				return ProcessEvent(pObject, pFunction, pParams);

			// starts match once map loaded, this is better incase a player joins too early and crashes the server.

			if (!RTSM)
				RTSM = true;
			else
				return ProcessEvent(pObject, pFunction, pParams);

			LOG("ReadyToStartMatch");

			auto GameState = (AFortGameStateAthena*)GetWorld()->GameState;
			auto GameMode = (AFortGameModeAthena*)pObject;

			UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");

			GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
			GameState->CurrentPlaylistInfo.OverridePlaylist = Playlist;
			GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;

			GameMode->CurrentPlaylistId = Playlist->PlaylistId;
			GameMode->CurrentPlaylistName = Playlist->PlaylistName;

			GameState->CurrentPlaylistInfo.MarkArrayDirty();
			GameState->OnRep_CurrentPlaylistInfo();
			GameState->OnRep_CurrentPlaylistId();

			GameState->GamePhase = EAthenaGamePhase::Warmup;
			GameState->OnRep_GamePhase(EAthenaGamePhase::Setup);

			GameMode->GameSession->MaxPlayers = 100;

			// Listening could be in a seperate function, but thats not really needed unless you want really clean code

			// out of date netdriver!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

		//	static UNetDriver* (*CreateNetDriver)(UEngine*, UWorld*, FName) = decltype(CreateNetDriver)(BaseAddress() + 0x3B21C50);

			auto DriverName = GetDefaultObject<UKismetStringLibrary>()->Conv_StringToName(L"GameNetDriver");
			//GetWorld()->NetDriver = CreateNetDriver(GetEngine(), GetWorld(), DriverName);

			static bool (*InitHost)(AOnlineBeacon * a1) = decltype(InitHost)(BaseAddress() + 0x8ef620);
			static void (*PauseBeaconRequests)(AOnlineBeacon * a1, char a2) = decltype(PauseBeaconRequests)(BaseAddress() + 0x1c30a60);

			auto BeaconHost = SpawnActor<AOnlineBeaconHost>(FVector{});

			BeaconHost->ListenPort = 7777 - 1;

			InitHost(BeaconHost);

			GetWorld()->NetDriver = BeaconHost->NetDriver;

			if (GetWorld()->NetDriver)
			{
				GetWorld()->NetDriver->World = GetWorld();
				GetWorld()->NetDriver->NetDriverName = DriverName;

				FString Err;
				auto Url = FURL();
				Url.Port = 7777;

				static char (*InitListen)(UNetDriver*, void*, FURL&, bool, FString&) = decltype(InitListen)(BaseAddress() + 0x8EFBA0);
				static void (*SetWorld)(UNetDriver*, UWorld*) = decltype(SetWorld)(BaseAddress() + 0x3882f50);

				InitListen(GetWorld()->NetDriver, GetWorld(), Url, true, Err);
				SetWorld(GetWorld()->NetDriver, GetWorld());

				GetWorld()->LevelCollections[0].NetDriver = GetWorld()->NetDriver;
				GetWorld()->LevelCollections[1].NetDriver = GetWorld()->NetDriver;

				NetHooks::ServerReplicateActors = decltype(NetHooks::ServerReplicateActors)(GetWorld()->NetDriver->ReplicationDriver->Vft[0x59]);

				LOG("Listening on Port 7777");
				
			}


			GameMode->bWorldIsReady = true;

			
			GameState->WarmupCountdownEndTime = GetDefaultObject<UGameplayStatics>()->GetTimeSeconds(GetWorld()) + 99999.9f;
			GameMode->WarmupCountdownDuration = 99999.9f;

			GameState->WarmupCountdownStartTime = GetDefaultObject<UGameplayStatics>()->GetTimeSeconds(GetWorld());
			GameMode->WarmupEarlyCountdownDuration = 99999.9f;
			
		}

		if (FuncName == "SpawnDefaultPawnFor")
		{
			auto Params = (AGameModeBase_SpawnDefaultPawnFor_Params*)pParams;
			auto GameMode = (AFortGameModeAthena*)GetWorld()->AuthorityGameMode;
			auto NewPlayer = (AFortPlayerControllerAthena*)Params->NewPlayer;
			
			if (Params->NewPlayer)
			{
				TArray<AActor*> WarmupSpots;
				GetDefaultObject<UGameplayStatics>()->GetAllActorsOfClass(GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupSpots);

				FTransform Transform{};
				Transform.Scale3D = FVector(1, 1, 1);
				Transform.Translation = NewPlayer->IsInAircraft() ? Params->StartSpot->K2_GetActorLocation() : WarmupSpots[rand() % (WarmupSpots.Num() - 1)]->K2_GetActorLocation();

				Params->ReturnValue = GameMode->SpawnDefaultPawnAtTransform(Params->NewPlayer, Transform);

				if (!Params->ReturnValue)
					return ProcessEvent(pObject, pFunction, pParams);

				((AFortPlayerPawnAthena*)Params->ReturnValue)->SetMaxHealth(100);
				((AFortPlayerPawnAthena*)Params->ReturnValue)->SetHealth(100);
				return;
			}
		}

		if (FuncName == "HandleStartingNewPlayer")
		{
			auto Params = (AGameModeBase_HandleStartingNewPlayer_Params*)pParams;
			auto NewPlayer = (AFortPlayerControllerAthena*)Params->NewPlayer;

			if (!NewPlayer)
				return ProcessEvent(pObject, pFunction, pParams);
			
			auto PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

			if (!PlayerState)
				return ProcessEvent(pObject, pFunction, pParams);

			auto GameState = (AFortGameStateAthena*)GetWorld()->GameState;
			auto GameMode = (AFortGameModeAthena*)GetWorld()->AuthorityGameMode;

			for (int i = 0; i < GameMode->StartingItems.Num(); i++)
			{
				auto& StartingItem = GameMode->StartingItems[i];
				auto ItemDef = StartingItem.Item;

				if (!ItemDef)
					continue;

				GivePCItem(NewPlayer, ItemDef, StartingItem.Count);
			}

			auto Pickaxe = StaticFindObject<UAthenaPickaxeItemDefinition>("/Game/Athena/Items/Cosmetics/Pickaxes/DefaultPickaxe.DefaultPickaxe");

			GivePCItem(NewPlayer, Pickaxe->WeaponDefinition);

			Update(NewPlayer);

			GivePCAbilitySet(PlayerState->AbilitySystemComponent);


			NewPlayer->bHasServerFinishedLoading = true;
			NewPlayer->OnRep_bHasServerFinishedLoading();

			PlayerState->bHasStartedPlaying = true;
			PlayerState->bHasFinishedLoading = true;
			PlayerState->OnRep_bHasStartedPlaying();

			
			
		}
		return ProcessEvent(pObject, pFunction, pParams);
	}

	void GameSessionDetour()
	{

	}

	static inline void (*KickPlayer)(AGameSession*, AController*);
	static void KickPlayerHook(AGameSession*, AController*) { return; }

	static char(__fastcall* ValidationFailure)(__int64* a1, __int64 a2);

	char __fastcall ValidationDetour(__int64* a1, __int64 a2)
	{
		LOG("Validation");
		return 0;
	}


	static void Init()
	{
		GetDefaultObject<UKismetSystemLibrary>()->ExecuteConsoleCommand(GetWorld(), L"open Apollo_Terrain", nullptr);

		GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

		NetHooks::Init();

		// ProcessEvent
		CREATEHOOK(BaseAddress() + Offsets::ProcessEvent, ProcessEventHook, &ProcessEvent);
		CREATEHOOK(BaseAddress() + 0x19b1660, GameSessionDetour, nullptr);
		// TickFlush
		CREATEHOOK(SigScan("40 55 53 41 54 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 45 33 E4 48 8B DA 44 89 65 50"), ValidationDetour, &ValidationFailure);
		CREATEHOOK(BaseAddress() + 0x372fb80, KickPlayerHook, &KickPlayer);
		CREATEHOOK(BaseAddress() + 0x3883cd0, NetHooks::TickFlushHook, &NetHooks::TickFlush);
	}
}
