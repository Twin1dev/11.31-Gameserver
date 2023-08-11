#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x9C (0x9C - 0x0)
// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.UserConstructionScript
struct ABP_SafeZoneStorm_C_UserConstructionScript_Params
{
public:
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x8C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ReceiveBeginPlay
struct ABP_SafeZoneStorm_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.MobileClouds
struct ABP_SafeZoneStorm_C_MobileClouds_Params
{
public:
	bool                                         Mobile;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowClouds
struct ABP_SafeZoneStorm_C_ShowClouds_Params
{
public:
	float                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowStormScreenEffect
struct ABP_SafeZoneStorm_C_ShowStormScreenEffect_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE (0xE - 0x0)
// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ExecuteUbergraph_BP_SafeZoneStorm
struct ABP_SafeZoneStorm_C_ExecuteUbergraph_BP_SafeZoneStorm_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Mobile;                         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56A4[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_CustomEvent_Amount;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Show;                           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
