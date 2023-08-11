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
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Get Effect Color Index
struct APlayerPawn_Athena_C_Get_Effect_Color_Index_Params
{
public:
	enum class ECreativeColorSetType             Color_Type;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FAE[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Color_Index;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GalileoMaterialSetup
struct APlayerPawn_Athena_C_GalileoMaterialSetup_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x106 (0x106 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Get Highest Priority Highlight
struct APlayerPawn_Athena_C_Get_Highest_Priority_Highlight_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        Top_Priority;                                      // 0x8(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Best_Source;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        CallFunc_Map_Find_Value;                           // 0x4C(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FAF[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class UObject*>                       CallFunc_Map_Keys_Keys;                            // 0x80(0x10)(ZeroConstructor, ReferenceParm)
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        CallFunc_Map_Find_Value_1;                         // 0x98(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB0[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPawnHighlight                        CallFunc_Map_Find_Value_2;                         // 0xCC(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB1[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6D (0x6D - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Highlight Pawn from Source
struct APlayerPawn_Athena_C_Highlight_Pawn_from_Source_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        Highlight;                                         // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Only_Update_If_Current;                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPawnHighlight                        CallFunc_Map_Find_Value;                           // 0x3C(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x42 (0x42 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Remove Pawn Highlight from Source
struct APlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Get_Highest_Priority_Highlight_Source;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        CallFunc_Get_Highest_Priority_Highlight_Top_Priority; // 0x10(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyPawnHighlight
struct APlayerPawn_Athena_C_ApplyPawnHighlight_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        HitGlow;                                           // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayRespawnFXOnSpawn
struct APlayerPawn_Athena_C_OnRep_PlayRespawnFXOnSpawn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.LockonSearchCompleteTimedOut
struct APlayerPawn_Athena_C_LockonSearchCompleteTimedOut_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLockOnSearchCompleted
struct APlayerPawn_Athena_C_OnLockOnSearchCompleted_Params
{
public:
	bool                                         bConsumeEvent;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPartyInProgress
struct APlayerPawn_Athena_C_SetPartyInProgress_Params
{
public:
	bool                                         bIsPartyInProgress;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPetHidden
struct APlayerPawn_Athena_C_SetPetHidden_Params
{
public:
	bool                                         NewHidden;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanUpTeleportationFXLight
struct APlayerPawn_Athena_C_CleanUpTeleportationFXLight_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5D (0x5D - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RestoreCharacterMats
struct APlayerPawn_Athena_C_RestoreCharacterMats_Params
{
public:
	int32                                        Itr;                                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupDissolveFx
struct APlayerPawn_Athena_C_SetupDissolveFx_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInterface*                    Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetupDissolveFx_ReturnValue;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateDissolveFx
struct APlayerPawn_Athena_C_UpdateDissolveFx_Params
{
public:
	float                                        Scalar_Transition;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scalar_ZHeight;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scalar_LightIntensity;                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SpawnTeleportationLight
struct APlayerPawn_Athena_C_SpawnTeleportationLight_Params
{
public:
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UPointLightComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF8 (0xF8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.FindBounds
struct APlayerPawn_Athena_C_FindBounds_Params
{
public:
	bool                                         bGunTrue;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_GetActorBounds_Origin;                    // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorBounds_BoxExtent;                 // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FB8[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x60(0x30)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x94(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0xA0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0xD0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0xDC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0xE8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportOut
struct APlayerPawn_Athena_C_QueueTeleportOut_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportIn
struct APlayerPawn_Athena_C_QueueTeleportIn_Params
{
public:
};

// 0x3A (0x3A - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnStartLongInteract
struct APlayerPawn_Athena_C_OnStartLongInteract_Params
{
public:
	class AActor*                                ReceivingActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Out_bConsumeEvent;                                 // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Out_bSkipSetInteractDuration;                      // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Out_bSkipStartAnimation;                           // 0xA(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemInteractionType              Out_ItemInteractionType;                           // 0xB(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB9[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.InWarmUp
struct APlayerPawn_Athena_C_InWarmUp_Params
{
public:
	bool                                         InWarmUp;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FBB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_GameState_C*                   K2Node_DynamicCast_AsAthena_Game_State;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StopLoopingAudio
struct APlayerPawn_Athena_C_StopLoopingAudio_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.EnableWaterAudio
struct APlayerPawn_Athena_C_EnableWaterAudio_Params
{
public:
	bool                                         Is_Entering_Water;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Temp_object_Variable_2;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FBE[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FC0[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            K2Node_Select_Default;                             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x68(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            K2Node_Select_Default_1;                           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetLocationInCircle_XY
struct APlayerPawn_Athena_C_GetLocationInCircle_XY_Params
{
public:
	struct FVector                               LocationLocalSpace;                                // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloat_ReturnValue;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetPI_ReturnValue;                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Cos_ReturnValue;                          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Sin_ReturnValue;                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.InitAthenaFoleyAudio
struct APlayerPawn_Athena_C_InitAthenaFoleyAudio_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC3[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Temp_object_Variable_2;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Temp_object_Variable_4;                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_5;                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Temp_object_Variable_6;                            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_7;                            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Temp_object_Variable_8;                            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_9;                            // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Temp_object_Variable_10;                           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_11;                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Temp_object_Variable_12;                           // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_13;                           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            K2Node_Select_Default;                             // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default_1;                           // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default_2;                           // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default_3;                           // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default_4;                           // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default_5;                           // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default_6;                           // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC9 (0xC9 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UserConstructionScript
struct APlayerPawn_Athena_C_UserConstructionScript_Params
{
public:
	struct FFortPlayerPawnStats                  CallFunc_GetDataTableRowFromName_OutRow;           // 0x0(0xC8)()
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Storm Audio Fader__FinishedFunc
struct APlayerPawn_Athena_C_Storm_Audio_Fader__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Storm Audio Fader__UpdateFunc
struct APlayerPawn_Athena_C_Storm_Audio_Fader__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__FinishedFunc
struct APlayerPawn_Athena_C_Timeline_0__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__UpdateFunc
struct APlayerPawn_Athena_C_Timeline_0__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_GlowCharacterMesh__FinishedFunc
struct APlayerPawn_Athena_C_TFX_GlowCharacterMesh__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_GlowCharacterMesh__UpdateFunc
struct APlayerPawn_Athena_C_TFX_GlowCharacterMesh__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_ResOutCharacterMesh__FinishedFunc
struct APlayerPawn_Athena_C_TFX_ResOutCharacterMesh__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_ResOutCharacterMesh__UpdateFunc
struct APlayerPawn_Athena_C_TFX_ResOutCharacterMesh__UpdateFunc_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLoaded_B148701F472F44FF0B6CAFAE91E06FBF
struct APlayerPawn_Athena_C_OnLoaded_B148701F472F44FF0B6CAFAE91E06FBF_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReady_FA189ECA4DFF2C49E5269D832F66D8EC
struct APlayerPawn_Athena_C_OnReady_FA189ECA4DFF2C49E5269D832F66D8EC_Params
{
public:
	class AFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC0 (0xC0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FCA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveDestroyed
struct APlayerPawn_Athena_C_ReceiveDestroyed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SafeZoneStatusChanged
struct APlayerPawn_Athena_C_SafeZoneStatusChanged_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Equipping
struct APlayerPawn_Athena_C_GameplayCue_Athena_Equipping_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FCB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0xE8 (0xE8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathPlayEffects
struct APlayerPawn_Athena_C_OnDeathPlayEffects_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FCC[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x34(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_4FCD[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPawn*                             InstigatedBy;                                      // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xC0 (0xC0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FCE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ContrailCheck
struct APlayerPawn_Athena_C_ContrailCheck_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Player.BeingRevivedFromDBNO
struct APlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FCF[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveStormFX
struct APlayerPawn_Athena_C_RemoveStormFX_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOResurrect
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FD0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0xC (0xC - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Play Lightning Flash Audio
struct APlayerPawn_Athena_C_Play_Lightning_Flash_Audio_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Start Storm Audio Fader
struct APlayerPawn_Athena_C_Start_Storm_Audio_Fader_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterVolume
struct APlayerPawn_Athena_C_OnEnteredWaterVolume_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterVolume
struct APlayerPawn_Athena_C_OnExitedWaterVolume_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.NotifyTeammateSkydivedFromBus
struct APlayerPawn_Athena_C_NotifyTeammateSkydivedFromBus_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveEndPlay
struct APlayerPawn_Athena_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLeftReplayRelevancy
struct APlayerPawn_Athena_C_OnLeftReplayRelevancy_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredReplayRelevancy
struct APlayerPawn_Athena_C_OnEnteredReplayRelevancy_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCharacterCustomizationCompleted
struct APlayerPawn_Athena_C_OnCharacterCustomizationCompleted_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayResOut
struct APlayerPawn_Athena_C_PlayResOut_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnResInDuringWarmup
struct APlayerPawn_Athena_C_OnResInDuringWarmup_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayResInFX
struct APlayerPawn_Athena_C_PlayResInFX_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayResOutFX
struct APlayerPawn_Athena_C_PlayResOutFX_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddStormFX
struct APlayerPawn_Athena_C_AddStormFX_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZonePhaseAndGameplayCueTag
struct APlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag_Params
{
public:
	int32                                        InSafeZonePhase;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSpawnGameplayCue;                                 // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZoneTagWhenChanged
struct APlayerPawn_Athena_C_SetSafeZoneTagWhenChanged_Params
{
public:
	int32                                        NewWhichSafeZoneTag;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GameplayTag;                                       // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         bSpawnGameplayCue;                                 // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnOutsideSafeZonePhaseChanged
struct APlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged_Params
{
public:
	int32                                        SafeZonePhase;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCue
struct APlayerPawn_Athena_C_RemoveSafeZoneGameplayCue_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReceivedStormSurgeDamage
struct APlayerPawn_Athena_C_OnReceivedStormSurgeDamage_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft
struct APlayerPawn_Athena_C_MeleeSwingLeft_Params
{
public:
	bool                                         First_Left;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight
struct APlayerPawn_Athena_C_MeleeSwingRight_Params
{
public:
	bool                                         First_Right;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReTrySetupDissolveFx
struct APlayerPawn_Athena_C_ReTrySetupDissolveFx_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOEnter
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x4 (0x4 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ActivateInvincibleVisuals
struct APlayerPawn_Athena_C_ActivateInvincibleVisuals_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Reloading
struct APlayerPawn_Athena_C_GameplayCue_Athena_Reloading_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x1C (0x1C - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TeleportInNSeconds
struct APlayerPawn_Athena_C_TeleportInNSeconds_Params
{
public:
	float                                        SecondsTillTeleport;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DestLocation;                                      // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DestRotation;                                      // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ClientRunSnowGC
struct APlayerPawn_Athena_C_ClientRunSnowGC_Params
{
public:
	bool                                         Instant;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.WhiteoutAndTeleport
struct APlayerPawn_Athena_C_WhiteoutAndTeleport_Params
{
public:
	struct FVector                               DestLocation;                                      // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DestRotation;                                      // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Instant;                                           // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Gravity;                                           // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Boost
struct APlayerPawn_Athena_C_GameplayCue_Athena_Boost_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FD4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopGhost
struct APlayerPawn_Athena_C_OnCreativeStopGhost_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartGhost
struct APlayerPawn_Athena_C_OnCreativeStartGhost_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft_End
struct APlayerPawn_Athena_C_MeleeSwingLeft_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight_End
struct APlayerPawn_Athena_C_MeleeSwingRight_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSafeZoneGameplayCue
struct APlayerPawn_Athena_C_AddSafeZoneGameplayCue_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCueServerToClient
struct APlayerPawn_Athena_C_RemoveSafeZoneGameplayCueServerToClient_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSuccessfulBuildingEdit
struct APlayerPawn_Athena_C_OnSuccessfulBuildingEdit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Play Respawn FX
struct APlayerPawn_Athena_C_Play_Respawn_FX_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSpawnImmunityTimeReset
struct APlayerPawn_Athena_C_OnSpawnImmunityTimeReset_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterBody
struct APlayerPawn_Athena_C_OnEnteredWaterBody_Params
{
public:
	class AFortWaterBodyActor*                   WaterBody;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFirstBody;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterBody
struct APlayerPawn_Athena_C_OnExitedWaterBody_Params
{
public:
	class AFortWaterBodyActor*                   WaterBody;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsLastBody;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.K2_OnMovementModeChanged
struct APlayerPawn_Athena_C_K2_OnMovementModeChanged_Params
{
public:
	enum class EMovementMode                     PrevMovementMode;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     NewMovementMode;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        PrevCustomMode;                                    // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        NewCustomMode;                                     // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveBeginPlay
struct APlayerPawn_Athena_C_ReceiveBeginPlay_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceivePossessed
struct APlayerPawn_Athena_C_ReceivePossessed_Params
{
public:
	class AController*                           NewController;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveContrails
struct APlayerPawn_Athena_C_RemoveContrails_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLanded
struct APlayerPawn_Athena_C_OnLanded_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnBeginWaterSprintBoost
struct APlayerPawn_Athena_C_OnBeginWaterSprintBoost_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.isHiddingInProp
struct APlayerPawn_Athena_C_IsHiddingInProp_Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupColdTag
struct APlayerPawn_Athena_C_SetupColdTag_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyColdTag
struct APlayerPawn_Athena_C_ApplyColdTag_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ServerSetCreativeEffectColorIndex
struct APlayerPawn_Athena_C_ServerSetCreativeEffectColorIndex_Params
{
public:
	struct FFCreativeEffectColorIndex            Index;                                             // 0x0(0x5)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FD5[0x3];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x10 (0x10 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyColdTag_Retry
struct APlayerPawn_Athena_C_ApplyColdTag_Retry_Params
{
public:
	class UFortAbilitySystemComponent*           AbilitySystemComponent;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       AffectedPawn;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1314 (0x1314 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ExecuteUbergraph_PlayerPawn_Athena
struct APlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FD6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4FD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FApplyVariantsAdditionalParams        Temp_struct_Variable;                              // 0x20(0x18)(ConstParm, ContainsInstancedReference)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_7;               // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FD8[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_7;              // 0x50(0xB8)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_6;               // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FD9[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_6;              // 0x110(0xB8)(ContainsInstancedReference)
	float                                        K2Node_Event_Damage;                               // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FDA[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x1D0(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0x1F0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0x1FC(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_4FDB[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPawn*                             K2Node_Event_InstigatedBy;                         // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0x298(0x18)()
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_5;               // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FDC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_5;              // 0x2B8(0xB8)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsParachuteOpen_ReturnValue;              // 0x371(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x372(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FDD[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x374(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x380(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x38C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x394(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System;      // 0x3A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x3A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x3AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x3AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x3AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_2;        // 0x3AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_4;               // 0x3AE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FDE[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_4;              // 0x3B0(0xB8)(ContainsInstancedReference)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_3;               // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FDF[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_3;              // 0x470(0xB8)(ContainsInstancedReference)
	float                                        CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x528(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x52C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          CallFunc_BreakGameplayCueParameters_EffectContext; // 0x530(0x18)()
	struct FGameplayTag                          CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x548(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x550(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x558(0x20)()
	struct FGameplayTagContainer                 CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x578(0x20)()
	struct FVector                               CallFunc_BreakGameplayCueParameters_Location;      // 0x598(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakGameplayCueParameters_Normal;        // 0x5A4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakGameplayCueParameters_Instigator;    // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x5B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x5C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x5D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x5D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x5D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Location;                       // 0x5E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x5EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x5F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x5F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x5F8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_1;                          // 0x604(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_1;                          // 0x608(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_1;                          // 0x60C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x610(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x61C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSkydiving_ReturnValue;                  // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Option_B___If_false__use_Option_A_Variable; // 0x621(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x622(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FE0[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue;       // 0x628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  Temp_object_Variable;                              // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FE1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortPlaylist*                         Temp_object_Variable_1;                            // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x649(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x64A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue_1;           // 0x64B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_3;        // 0x64C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x64D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FE2[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 Temp_struct_Variable_1;                            // 0x650(0x20)()
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_4;        // 0x671(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x672(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x673(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x674(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x675(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FE3[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x678(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x688(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x690(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x6A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_CustomEvent_GameState;                      // 0x6A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                         K2Node_CustomEvent_Playlist;                       // 0x6B0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_CustomEvent_PlaylistContextTags;            // 0x6B8(0x20)(ConstParm)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAnimMontage*                          Temp_object_Variable_2;                            // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x6E8(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4FE7[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x700(0x30)(IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                       K2Node_CustomEvent_Pawn;                           // 0x730(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x740(0x10)(ZeroConstructor, NoDestructor)
	class ABP_VictoryDrone_C*                    CallFunc_FinishSpawningActor_ReturnValue;          // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Temp_object_Variable_3;                            // 0x758(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x760(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x798(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_VictoryDrone_RiftDisolve_C*        CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x7A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_VictoryDrone_Athena_C*             CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x7A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x7B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FE8[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0x7C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x7C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x7C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x7CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FE9[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x7D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x7D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x7E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x7E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x7F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_InSafeZonePhase;                // 0x7F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSpawnGameplayCue_1;            // 0x7F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x800(0xB8)(ContainsInstancedReference)
	int32                                        K2Node_CustomEvent_NewWhichSafeZoneTag;            // 0x8B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_CustomEvent_GameplayTag;                    // 0x8BC(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSpawnGameplayCue;              // 0x8C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FEC[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        K2Node_Event_SafeZonePhase;                        // 0x8C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x8CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FED[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAnimMontage*                          Temp_object_Variable_4;                            // 0x8D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x8D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x8E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0x8E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_First_Left;                           // 0x8F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_First_Right;                          // 0x8F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x8F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FEF[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Temp_object_Variable_5;                            // 0x8F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UFXSystemAsset>         CallFunc_GetContrailParticleSystemSoftRef_ReturnValue; // 0x900(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x928(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAssetNull_ReturnValue;                  // 0x929(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x92A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_2;               // 0x92B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FF0[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_2;              // 0x930(0xB8)(ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x9E8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x9F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FF1[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x9FC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0xA08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FF2[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_CustomEvent_Duration;                       // 0xA0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortTeamAffiliation              CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue; // 0xA10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0xA11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xA12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_4;                              // 0xA13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FF3[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_1;  // 0xA18(0xB8)(ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xAD0(0x10)(ZeroConstructor, NoDestructor)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0xAE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xAE8(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0xAF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FF4[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue; // 0xAF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerSpectating*       K2Node_DynamicCast_AsFort_Player_Controller_Spectating; // 0xB00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xB08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FF5[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Temp_float_Variable_1;                             // 0xB0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0xB10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_5;        // 0xB11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FF6[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue_1; // 0xB18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerSpectating*       K2Node_DynamicCast_AsFort_Player_Controller_Spectating_1; // 0xB20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xB28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FF7[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               Temp_object_Variable_6;                            // 0xB30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0xB38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Select_Default;                             // 0xB40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                        K2Node_DynamicCast_AsFXSystem_Asset;               // 0xB48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xB50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_1;               // 0xB51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FF8[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_1;              // 0xB58(0xB8)(ContainsInstancedReference)
	float                                        K2Node_CustomEvent_SecondsTillTeleport;            // 0xC10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_DestLocation_1;                 // 0xC14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_CustomEvent_DestRotation_1;                 // 0xC20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_3;          // 0xC2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Instant_1;                      // 0xC2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FF9[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               K2Node_CustomEvent_DestLocation;                   // 0xC30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_CustomEvent_DestRotation;                   // 0xC3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Instant;                        // 0xC48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_CustomEvent_Gravity;                        // 0xC4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0xC50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FFB[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_Select_Default_1;                           // 0xC54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_1;      // 0xC58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_TeleportTo_ReturnValue;                // 0xC59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FFC[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0xC5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_2;  // 0xC60(0xB8)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0xD18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_6;        // 0xD19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FFD[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue_2; // 0xD20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerSpectating*       K2Node_DynamicCast_AsFort_Player_Controller_Spectating_2; // 0xD28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0xD30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0xD38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0xD40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xD44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xD48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5000[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0xD4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0xD50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0xD51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0xD52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType;                 // 0xD53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5001[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters;                // 0xD58(0xB8)(ContainsInstancedReference)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0xE10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0xE18(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0xE20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5002[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_2;       // 0xE28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_3;  // 0xE30(0xB8)(ContainsInstancedReference)
	bool                                         CallFunc_IsSkydivingFromBus_ReturnValue;           // 0xEE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0xEE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSkydivingFromBus_ReturnValue_1;         // 0xEEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0xEEB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0xEEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5003[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0xEF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xEFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xF00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5004[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue_3; // 0xF08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerSpectating*       K2Node_DynamicCast_AsFort_Player_Controller_Spectating_3; // 0xF10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0xF18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5005[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue;         // 0xF20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                       CallFunc_GetDriver_ReturnValue;                    // 0xF30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0xF38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetVehicleActorPtrConst_ReturnValue;      // 0xF40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0xF48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5006[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortCharacterVehicle*                 K2Node_DynamicCast_AsFort_Character_Vehicle;       // 0xF50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0xF58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_7;        // 0xF59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xF5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5007[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortWaterBodyActor*                   K2Node_Event_WaterBody_1;                          // 0xF60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsFirstBody;                         // 0xF68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5008[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortWaterBodyActor*                   K2Node_Event_WaterBody;                            // 0xF70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsLastBody;                          // 0xF78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMovementMode                     K2Node_Event_PrevMovementMode;                     // 0xF79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     K2Node_Event_NewMovementMode;                      // 0xF7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_Event_PrevCustomMode;                       // 0xF7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_Event_NewCustomMode;                        // 0xF7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xF7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSurfaceSwimming_ReturnValue;            // 0xF7E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable_2;               // 0xF7F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable_2;                     // 0xF80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5009[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_GetNumericCVar_OutValue;                  // 0xF84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetNumericCVar_ReturnValue;               // 0xF88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSurfaceSwimming_ReturnValue_1;          // 0xF89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_2;      // 0xF8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_WasDBNOOnDeath_ReturnValue;               // 0xF8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_WasDBNOOnDeath_ReturnValue_1;             // 0xF8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSurfaceSwimming_ReturnValue_2;          // 0xF8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_500A[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAnimMontage*                          K2Node_Select_Default_2;                           // 0xF90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xF98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_500B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AController*                           K2Node_Event_NewController;                        // 0xFA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0xFA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_500C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0xFB0(0xB0)()
	bool                                         CallFunc_IsInAthena_ReturnValue;                   // 0x1060(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_4;          // 0x1061(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_5;          // 0x1062(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_500D[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_1;               // 0x1068(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena_1;     // 0x1070(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x1078(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_500E[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfacePosition; // 0x107C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfaceNormal; // 0x1088(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStormCN_ReturnValue;                    // 0x1094(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_500F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue_1;                // 0x1098(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5010[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_1;    // 0x10A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x10B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsNiagaraFXTypeEnabled_ReturnValue;       // 0x10B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5011[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FHitResult                            K2Node_Event_Hit;                                  // 0x10B4(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_5012[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortWaterBodyActor*                   CallFunc_GetCurrentWaterBody_ReturnValue;          // 0x1140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSurfaceSwimming_ReturnValue_3;          // 0x1148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x1149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x114A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x114B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0x114C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWaterImmersionDepth_ReturnValue;       // 0x1150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue_2;            // 0x1154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWaterBodyActor*                   CallFunc_GetCurrentWaterBody_ReturnValue_1;        // 0x1158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMovementComp_Character*           K2Node_DynamicCast_AsFort_Movement_Comp_Character; // 0x1160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x1168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x1169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMovingOnGround_ReturnValue;             // 0x116A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x116B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetWaterSurfaceLocation_ReturnValue;      // 0x116C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_4;  // 0x1178(0xB8)(ContainsInstancedReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_8;        // 0x1230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_isHidden;                       // 0x1231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5013[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x1238(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1; // 0x1240(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2; // 0x1248(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x1250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable_3;               // 0x1251(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5014[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFCreativeEffectColorIndex            K2Node_CustomEvent_Index;                          // 0x1254(0x5)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5015[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	bool                                         CallFunc_IsSkydivingFromBus_ReturnValue_2;         // 0x125C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5016[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_3;       // 0x1260(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_SpawnFXSystemAttached_ReturnValue;        // 0x1268(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x1270(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5017[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_2;         // 0x1280(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_3;                     // 0x1288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5018[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            Temp_struct_Variable_2;                            // 0x1290(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x12C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5019[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UPostProcessComponent*                 CallFunc_AddComponent_ReturnValue;                 // 0x12C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_3;      // 0x12D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_501A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAbilitySystemComponent*           K2Node_CustomEvent_AbilitySystemComponent;         // 0x12D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_CustomEvent_AffectedPawn;                   // 0x12E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x12E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Set_Contains_ReturnValue;                 // 0x12E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x12EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x12EB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x12EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_501B[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAnimMontage*                          Temp_object_Variable_7;                            // 0x12F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_Select_Default_3;                           // 0x12F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_Select_Default_4;                           // 0x1300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_Select_Default_5;                           // 0x1308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayLocalAnimMontage_ReturnValue;         // 0x1310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CCPM_isHiddenInProp__DelegateSignature
struct APlayerPawn_Athena_C_CCPM_isHiddenInProp__DelegateSignature_Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft2__DelegateSignature
struct APlayerPawn_Athena_C_SwingLeft2__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight2__DelegateSignature
struct APlayerPawn_Athena_C_SwingRight2__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeftEnd__DelegateSignature
struct APlayerPawn_Athena_C_SwingLeftEnd__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRightEnd__DelegateSignature
struct APlayerPawn_Athena_C_SwingRightEnd__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.onFadeToWhiteTeleported__DelegateSignature
struct APlayerPawn_Athena_C_OnFadeToWhiteTeleported__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft__DelegateSignature
struct APlayerPawn_Athena_C_SwingLeft__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight__DelegateSignature
struct APlayerPawn_Athena_C_SwingRight__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut__DelegateSignature
struct APlayerPawn_Athena_C_ResOut__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn__DelegateSignature
struct APlayerPawn_Athena_C_ResIn__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
