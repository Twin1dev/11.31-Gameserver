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

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.K2_ActivateAbility
struct UGA_Athena_HidingProp_HidingInProp_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.K2_OnEndAbility
struct UGA_Athena_HidingProp_HidingInProp_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp
struct UGA_Athena_HidingProp_HidingInProp_C_ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4868[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4869[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_486A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_486B[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_PlayAnimMontage_ReturnValue;              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
