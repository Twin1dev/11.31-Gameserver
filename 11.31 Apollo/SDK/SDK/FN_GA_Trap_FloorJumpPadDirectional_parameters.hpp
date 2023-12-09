#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0
struct UGA_Trap_FloorJumpPadDirectional_C_Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.Targeted_9399FB2A485BD9AC6632A4B347C4BBE0
struct UGA_Trap_FloorJumpPadDirectional_C_Targeted_9399FB2A485BD9AC6632A4B347C4BBE0_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.PlayPlayerFX
struct UGA_Trap_FloorJumpPadDirectional_C_PlayPlayerFX_Params
{
public:
	class AFortPlayerPawn*                       Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52CC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TrapTransform;                                     // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x2A0 (0x2A0 - 0x0)
// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional
struct UGA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_GetAbilityLevel_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x18(0x10)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingTrap*                         K2Node_DynamicCast_AsBuilding_Trap;                // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52D3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x60(0x30)(IsPlainOldData, NoDestructor)
	int32                                        CallFunc_GetTrapLevel_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDamageDelay_ReturnValue;               // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetActivateTrapGameplayCueTag_ReturnValue; // 0x98(0x8)(NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFireDelay_ReturnValue;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue; // 0xAC(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetDelayBeginGameplayCueTag_ReturnValue;  // 0xB4(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue_1; // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingTrap*                         K2Node_DynamicCast_AsBuilding_Trap_1;              // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_GetReloadBeginGameplayCueTag_ReturnValue; // 0xE4(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_WaitTargetSelection*  CallFunc_WaitTargetSelection_ReturnValue;          // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDataCountFromTargetData_ReturnValue;   // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable;                              // 0x108(0x28)(None)
	class AFortPlayerPawn*                       K2Node_CustomEvent_player;                         // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52DA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_CustomEvent_TrapTransform;                  // 0x140(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_TransformDirection_ReturnValue;           // 0x170(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x17C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x188(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x194(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1A0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x1B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0x1C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue;              // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesSocketExist_ReturnValue_1;            // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52DC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_1;                            // 0x1D0(0x8)(NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_GetActorsFromTargetData_ReturnValue;      // 0x1D8(0x10)(ZeroConstructor, ReferenceParm)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1F6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52DD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x200(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x228(0x8)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_1;                         // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x250(0x10)(ZeroConstructor, NoDestructor)
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x260(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_1;                   // 0x270(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_1;               // 0x298(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


