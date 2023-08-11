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

// 0xB0 (0xB0 - 0x0)
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_7AE1D485464AEC7EB429C3877D33AF69
struct UGA_Vehicle_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_209BF560404B83EBEAA8DD8090C443AC
struct UGA_Vehicle_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_ActivateAbility
struct UGA_Vehicle_ExitHoldEvent_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_OnEndAbility
struct UGA_Vehicle_ExitHoldEvent_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x508 (0x508 - 0x0)
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.ExecuteUbergraph_GA_Vehicle_ExitHoldEvent
struct UGA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayEventData                    Temp_struct_Variable;                              // 0x8(0xB0)()
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue;            // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0xC0(0xB8)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F1E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayEventData                    K2Node_CustomEvent_Payload;                        // 0x180(0xB0)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x230(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                    Temp_struct_Variable_1;                            // 0x240(0xB0)()
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue_1;          // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x300(0x40)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x349(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F20[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x350(0x28)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x378(0x10)(ZeroConstructor, ReferenceParm)
	struct FGameplayEventData                    K2Node_CustomEvent_Payload_1;                      // 0x388(0xB0)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x438(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F21[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_1;  // 0x450(0xB8)(ContainsInstancedReference)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
