#pragma once
#include "Includes.h"
namespace NetHooks
{
	__int64 GetNetMode(UWorld* a1)
	{
		return 1;
	}

	__int64 GetNetModeActor(AActor* a1)
	{
		return 1;
	}

	inline void (*ServerReplicateActors)(UReplicationDriver*);


	inline void (*TickFlush)(UNetDriver*);
	inline void TickFlushHook(UNetDriver* Driver)
	{
		if (Driver->ReplicationDriver && Driver->ClientConnections.Num() > 0 && !Driver->ClientConnections[0]->InternalAck)
			reinterpret_cast<void(*)(UReplicationDriver*)>(Driver->ReplicationDriver->Vft[0x59])(Driver->ReplicationDriver);
		
		static bool bStarted = false;
		if (!bStarted && GetAsyncKeyState(VK_F6) & 0x1)
		{
			auto GameMode = (AFortGameModeAthena*)GetWorld()->AuthorityGameMode;
			auto GameState = (AFortGameStateAthena*)GetWorld()->GameState;
				GameState->WarmupCountdownEndTime = GetDefaultObject<UGameplayStatics>()->GetTimeSeconds(GetWorld()) + 11.f;
				GameMode->WarmupCountdownDuration = 11.f;

				GameState->WarmupCountdownStartTime = GetDefaultObject<UGameplayStatics>()->GetTimeSeconds(GetWorld());
				GameMode->WarmupEarlyCountdownDuration = 11.f;

				// im not even sure
			static void (*StartAircraftPhaseOriginal)(AFortGameModeAthena*, bool bDoNotSpawnAircraft) = decltype(StartAircraftPhaseOriginal)(BaseAddress() + 0x154e080);
			StartAircraftPhaseOriginal(GameMode, false);
			GetDefaultObject<UKismetSystemLibrary>()->ExecuteConsoleCommand(GetWorld(), L"startaircraft", nullptr);
		}

		return TickFlush(Driver);
	}

	static bool Set = false;


	inline void Init()
	{

	}
}