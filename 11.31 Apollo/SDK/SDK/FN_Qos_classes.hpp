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

// 0x38 (0x2D0 - 0x298)
// Class Qos.QosBeaconClient
class AQosBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_1ADC[0x38];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QosBeaconClient");
		return Clss;
	}

	void ServerQosRequest(const class FString& InSessionId);
	void ClientQosResponse(enum class EQosResponseType Response);
};

// 0x10 (0x250 - 0x240)
// Class Qos.QosBeaconHost
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_1ADD[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QosBeaconHost");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class Qos.QosEvaluator
class UQosEvaluator : public UObject
{
public:
	uint8                                        Pad_1ADE[0x20];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	bool                                         bInProgress;                                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCancelOperation;                                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ADF[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FDatacenterQosInstance>        Datacenters;                                       // 0x50(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AE0[0x20];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QosEvaluator");
		return Clss;
	}

};

// 0x98 (0xC0 - 0x28)
// Class Qos.QosRegionManager
class UQosRegionManager : public UObject
{
public:
	int32                                        NumTestsPerRegion;                                 // 0x28(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PingTimeout;                                       // 0x2C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FQosRegionInfo>                RegionDefinitions;                                 // 0x30(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FQosDatacenterInfo>            DatacenterDefinitions;                             // 0x40(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	struct FDateTime                             LastCheckTimestamp;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UQosEvaluator*                         Evaluator;                                         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EQosCompletionResult              QosEvalResult;                                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AE1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FRegionQosInstance>            RegionOptions;                                     // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                ForceRegionId;                                     // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRegionForcedViaCommandline;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                SelectedRegionId;                                  // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AE3[0x20];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QosRegionManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
