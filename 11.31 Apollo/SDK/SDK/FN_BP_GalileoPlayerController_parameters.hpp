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

// 0x8 (0x8 - 0x0)
// Function BP_GalileoPlayerController.BP_GalileoPlayerController_C.SetBlackboardValues
struct ABP_GalileoPlayerController_C_SetBlackboardValues_Params
{
public:
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_GalileoPlayerController.BP_GalileoPlayerController_C.ReceiveBeginPlay
struct ABP_GalileoPlayerController_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_GalileoPlayerController.BP_GalileoPlayerController_C.BlueprintOnBehaviorTreeStarted
struct ABP_GalileoPlayerController_C_BlueprintOnBehaviorTreeStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_GalileoPlayerController.BP_GalileoPlayerController_C.BndEvt__FortAthenaNpcGalileo_K2Node_ComponentBoundEvent_0_GalileoComponentOnPatrollingStart__DelegateSignature
struct ABP_GalileoPlayerController_C_BndEvt__FortAthenaNpcGalileo_K2Node_ComponentBoundEvent_0_GalileoComponentOnPatrollingStart__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_GalileoPlayerController.BP_GalileoPlayerController_C.BndEvt__FortAthenaNpcGalileo_K2Node_ComponentBoundEvent_1_GalileoComponentOnPatrollingStop__DelegateSignature
struct ABP_GalileoPlayerController_C_BndEvt__FortAthenaNpcGalileo_K2Node_ComponentBoundEvent_1_GalileoComponentOnPatrollingStop__DelegateSignature_Params
{
public:
};

// 0x42 (0x42 - 0x0)
// Function BP_GalileoPlayerController.BP_GalileoPlayerController_C.ExecuteUbergraph_BP_GalileoPlayerController
struct ABP_GalileoPlayerController_C_ExecuteUbergraph_BP_GalileoPlayerController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6665[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class ABP_PlayerPawn_Athena_Galileo_C*       K2Node_DynamicCast_AsBP_Player_Pawn_Athena_Galileo; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6666[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class ABP_PlayerPawn_Athena_Galileo_C*       K2Node_DynamicCast_AsBP_Player_Pawn_Athena_Galileo_1; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6667[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x38(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
