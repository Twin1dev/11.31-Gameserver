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
// Class McpProfileSys.McpItemAware
class IMcpItemAware : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpItemAware");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class McpProfileSys.McpItemDefinitionBase
class UMcpItemDefinitionBase : public UPrimaryDataAsset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpItemDefinitionBase");
		return Clss;
	}

};

// 0xF8 (0x120 - 0x28)
// Class McpProfileSys.McpProfile
class UMcpProfile : public UObject
{
public:
	bool                                         AllowSubscriptionToNotificationsService;           // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AC3[0x57];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                DebugName;                                         // 0x80(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bProfileLockOperationPending;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bProfileUnlockOperationPending;                    // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableMocks;                                      // 0x92(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AC4[0x1D];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class UMcpProfileGroup*                      ProfileGroup;                                      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ProfileId;                                         // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int64                                        ProfileRevision;                                   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        FullProfileQueryQueued;                            // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bProfileWriteLocked;                               // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AC5[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FDateTime                             ProfileWriteLockExpireTime;                        // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CommandRevision;                                   // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AC6[0x3C];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfile");
		return Clss;
	}

	void UnlockProfileForWrite(const class FString& Code, struct FDedicatedServerUrlContext* Context);
	void QueryPublicProfile(struct FBaseUrlContext* Context);
	void QueryProfile(struct FBaseUrlContext* Context);
	void LockProfileForWrite(const class FString& Code, int32 Timeout, struct FDedicatedServerUrlContext* Context);
	void DeleteProfile(struct FClientUrlContext* Context);
	void DeleteAllProfiles(struct FClientUrlContext* Context);
};

// 0x268 (0x290 - 0x28)
// Class McpProfileSys.McpProfileGroup
class UMcpProfileGroup : public UObject
{
public:
	uint8                                        Pad_1AC7[0xF4];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        DelayMcpResults;                                   // 0x11C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        WeeklyIntervalStartDay;                            // 0x120(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FProfileEntry>                 ProfileList;                                       // 0x128(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AC9[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                PlayerName;                                        // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsServer;                                         // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ACA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                ProfileNotificationsStompTopic;                    // 0x158(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ACB[0x40];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                LastMcpVersion;                                    // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                LastContentVersion;                                // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimespan                             LocalTimeOffset;                                   // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ACC[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                LockCode;                                          // 0x1D8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMcpProfile*>                   LockedProfiles;                                    // 0x1E8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                LockedProfilesString;                              // 0x1F8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ProfileWriteLockTimeoutSecs;                       // 0x208(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSubscribedToNotifications;                        // 0x20C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ACD[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                ApplyStashEndPoint;                                // 0x210(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ACE[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	bool                                         bSendProfileCommandRevisions;                      // 0x228(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAsyncParseProfileUpdates;                         // 0x229(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ACF[0x56];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        MaxChangesToForwardInUpdate;                       // 0x280(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AD0[0xC];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfileGroup");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class McpProfileSys.McpProfileManager
class UMcpProfileManager : public UObject
{
public:
	uint8                                        Pad_1AD1[0x10];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FProfileGroupEntry>            ServerProfileGroups;                               // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FProfileGroupEntry>            ClientProfileGroups;                               // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfileManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
