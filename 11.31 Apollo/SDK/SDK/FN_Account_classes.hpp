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

// 0x10 (0x38 - 0x28)
// Class Account.ExternalAccountProvider
class UExternalAccountProvider : public UObject
{
public:
	TArray<struct FExternalAccountServiceConfig> Services;                                          // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ExternalAccountProvider");
		return Clss;
	}

};

// 0x6A0 (0x6C8 - 0x28)
// Class Account.OnlineAccountCommon
class UOnlineAccountCommon : public UObject
{
public:
	uint8                                        Pad_2090[0x10];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                AvailabilityServiceGameName;                       // 0x38(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireLightswitchAtStartup;                      // 0x48(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2091[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                EulaKey;                                           // 0x50(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FWebEnvUrl>                    WebCreateEpicAccountUrl;                           // 0x60(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bAllowLocalLogout;                                 // 0x70(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowLocalLogoutKairos;                           // 0x71(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUsePinGrantCodeForLinking;                        // 0x72(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2092[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                RedeemAccessUrl;                                   // 0x78(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                RequestFreeAccessUrl;                              // 0x88(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                RealGameAccessUrl;                                 // 0x98(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SkipRedeemOfflinePurchasesChance;                  // 0xA8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldGrantFreeAccess;                            // 0xAC(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2093[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	bool                                         bAllowHomeSharingAccess;                           // 0xAE(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireUGCPrivilege;                              // 0xAF(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2094[0x298];                                   // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        AccessGrantDelaySeconds;                           // 0x348(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2095[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWaitingRoomState*                     WaitingRoomState;                                  // 0x350(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2096[0x338];                                   // Fixing Size After Last Property  [ Dumper-8 ]
	bool                                         bAutoCreateHeadlessAccount;                        // 0x690(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2097[0x37];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineAccountCommon");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class Account.WaitingRoomState
class UWaitingRoomState : public UObject
{
public:
	uint8                                        Pad_2098[0x34];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        GracePeriodMins;                                   // 0x5C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2099[0x28];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaitingRoomState");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
