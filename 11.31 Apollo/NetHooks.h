#pragma once
#include "Includes.h"

// https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/ENetMode/
enum ENetMode
{
	NM_Standalone,
	NM_DedicatedServer,
	NM_ListenServer,
	NM_Client,
	NM_MAX,
};

// We return DedicatedServer because in the docs it says its used for: Dedicated server: server with no local players.
constexpr ENetMode NetMode = ENetMode::NM_DedicatedServer;

static ENetMode GetNetModeWorld()
{
	return NetMode;
}

static ENetMode GetNetModeActor()
{
	return NetMode;
}

static char (*InitListen)(UNetDriver*, void*, FURL&, bool, FString&) = decltype(InitListen)(BaseAddress() + 0x8EFBA0);
static void (*SetWorld)(UNetDriver*, UWorld*) = decltype(SetWorld)(BaseAddress() + 0x3882f50);

static UNetDriver* (*CreateNetDriver)(UEngine*, UWorld*, FName) = decltype(CreateNetDriver)(SigScan("48 89 5C 24 ? 57 48 83 EC 20 49 8B D8 48 8B F9 E8 ? ? ? ? 48 8B D0 4C 8B C3 48 8B CF 48 8B 5C 24 ? 48 83 C4 20 5F E9 ? ? ? ?"));

inline void (*ServerReplicateActors)(UReplicationDriver*);

void (*TickFlush)(UNetDriver*);
void TickFlushHook(UNetDriver* Driver)
{
	if (auto RepDriver = Driver->ReplicationDriver)
		ServerReplicateActors(RepDriver);

	return TickFlush(Driver);
}
