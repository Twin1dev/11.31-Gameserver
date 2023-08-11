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

// 0x40 (0x40 - 0x0)
// Function GA_Device_Floor_EliminationZone.GA_Device_Floor_EliminationZone_C.ApplyToRift
struct UGA_Device_Floor_EliminationZone_C_ApplyToRift_Params
{
public:
	class ABuildingRift*                         Rift;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x8(0x28)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue; // 0x30(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x12 (0x12 - 0x0)
// Function GA_Device_Floor_EliminationZone.GA_Device_Floor_EliminationZone_C.IsPawnsTeamAffected
struct UGA_Device_Floor_EliminationZone_C_IsPawnsTeamAffected_Params
{
public:
	class AFortPawn*                             PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsAffected;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4848[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function GA_Device_Floor_EliminationZone.GA_Device_Floor_EliminationZone_C.ApplyToVehicle
struct UGA_Device_Floor_EliminationZone_C_ApplyToVehicle_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> VehicleInterface;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                VehicleActor;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x18(0x28)()
	class AFortPlayerPawn*                       CallFunc_GetDriver_ReturnValue;                    // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPawnsTeamAffected_bIsAffected;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4849[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue; // 0x50(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function GA_Device_Floor_EliminationZone.GA_Device_Floor_EliminationZone_C.ApplyToPawn
struct UGA_Device_Floor_EliminationZone_C_ApplyToPawn_Params
{
public:
	class AFortPawn*                             Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PawnAffected;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_484A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x10(0x28)()
	bool                                         CallFunc_IsPawnsTeamAffected_bIsAffected;          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_484B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_484C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_484D[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue; // 0x68(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x38 (0x38 - 0x0)
// Function GA_Device_Floor_EliminationZone.GA_Device_Floor_EliminationZone_C.UpdateSpecHandle
struct UGA_Device_Floor_EliminationZone_C_UpdateSpecHandle_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_484E[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_484F[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x18(0x10)()
	struct FGameplayEffectSpecHandle             CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x28(0x10)()
};

// 0xFD (0xFD - 0x0)
// Function GA_Device_Floor_EliminationZone.GA_Device_Floor_EliminationZone_C.ParseTargetData
struct UGA_Device_Floor_EliminationZone_C_ParseTargetData_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class AActor*>                        ActorsFromTargetData;                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                         ValidActorsFound;                                  // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4850[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AActor*>                        Passengers;                                        // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4851[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AActor*>                        CallFunc_GetAllActorsFromTargetData_ReturnValue;   // 0x58(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4852[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ApplyToPawn_PawnAffected;                 // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4853[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4854[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_Array_Get_Item_1;                         // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4855[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class ABuildingRift*                         K2Node_DynamicCast_AsBuilding_Rift;                // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4856[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4857[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface;       // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ApplyToPawn_PawnAffected_1;               // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4858[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AFortPlayerPawn*>               CallFunc_GetAllPassengers_ReturnValue;             // 0xE8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function GA_Device_Floor_EliminationZone.GA_Device_Floor_EliminationZone_C.Cancelled_FDB0569E41B2D20233CC5FAB885737C4
struct UGA_Device_Floor_EliminationZone_C_Cancelled_FDB0569E41B2D20233CC5FAB885737C4_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function GA_Device_Floor_EliminationZone.GA_Device_Floor_EliminationZone_C.Targeted_FDB0569E41B2D20233CC5FAB885737C4
struct UGA_Device_Floor_EliminationZone_C_Targeted_FDB0569E41B2D20233CC5FAB885737C4_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Device_Floor_EliminationZone.GA_Device_Floor_EliminationZone_C.K2_ActivateAbility
struct UGA_Device_Floor_EliminationZone_C_K2_ActivateAbility_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Device_Floor_EliminationZone.GA_Device_Floor_EliminationZone_C.GA_LifeTimer
struct UGA_Device_Floor_EliminationZone_C_GA_LifeTimer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Device_Floor_EliminationZone.GA_Device_Floor_EliminationZone_C.ExecuteActivateTrapGameplayCue
struct UGA_Device_Floor_EliminationZone_C_ExecuteActivateTrapGameplayCue_Params
{
public:
};

// 0x1B1 (0x1B1 - 0x0)
// Function GA_Device_Floor_EliminationZone.GA_Device_Floor_EliminationZone_C.ExecuteUbergraph_GA_Device_Floor_EliminationZone
struct UGA_Device_Floor_EliminationZone_C_ExecuteUbergraph_GA_Device_Floor_EliminationZone_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4859[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAbilityTask_WaitTargetSelection*  CallFunc_WaitTargetSelection_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_485A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_485B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class ABuildingTrap*                         K2Node_DynamicCast_AsBuilding_Trap;                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_485C[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTag                          CallFunc_GetReloadBeginGameplayCueTag_ReturnValue; // 0x4C(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_485D[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable;                              // 0x58(0x28)()
	struct FGameplayTag                          Temp_struct_Variable_1;                            // 0x80(0x8)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue_1; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x90(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0xB8(0x8)(NoDestructor, HasGetValueTypeHash)
	class ABuildingTrap*                         K2Node_DynamicCast_AsBuilding_Trap_1;              // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_485E[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTag                          CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_1; // 0xCC(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_485F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xD8(0x10)(ZeroConstructor, NoDestructor)
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue_2; // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingTrap*                         K2Node_DynamicCast_AsBuilding_Trap_2;              // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4860[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xFC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4861[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFireDelay_ReturnValue;                 // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetDelayBeginGameplayCueTag_ReturnValue;  // 0x11C(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAbilityLevel_ReturnValue;              // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_1;                   // 0x128(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_1;               // 0x150(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4862[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x160(0x10)()
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue; // 0x170(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4863[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue_3; // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingTrap*                         K2Node_DynamicCast_AsBuilding_Trap_3;              // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4864[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTag                          CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_2; // 0x194(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4865[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADevice_Floor_EliminationZone_C*       K2Node_DynamicCast_AsDevice_Floor_Elimination_Zone; // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
