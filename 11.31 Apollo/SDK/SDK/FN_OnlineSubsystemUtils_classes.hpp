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

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AchievementBlueprintLibrary");
		return Clss;
	}

	void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementID, bool* bFoundID, float* Progress);
	void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementID, bool* bFoundID, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bHidden);
};

// 0x38 (0x60 - 0x28)
// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B0[0x18];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AchievementQueryCallbackProxy");
		return Clss;
	}

	class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
	class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x50 (0x78 - 0x28)
// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B1[0x30];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AchievementWriteCallbackProxy");
		return Clss;
	}

	class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementName, float Progress, int32 UserTag);
};

// 0x48 (0x70 - 0x28)
// Class OnlineSubsystemUtils.ConnectionCallbackProxy
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B2[0x28];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConnectionCallbackProxy");
		return Clss;
	}

	class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x68 (0x90 - 0x28)
// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B4[0x48];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreateSessionCallbackProxy");
		return Clss;
	}

	class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN);
};

// 0x48 (0x70 - 0x28)
// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B5[0x28];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DestroySessionCallbackProxy");
		return Clss;
	}

	class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x50 (0x78 - 0x28)
// Class OnlineSubsystemUtils.EndMatchCallbackProxy
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B7[0x30];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EndMatchCallbackProxy");
		return Clss;
	}

	class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, const class FString& MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome);
};

// 0x48 (0x70 - 0x28)
// Class OnlineSubsystemUtils.EndTurnCallbackProxy
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B8[0x28];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EndTurnCallbackProxy");
		return Clss;
	}

	class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, TScriptInterface<class ITurnBasedMatchInterface> TurnBasedMatchInterface);
};

// 0x60 (0x88 - 0x28)
// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BD[0x40];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FindSessionsCallbackProxy");
		return Clss;
	}

	class FString GetServerName(struct FBlueprintSessionResult& Result);
	int32 GetPingInMs(struct FBlueprintSessionResult& Result);
	int32 GetMaxPlayers(struct FBlueprintSessionResult& Result);
	int32 GetCurrentPlayers(struct FBlueprintSessionResult& Result);
	class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
};

// 0x58 (0x80 - 0x28)
// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BF[0x38];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FindTurnBasedMatchCallbackProxy");
		return Clss;
	}

	class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches);
};

// 0x58 (0x80 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C0[0x38];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InAppPurchaseCallbackProxy");
		return Clss;
	}

	class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, struct FInAppPurchaseProductRequest& ProductRequest);
};

// 0x68 (0x90 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C1[0x48];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InAppPurchaseQueryCallbackProxy");
		return Clss;
	}

	class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString>& ProductIdentifiers);
};

// 0x68 (0x90 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C2[0x48];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InAppPurchaseRestoreCallbackProxy");
		return Clss;
	}

	class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, class APlayerController* PlayerController);
};

// 0x60 (0x1A58 - 0x19F8)
// Class OnlineSubsystemUtils.IpConnection
class UIpConnection : public UNetConnection
{
public:
	uint8                                        Pad_17C3[0x50];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        SocketErrorDisconnectDelay;                        // 0x1A48(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17C4[0xC];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IpConnection");
		return Clss;
	}

};

// 0x50 (0x760 - 0x710)
// Class OnlineSubsystemUtils.IpNetDriver
class UIpNetDriver : public UNetDriver
{
public:
	uint8                                        LogPortUnreach : 1;                                // Mask: 0x1, PropSize: 0x10x710(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AllowPlayerPortUnreach : 1;                        // Mask: 0x2, PropSize: 0x10x710(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_161 : 6;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_17C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	uint32                                       MaxPortCountToTry;                                 // 0x714(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C6[0xC];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	uint32                                       ServerDesiredSocketReceiveBufferBytes;             // 0x724(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       ServerDesiredSocketSendBufferBytes;                // 0x728(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       ClientDesiredSocketReceiveBufferBytes;             // 0x72C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       ClientDesiredSocketSendBufferBytes;                // 0x730(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	double                                       MaxSecondsInReceive;                               // 0x738(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NbPacketsBetweenReceiveTimeTest;                   // 0x740(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17C8[0x1C];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IpNetDriver");
		return Clss;
	}

};

// 0x100 (0x128 - 0x28)
// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C9[0xE0];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("JoinSessionCallbackProxy");
		return Clss;
	}

	class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeaderboardBlueprintLibrary");
		return Clss;
	}

	bool WriteLeaderboardInteger(class APlayerController* PlayerController, class FName StatName, int32 StatValue);
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CB[0x20];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeaderboardFlushCallbackProxy");
		return Clss;
	}

	class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, class FName SessionName);
};

// 0x70 (0x98 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CC[0x50];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeaderboardQueryCallbackProxy");
		return Clss;
	}

	class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, class FName StatName);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemUtils.LogoutCallbackProxy
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CD[0x18];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LogoutCallbackProxy");
		return Clss;
	}

	class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x30 (0x248 - 0x218)
// Class OnlineSubsystemUtils.OnlineBeacon
class AOnlineBeacon : public AActor
{
public:
	uint8                                        Pad_17CE[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        BeaconConnectionInitialTimeout;                    // 0x220(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BeaconConnectionTimeout;                           // 0x224(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetDriver*                            NetDriver;                                         // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17CF[0x18];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineBeacon");
		return Clss;
	}

};

// 0x50 (0x298 - 0x248)
// Class OnlineSubsystemUtils.OnlineBeaconClient
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*               BeaconOwner;                                       // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetConnection*                        BeaconConnection;                                  // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBeaconConnectionState            ConnectionState;                                   // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D0[0x3F];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineBeaconClient");
		return Clss;
	}

	void ClientOnConnected();
};

// 0xB8 (0x300 - 0x248)
// Class OnlineSubsystemUtils.OnlineBeaconHost
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int32                                        ListenPort;                                        // 0x248(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x250(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17D2[0xA0];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineBeaconHost");
		return Clss;
	}

};

// 0x28 (0x240 - 0x218)
// Class OnlineSubsystemUtils.OnlineBeaconHostObject
class AOnlineBeaconHostObject : public AActor
{
public:
	class FString                                BeaconTypeName;                                    // 0x218(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AOnlineBeaconClient>       ClientBeaconActorClass;                            // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x230(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineBeaconHostObject");
		return Clss;
	}

};

// 0x100 (0x128 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	class FName                                  VoiceSubsystemNameOverride;                        // 0x28(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17D3[0xF8];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineEngineInterfaceImpl");
		return Clss;
	}

};

// 0x18 (0x50 - 0x38)
// Class OnlineSubsystemUtils.OnlinePIESettings
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                         bOnlinePIEEnabled;                                 // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FPIELoginSettingsInternal>     Logins;                                            // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlinePIESettings");
		return Clss;
	}

};

// 0x168 (0x190 - 0x28)
// Class OnlineSubsystemUtils.OnlineSessionClient
class UOnlineSessionClient : public UOnlineSession
{
public:
	uint8                                        Pad_17D5[0x160];                                   // Fixing Size After Last Property  [ Dumper-8 ]
	bool                                         bIsFromInvite;                                     // 0x188(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHandlingDisconnect;                               // 0x189(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D6[0x6];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineSessionClient");
		return Clss;
	}

};

// 0xC0 (0x358 - 0x298)
// Class OnlineSubsystemUtils.PartyBeaconClient
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_17D7[0x30];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                DestSessionId;                                     // 0x2C8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPartyReservation                     PendingReservation;                                // 0x2D8(0x50)(Protected, NativeAccessSpecifierProtected)
	enum class EClientRequestType                RequestType;                                       // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingReservationSent;                           // 0x329(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCancelReservation;                                // 0x32A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D8[0x2D];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyBeaconClient");
		return Clss;
	}

	void ServerUpdateReservationRequest(const class FString& SessionId, struct FPartyReservation& ReservationUpdate);
	void ServerReservationRequest(const class FString& SessionId, struct FPartyReservation& Reservation);
	void ServerRemoveMemberFromReservationRequest(const class FString& SessionId, struct FPartyReservation& ReservationUpdate);
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl& PartyLeader);
	void ClientSendReservationUpdates(int32 NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse);
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse);
};

// 0x78 (0x2B8 - 0x240)
// Class OnlineSubsystemUtils.PartyBeaconHost
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                     State;                                             // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D9[0x60];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	bool                                         bLogoutOnSessionTimeout;                           // 0x2A8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        SessionTimeoutSecs;                                // 0x2AC(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TravelSessionTimeoutSecs;                          // 0x2B0(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17DB[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyBeaconHost");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class OnlineSubsystemUtils.PartyBeaconState
class UPartyBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxReservations;                                   // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumTeams;                                          // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumPlayersPerTeam;                                 // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TeamAssignmentMethod;                              // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReservedHostTeamNum;                               // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ForceTeamNum;                                      // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictCrossConsole;                             // 0x50(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableRemovalRequests;                            // 0x51(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17DC[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FPartyReservation>             Reservations;                                      // 0x58(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_17DD[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyBeaconState");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17DF[0x28];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuitMatchCallbackProxy");
		return Clss;
	}

	class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, enum class EMPMatchOutcome Outcome, int32 TurnTimeoutInSeconds);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E0[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ShowLoginUICallbackProxy");
		return Clss;
	}

	class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
};

// 0xE8 (0x380 - 0x298)
// Class OnlineSubsystemUtils.SpectatorBeaconClient
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_17E1[0x30];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                DestSessionId;                                     // 0x2C8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSpectatorReservation                 PendingReservation;                                // 0x2D8(0x78)(Protected, NativeAccessSpecifierProtected)
	enum class ESpectatorClientRequestType       RequestType;                                       // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingReservationSent;                           // 0x351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCancelReservation;                                // 0x352(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17E2[0x2D];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpectatorBeaconClient");
		return Clss;
	}

	void ServerReservationRequest(const class FString& SessionId, struct FSpectatorReservation& Reservation);
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl& Spectator);
	void ClientSendReservationUpdates(int32 NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse);
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse);
};

// 0x78 (0x2B8 - 0x240)
// Class OnlineSubsystemUtils.SpectatorBeaconHost
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	class USpectatorBeaconState*                 State;                                             // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17E3[0x60];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	bool                                         bLogoutOnSessionTimeout;                           // 0x2A8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        SessionTimeoutSecs;                                // 0x2AC(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TravelSessionTimeoutSecs;                          // 0x2B0(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17E5[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpectatorBeaconHost");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class OnlineSubsystemUtils.SpectatorBeaconState
class USpectatorBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxReservations;                                   // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictCrossConsole;                             // 0x38(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FSpectatorReservation>         Reservations;                                      // 0x40(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_17E7[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpectatorBeaconState");
		return Clss;
	}

};

// 0x0 (0x298 - 0x298)
// Class OnlineSubsystemUtils.TestBeaconClient
class ATestBeaconClient : public AOnlineBeaconClient
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestBeaconClient");
		return Clss;
	}

	void ServerPong();
	void ClientPing();
};

// 0x0 (0x240 - 0x240)
// Class OnlineSubsystemUtils.TestBeaconHost
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestBeaconHost");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TurnBasedBlueprintLibrary");
		return Clss;
	}

	void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32 PlayerIndex, class FString* PlayerDisplayName);
	void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32* PlayerIndex);
	void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, bool* bIsMyTurn);
};

// 0x60 (0x680 - 0x620)
// Class OnlineSubsystemUtils.VoipListenerSynthComponent
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	uint8                                        Pad_17EB[0x60];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VoipListenerSynthComponent");
		return Clss;
	}

	bool IsIdling();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
