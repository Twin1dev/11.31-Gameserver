#pragma once
#pragma region defines
#include "Util.h"
#include "Globals.h"
#include "NetHooks.h"
#include "Inventory.h"
#include "Memory.h"
#include "Abilities.h"

#include "Includes.h"

#pragma endregion




namespace Hooks {
	
    // chat hes using processevent.. i plan to remove later on, i just suck at native hooking

	static bool RTSM = false;
	static bool afterPre = false;
	void (*ProcessEvent)(UObject*, UFunction*, void*);
	void ProcessEventHook(UObject* pObject, UFunction* pFunction, void* pParams)
	{
		auto FuncName = pFunction->GetName();
		auto FullName = pFunction->GetFullName();

		if (FuncName == "ReadyToStartMatch")
		{
		

		
			TArray<AActor*> Acts;
			GetDefaultObject<UGameplayStatics>()->GetAllActorsOfClass(GetWorld(), AFortPlayerStartWarmup::StaticClass(), &Acts);

			int ActNum = Acts.Num();

			Acts.Free();

			if (ActNum == 0)
			{
				return ProcessEvent(pObject, pFunction, pParams);
			}

			if (!RTSM)
			{
				RTSM = true;




				LOG("ReadyToStartMatch");

				auto GameMode = (AFortGameModeAthena*)GetWorld()->AuthorityGameMode;
				auto GameState = (AFortGameStateAthena*)GetWorld()->GameState;
				auto Params = (AGameMode_ReadyToStartMatch_Params*)pParams;

				UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");

				GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
				GameState->CurrentPlaylistInfo.OverridePlaylist = Playlist;
				GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;
				GameState->CurrentPlaylistInfo.MarkArrayDirty();

				GameMode->CurrentPlaylistId = GameState->CurrentPlaylistInfo.BasePlaylist->PlaylistId;
				GameMode->CurrentPlaylistName = GameState->CurrentPlaylistInfo.BasePlaylist->PlaylistName;
				GameState->OnRep_CurrentPlaylistInfo();




				static UNetDriver* (*CreateNetDriver)(UEngine*, UWorld*, FName) = decltype(CreateNetDriver)(SigScan("48 89 5C 24 ? 57 48 83 EC 20 49 8B D8 48 8B F9 E8 ? ? ? ? 48 8B D0 4C 8B C3 48 8B CF 48 8B 5C 24 ? 48 83 C4 20 5F E9 ? ? ? ?"));

				auto NewNetDriver = CreateNetDriver(GetEngine(), GetWorld(), GetDefaultObject<UKismetStringLibrary>()->Conv_StringToName(L"GameNetDriver"));

				GameMode->GameSession->MaxPlayers = 100;

				if (NewNetDriver)
				{
					NewNetDriver->World = GetWorld();
					NewNetDriver->NetDriverName = GetDefaultObject<UKismetStringLibrary>()->Conv_StringToName(L"GameNetDriver");

					FString Err;
					auto Url = FURL();
					Url.Port = 7777;

					static char (*InitListen)(UNetDriver*, void*, FURL&, bool, FString&) = decltype(InitListen)(BaseAddress() + 0x8EFBA0);
					static void (*SetWorld)(UNetDriver*, UWorld*) = decltype(SetWorld)(BaseAddress() + 0x3882f50);

					InitListen(NewNetDriver, GetWorld(), Url, true, Err);
					SetWorld(NewNetDriver, GetWorld());


					GetWorld()->NetDriver = NewNetDriver;

					for (int i = 0; i < GetWorld()->LevelCollections.Num(); i++)
					{
						GetWorld()->LevelCollections[i].NetDriver = NewNetDriver;
					}

					NetHooks::ServerReplicateActors = decltype(NetHooks::ServerReplicateActors)(NewNetDriver->ReplicationDriver->Vft[0x59]);

					LOG("Listening on Port 7777");

				}



			//	GameMode->WarmupRequiredPlayerCount = 1;

				GameState->WarmupCountdownEndTime = GetDefaultObject<UGameplayStatics>()->GetTimeSeconds(GetWorld()) + 99999.9f;
				GameMode->WarmupCountdownDuration = 99999.9f;

				GameState->WarmupCountdownStartTime = GetDefaultObject<UGameplayStatics>()->GetTimeSeconds(GetWorld());
				GameMode->WarmupEarlyCountdownDuration = 99999.9f;

				GameMode->bWorldIsReady = true;

				GameMode->StartMatch();
				GameMode->StartPlay();

				Params->ReturnValue = true;
				GameMode->ReadyToStartMatch();
			}



	

	/*		bool ret = ReadyToStartMatch(GameMode);

			if (!ret)
				LOG("What the fuck");

			return ret;*/
	
		}

		if (FuncName == "ServerExecuteInventoryItem")
		{
			auto Params = (AFortPlayerController_ServerExecuteInventoryItem_Params*)pParams;
			auto PC = (AFortPlayerControllerAthena*)pObject;
			auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;

			auto ItemDef = FindItemDefFromGuid(Params->ItemGuid, PC);

			Pawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemDef, Params->ItemGuid);
		}
	
		if (FuncName == "ServerAcknowledgePossession")
		{
			auto Params = (APlayerController_ServerAcknowledgePossession_Params*)pParams;
			auto PC = (AFortPlayerControllerAthena*)pObject;
			auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;
			auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;

			PC->AcknowledgedPawn = Params->P;

			Pawn->CosmeticLoadout = PC->CosmeticLoadoutPC;
			Pawn->OnRep_CosmeticLoadout();
		}

		if (FuncName == "SpawnDefaultPawnFor")
		{
			auto Params = (AGameModeBase_SpawnDefaultPawnFor_Params*)pParams;
			auto GameMode = (AFortGameModeAthena*)GetWorld()->AuthorityGameMode;
			auto NewPlayer = (AFortPlayerControllerAthena*)Params->NewPlayer;

			if (Params->NewPlayer)
			{
				TArray<AActor*> Acts;
				GetDefaultObject<UGameplayStatics>()->GetAllActorsOfClass(GetWorld(), AFortPlayerStartWarmup::StaticClass(), &Acts);

				static auto PawnClass = StaticFindObject<UClass>("/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");
				Params->ReturnValue = SpawnActor<APawn>(Acts[rand() % (Acts.Num() - 1)]->K2_GetActorLocation(), {}, PawnClass);


				if (!Params->ReturnValue)
					return ProcessEvent(pObject, pFunction, pParams);

				((AFortPlayerPawnAthena*)Params->ReturnValue)->SetMaxHealth(100);
				((AFortPlayerPawnAthena*)Params->ReturnValue)->SetHealth(100);

				auto GameState = (AFortGameStateAthena*)GetWorld()->GameState;
				auto GameMode = (AFortGameModeAthena*)GetWorld()->AuthorityGameMode;
				auto PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

				for (int i = 0; i < GameMode->StartingItems.Num(); i++)
				{
					auto& StartingItem = GameMode->StartingItems[i];
					auto ItemDef = StartingItem.Item;

					if (!ItemDef)
						continue;

					GivePCItem(NewPlayer, ItemDef, StartingItem.Count);
				}

				GivePlayerStateAbilitySet(PlayerState);

				auto Pickaxe = StaticFindObject<UAthenaPickaxeItemDefinition>("/Game/Athena/Items/Cosmetics/Pickaxes/DefaultPickaxe.DefaultPickaxe");

				GivePCItem(NewPlayer, Pickaxe->WeaponDefinition);

				Update(NewPlayer);

				return;
			}
		}


		if (FuncName == "ServerLoadingScreenDropped")
		{
			auto PC = (AFortPlayerControllerAthena*)pObject;
			auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
			auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;
			
			GetDefaultObject<UFortKismetLibrary>()->UpdatePlayerCustomCharacterPartsVisualization(PlayerState);

			PlayerState->ForceNetUpdate();
			Pawn->ForceNetUpdate();
			PC->ForceNetUpdate();
		}

		if (FuncName == "ServerReadyToStartMatch")
		{
			LOG("PlayerJoin");
			auto Params = (AFortPlayerController_ServerReadyToStartMatch_Params*)pParams;
			auto NewPlayer = (AFortPlayerControllerAthena*)pObject;

			if (!NewPlayer)
				return ProcessEvent(pObject, pFunction, pParams);
			
			auto PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

			if (!PlayerState)
				return ProcessEvent(pObject, pFunction, pParams);

		


			NewPlayer->bHasServerFinishedLoading = true;
			NewPlayer->OnRep_bHasServerFinishedLoading();

			PlayerState->bHasStartedPlaying = true;
			PlayerState->OnRep_bHasStartedPlaying();
		
		}
		return ProcessEvent(pObject, pFunction, pParams);
	}
	static inline bool (*ReadyToStartMatch)(AFortGameModeAthena*);
	bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
	{
	
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

	static bool nomcphook() { return true; }
	static void cghook() { return; }

	static void Init()
	{
		GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);


		CREATEHOOK(BaseAddress() + 0x3b76fe0, NetHooks::GetNetMode, nullptr);

		GetDefaultObject<UKismetSystemLibrary>()->ExecuteConsoleCommand(GetWorld(), L"open Apollo_Terrain", nullptr);
	
		CREATEHOOK(BaseAddress() + 0x34af6c0, NetHooks::GetNetModeActor, nullptr);


		auto DefaultAbilityComp = UObject::FindObjectSlow<UFortAbilitySystemComponentAthena>("Default__FortAbilitySystemComponentAthena");
		auto DefaultFortPlayerController = StaticFindObject<AFortPlayerController>("/Script/FortniteGame.Default__FortPlayerController");
		auto DefaultGameMode = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");

		CREATEHOOK(BaseAddress() + Offsets::ProcessEvent, ProcessEventHook, &ProcessEvent);
	//	VirtualHook(DefaultGameMode->Vft, 254, ReadyToStartMatchHook);
		CREATEHOOK(BaseAddress() + 0x19b1660, GameSessionDetour, nullptr);
		VirtualHook(DefaultAbilityComp->Vft, 0xF7, InternalServerTryActivateAbilityHook);
		CREATEHOOK(SigScan("40 55 53 41 54 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 45 33 E4 48 8B DA 44 89 65 50"), ValidationDetour, &ValidationFailure);
		CREATEHOOK(BaseAddress() + 0x372fb80, KickPlayerHook, &KickPlayer);
		CREATEHOOK(BaseAddress() + 0x27c4760, cghook, nullptr);
		CREATEHOOK(BaseAddress() + 0x3883cd0, NetHooks::TickFlushHook, (void**)&NetHooks::TickFlush);
	}
}
