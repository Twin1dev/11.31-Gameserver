#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x320 - 0x298)
// Class Lobby.LobbyBeaconClient
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                     LobbyState;                                        // 0x298(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALobbyBeaconPlayerState*               PlayerState;                                       // 0x2A0(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E4[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	enum class ELobbyBeaconJoinState             LobbyJoinServerState;                              // 0x2A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18E5[0x76];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyBeaconClient");
		return Clss;
	}

	void ServerSetPartyOwner(struct FUniqueNetIdRepl& InUniqueId, struct FUniqueNetIdRepl& InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(const class FString& InSessionId, struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString);
	void ServerKickPlayer(struct FUniqueNetIdRepl& PlayerToKick, class FText& Reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(const class FString& Msg);
	void ClientWasKicked(class FText& KickReason);
	void ClientSetInviteFlags(struct FJoinabilitySettings& Settings);
	void ClientPlayerLeft(struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerJoined(class FText& NewPlayerName, struct FUniqueNetIdRepl& InUniqueId);
	void ClientLoginComplete(struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};

// 0x38 (0x278 - 0x240)
// Class Lobby.LobbyBeaconHost
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_18E6[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSoftClassPtr<class ALobbyBeaconState>       LobbyStateClass;                                   // 0x248(0x28)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALobbyBeaconState*                     LobbyState;                                        // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyBeaconHost");
		return Clss;
	}

};

// 0xC0 (0x2D8 - 0x218)
// Class Lobby.LobbyBeaconPlayerState
class ALobbyBeaconPlayerState : public AInfo
{
public:
	class FText                                  DisplayName;                                       // 0x218(0x18)(Net, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x230(0x28)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PartyOwnerUniqueId;                                // 0x258(0x28)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLobby;                                          // 0x280(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AOnlineBeaconClient*                   ClientActor;                                       // 0x288(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E8[0x48];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyBeaconPlayerState");
		return Clss;
	}

	void OnRep_UniqueId();
	void OnRep_PartyOwner();
	void OnRep_InLobby();
};

// 0x1A8 (0x3C0 - 0x218)
// Class Lobby.LobbyBeaconState
class ALobbyBeaconState : public AInfo
{
public:
	int32                                        MaxPlayers;                                        // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSubclassOf<class ALobbyBeaconPlayerState>   LobbyBeaconPlayerStateClass;                       // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18EA[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	bool                                         bLobbyStarted;                                     // 0x230(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        WaitForPlayersTimeRemaining;                       // 0x234(0x4)(Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLobbyPlayerStateInfoArray            Players;                                           // 0x238(0x120)(Net, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_18EC[0x68];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyBeaconState");
		return Clss;
	}

	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
