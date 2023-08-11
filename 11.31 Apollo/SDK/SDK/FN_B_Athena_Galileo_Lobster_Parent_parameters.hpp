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

// 0x4 (0x4 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.OnRep_BladeVisibility
struct AB_Athena_Galileo_Lobster_Parent_C_OnRep_BladeVisibility_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EAudioComponentPlayState          CallFunc_GetPlayState_ReturnValue;                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.CreateSkeletalAudioComp
struct AB_Athena_Galileo_Lobster_Parent_C_CreateSkeletalAudioComp_Params
{
public:
	class UFortSkeletalAudioComponent*           Component;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6130[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            Temp_struct_Variable;                              // 0x10(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UFortSkeletalAudioComponent*           CallFunc_AddComponent_ReturnValue;                 // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.Unholstered
struct AB_Athena_Galileo_Lobster_Parent_C_Unholstered_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.Holstered
struct AB_Athena_Galileo_Lobster_Parent_C_Holstered_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.UserConstructionScript
struct AB_Athena_Galileo_Lobster_Parent_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.Timeline_1__FinishedFunc
struct AB_Athena_Galileo_Lobster_Parent_C_Timeline_1__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.Timeline_1__UpdateFunc
struct AB_Athena_Galileo_Lobster_Parent_C_Timeline_1__UpdateFunc_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.DoBulletBlockEffect
struct AB_Athena_Galileo_Lobster_Parent_C_DoBulletBlockEffect_Params
{
public:
	struct FVector                               ImpactLocation;                                    // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.OnPlayImpactFX
struct AB_Athena_Galileo_Lobster_Parent_C_OnPlayImpactFX_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class EPhysicalSurface                  ImpactPhysicalSurface;                             // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6131[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFXSystemComponent*                    SpawnedPSC;                                        // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.ToggleDynamicAudio
struct AB_Athena_Galileo_Lobster_Parent_C_ToggleDynamicAudio_Params
{
public:
	bool                                         CanPlayIdleAudio;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.StartIdleFX
struct AB_Athena_Galileo_Lobster_Parent_C_StartIdleFX_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.K2_OnUnEquip
struct AB_Athena_Galileo_Lobster_Parent_C_K2_OnUnEquip_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.ToggleDodgePrompt
struct AB_Athena_Galileo_Lobster_Parent_C_ToggleDodgePrompt_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.CurrentPoiseChanged
struct AB_Athena_Galileo_Lobster_Parent_C_CurrentPoiseChanged_Params
{
public:
	float                                        CurrentPoise;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.BlockBreak
struct AB_Athena_Galileo_Lobster_Parent_C_BlockBreak_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.TurnOnLobster
struct AB_Athena_Galileo_Lobster_Parent_C_TurnOnLobster_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.SetBladeVisibility
struct AB_Athena_Galileo_Lobster_Parent_C_SetBladeVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.OnWeaponAttached
struct AB_Athena_Galileo_Lobster_Parent_C_OnWeaponAttached_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.OnWeaponVisibilityChanged
struct AB_Athena_Galileo_Lobster_Parent_C_OnWeaponVisibilityChanged_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSetForLocalControllerOnly;                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.ReceiveBeginPlay
struct AB_Athena_Galileo_Lobster_Parent_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.ReticleStatusDisplay
struct AB_Athena_Galileo_Lobster_Parent_C_ReticleStatusDisplay_Params
{
public:
	bool                                         Hide;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.ShowReticleStatusDisplay
struct AB_Athena_Galileo_Lobster_Parent_C_ShowReticleStatusDisplay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.DeactivateBlockBreakWarning
struct AB_Athena_Galileo_Lobster_Parent_C_DeactivateBlockBreakWarning_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.RPCUnequip
struct AB_Athena_Galileo_Lobster_Parent_C_RPCUnequip_Params
{
public:
};

// 0x319 (0x319 - 0x0)
// Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.ExecuteUbergraph_B_Athena_Galileo_Lobster_Parent
struct AB_Athena_Galileo_Lobster_Parent_C_ExecuteUbergraph_B_Athena_Galileo_Lobster_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_ImpactLocation;                 // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotFromX_ReturnValue;                 // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6132[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitResult;                            // 0x40(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class EPhysicalSurface                  K2Node_Event_ImpactPhysicalSurface;                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6133[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFXSystemComponent*                    K2Node_Event_SpawnedPSC;                           // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6134[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0xE4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0xF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0xFC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x108(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6135[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x140(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x14C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Galileo_Lobster_Block_Collision_C*  K2Node_DynamicCast_AsB_Galileo_Lobster_Block_Collision; // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6136[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6137[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x174(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0x188(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_CanPlayIdleAudio;               // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6138[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x194(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6139[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x1A8(0x8)(NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_613A[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_1;              // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue_1;                 // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x1D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Visible_1;                      // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_613B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x1E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_CurrentPoise;                   // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Visible;                        // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_613C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_2;              // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x208(0x10)(ZeroConstructor, NoDestructor)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_2;           // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bVisible;                             // 0x221(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSetForLocalControllerOnly;           // 0x222(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_613D[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x224(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x234(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x244(0x10)(ZeroConstructor, NoDestructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x254(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x260(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x26C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDecalComponent*                       CallFunc_SpawnDecalAtLocation_ReturnValue;         // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_3;              // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSkeletalAudioComponent*           CallFunc_CreateSkeletalAudioComp_Component;        // 0x288(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_3;           // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Hide;                           // 0x29B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x29C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_613E[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x2A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x2A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_613F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AEmitterCameraLensEffectBase*          CallFunc_SpawnCameraLensEffect_ReturnValue;        // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x2CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x2CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6140[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x2D4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6141[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x2E8(0x8)(NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_4;              // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_4;           // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6142[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1; // 0x308(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1; // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
