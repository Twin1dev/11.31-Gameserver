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

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.ShouldOnlyShowTrajectoryOnUse
struct UGA_Athena_Grenade_WithTrajectory_C_ShouldOnlyShowTrajectoryOnUse_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SpawnTrajectoryIndicator
struct UGA_Athena_Grenade_WithTrajectory_C_SpawnTrajectoryIndicator_Params
{
public:
	bool                                         bSpawnOnEquip;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortProjectileTrajectory*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A0 (0x1A0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.GetProjectileTrajectoryPoints
struct UGA_Athena_Grenade_WithTrajectory_C_GetProjectileTrajectoryPoints_Params
{
public:
	TArray<struct FVector>                       OutSplinePoints;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                       OutSplineTangents;                                 // 0x10(0x10)(Parm, OutParm, ZeroConstructor)
	struct FHitResult                            OutHitResult;                                      // 0x20(0x88)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_SpawnLocationAndRotation_OutLoc;          // 0xB4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_SpawnLocationAndRotation_OutRot;          // 0xC0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0xCC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;   // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xE8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult; // 0xF8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<struct FVector>                       CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints; // 0x180(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                       CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents; // 0x190(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.GetProjectileTrajectoryActor
struct UGA_Athena_Grenade_WithTrajectory_C_GetProjectileTrajectoryActor_Params
{
public:
	TSubclassOf<class AFortProjectileTrajectory> ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0xA9 (0xA9 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.UpdateTrajectorySpline
struct UGA_Athena_Grenade_WithTrajectory_C_UpdateTrajectorySpline_Params
{
public:
	TArray<struct FVector>                       CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints; // 0x0(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                       CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents; // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	struct FHitResult                            CallFunc_GetProjectileTrajectoryPoints_OutHitResult; // 0x20(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.GetOwningPlayer
struct UGA_Athena_Grenade_WithTrajectory_C_GetOwningPlayer_Params
{
public:
	class AFortPlayerPawn*                       Player_Pawn;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x10(0x40)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch
struct UGA_Athena_Grenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch_Params
{
public:
	float                                        AimPitch;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeed;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_NormalizeAxis_ReturnValue;                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SetupDummyProjectile
struct UGA_Athena_Grenade_WithTrajectory_C_SetupDummyProjectile_Params
{
public:
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46B3[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x10(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileTrajectory*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileTrajectory_C*            K2Node_DynamicCast_AsBP_Projectile_Trajectory;     // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA4 (0xA4 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SpawnLocationAndRotation
struct UGA_Athena_Grenade_WithTrajectory_C_SpawnLocationAndRotation_Params
{
public:
	struct FVector                               OutLoc;                                            // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OutRot;                                            // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn_1;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetDefaultTargetingRotation_ReturnValue;  // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x54(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default;                             // 0x6C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_RotateAngleAxis_ReturnValue;              // 0x7C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMin_ReturnValue;                         // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x308 (0x308 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SetupGrenade
struct UGA_Athena_Grenade_WithTrajectory_C_SetupGrenade_Params
{
public:
	float                                        AimPitch;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                Base_Grenade;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Projectile_Speed;                                  // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortGameplayEffectContainerSpec      Explosion_Gameplay_Spec;                           // 0x18(0xB8)(Parm, OutParm)
	float                                        Projectile_Gravity_Scale;                          // 0xD0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortGameplayEffectContainerSpec      Additional_Explosion_Gameplay_Spec;                // 0xD8(0xB8)(Parm, OutParm)
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x190(0xB8)()
	float                                        CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;   // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1; // 0x250(0xB8)()
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Destroyed_40FE015D40E881984FE611B980B75D52
struct UGA_Athena_Grenade_WithTrajectory_C_Destroyed_40FE015D40E881984FE611B980B75D52_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Exploded_40FE015D40E881984FE611B980B75D52
struct UGA_Athena_Grenade_WithTrajectory_C_Exploded_40FE015D40E881984FE611B980B75D52_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Stopped_40FE015D40E881984FE611B980B75D52
struct UGA_Athena_Grenade_WithTrajectory_C_Stopped_40FE015D40E881984FE611B980B75D52_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Bounced_40FE015D40E881984FE611B980B75D52
struct UGA_Athena_Grenade_WithTrajectory_C_Bounced_40FE015D40E881984FE611B980B75D52_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Touched_40FE015D40E881984FE611B980B75D52
struct UGA_Athena_Grenade_WithTrajectory_C_Touched_40FE015D40E881984FE611B980B75D52_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Created_40FE015D40E881984FE611B980B75D52
struct UGA_Athena_Grenade_WithTrajectory_C_Created_40FE015D40E881984FE611B980B75D52_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x30 (0x30 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Completed_B08560984B3818F6EECB3C9A92E61ADC
struct UGA_Athena_Grenade_WithTrajectory_C_Completed_B08560984B3818F6EECB3C9A92E61ADC_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Cancelled_B08560984B3818F6EECB3C9A92E61ADC
struct UGA_Athena_Grenade_WithTrajectory_C_Cancelled_B08560984B3818F6EECB3C9A92E61ADC_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Triggered_B08560984B3818F6EECB3C9A92E61ADC
struct UGA_Athena_Grenade_WithTrajectory_C_Triggered_B08560984B3818F6EECB3C9A92E61ADC_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnFinish_E8F8DC5A465F19B633AF0E8888171F5A
struct UGA_Athena_Grenade_WithTrajectory_C_OnFinish_E8F8DC5A465F19B633AF0E8888171F5A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnFinish_4B1D92B7427697E6BD9D58ACA0F87155
struct UGA_Athena_Grenade_WithTrajectory_C_OnFinish_4B1D92B7427697E6BD9D58ACA0F87155_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnCancelled_758AC809498064C01C71318E141D1E46
struct UGA_Athena_Grenade_WithTrajectory_C_OnCancelled_758AC809498064C01C71318E141D1E46_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnInterrupted_758AC809498064C01C71318E141D1E46
struct UGA_Athena_Grenade_WithTrajectory_C_OnInterrupted_758AC809498064C01C71318E141D1E46_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnBlendOut_758AC809498064C01C71318E141D1E46
struct UGA_Athena_Grenade_WithTrajectory_C_OnBlendOut_758AC809498064C01C71318E141D1E46_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnCompleted_758AC809498064C01C71318E141D1E46
struct UGA_Athena_Grenade_WithTrajectory_C_OnCompleted_758AC809498064C01C71318E141D1E46_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C
struct UGA_Athena_Grenade_WithTrajectory_C_OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.K2_ActivateAbility
struct UGA_Athena_Grenade_WithTrajectory_C_K2_ActivateAbility_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Server_SpawnProjectile
struct UGA_Athena_Grenade_WithTrajectory_C_Server_SpawnProjectile_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Direction;                                         // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnAbilityInputReleased
struct UGA_Athena_Grenade_WithTrajectory_C_OnAbilityInputReleased_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.K2_OnEndAbility
struct UGA_Athena_Grenade_WithTrajectory_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.CleanupTrajectoryDisplay
struct UGA_Athena_Grenade_WithTrajectory_C_CleanupTrajectoryDisplay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.TossGrenade
struct UGA_Athena_Grenade_WithTrajectory_C_TossGrenade_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.InitTrajectoryVariables
struct UGA_Athena_Grenade_WithTrajectory_C_InitTrajectoryVariables_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.AthenaProjectileSpawned
struct UGA_Athena_Grenade_WithTrajectory_C_AthenaProjectileSpawned_Params
{
public:
	class AFortProjectileBase*                   ProjectileReference;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.CleanupTrajectoryIndicatorOnUnequip
struct UGA_Athena_Grenade_WithTrajectory_C_CleanupTrajectoryIndicatorOnUnequip_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Cleanup Trajectory Display On End
struct UGA_Athena_Grenade_WithTrajectory_C_Cleanup_Trajectory_Display_On_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.UpdateTrajectory
struct UGA_Athena_Grenade_WithTrajectory_C_UpdateTrajectory_Params
{
public:
};

// 0x742 (0x742 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory
struct UGA_Athena_Grenade_WithTrajectory_C_ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData_2;               // 0x8(0x28)(ConstParm, ContainsInstancedReference)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData_1;               // 0x30(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x58(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData;                 // 0x68(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x90(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  Temp_struct_Variable;                              // 0xA0(0x28)(ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xC8(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_2;                   // 0xD8(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_2;               // 0x100(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_1;                   // 0x108(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_1;               // 0x130(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x138(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x148(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x170(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x178(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable_1;                            // 0x188(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable_2;                            // 0x190(0x28)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1B8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x1C8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x1D8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x1E8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x1F8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x208(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x218(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x228(0x10)(ZeroConstructor, NoDestructor)
	enum class ECollisionChannel                 CallFunc_GetCollisionObjectType_ReturnValue;       // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_GetScaledCapsuleSize_OutRadius;           // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScaledCapsuleSize_OutHalfHeight;       // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGravityZ_ReturnValue;                  // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x250(0x10)(ZeroConstructor, NoDestructor)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               K2Node_CustomEvent_Location;                       // 0x26C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_CustomEvent_Direction;                      // 0x278(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_SpawnLocationAndRotation_OutLoc;          // 0x284(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_SpawnLocationAndRotation_OutRot;          // 0x290(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x2A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_SetupGrenade_Base_Grenade;                // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetupGrenade_Projectile_Speed;            // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortGameplayEffectContainerSpec      CallFunc_SetupGrenade_Explosion_Gameplay_Spec;     // 0x2B8(0xB8)()
	float                                        CallFunc_SetupGrenade_Projectile_Gravity_Scale;    // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortGameplayEffectContainerSpec      CallFunc_SetupGrenade_Additional_Explosion_Gameplay_Spec; // 0x378(0xB8)()
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x434(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;   // 0x43C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData_3;               // 0x440(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x468(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x479(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x47A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue_1;           // 0x47B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData_4;               // 0x480(0x28)(ConstParm, ContainsInstancedReference)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x4B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x4B4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_46C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue;                    // 0x4C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue_1;                  // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x4D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46C2[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x4E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn_1;            // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46C3[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn_2;            // 0x4F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue;       // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortProjectileBase*                   CallFunc_BeginSpawningActor_SpawnedActor;          // 0x518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BeginSpawningActor_ReturnValue;           // 0x520(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x521(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46C6[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x524(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x530(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn_3;            // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x548(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x54C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn_4;            // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46C8[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x560(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue_2;                  // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x5A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortProjectileBase*                   CallFunc_FinishSpawningActor_ReturnValue;          // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   K2Node_CustomEvent_ProjectileReference;            // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData_5;               // 0x5B8(0x28)(ConstParm, ContainsInstancedReference)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortProjectileTrajectory*             CallFunc_SpawnTrajectoryIndicator_ReturnValue;     // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x5F8(0x40)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x638(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x648(0xB0)()
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x6F8(0x28)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x720(0x10)(ZeroConstructor, ReferenceParm)
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x730(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SendComplexCustomStatEvent_QuestActive;   // 0x740(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SendComplexCustomStatEvent_QuestCompleted; // 0x741(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnProjectileSpawn__DelegateSignature
struct UGA_Athena_Grenade_WithTrajectory_C_OnProjectileSpawn__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
