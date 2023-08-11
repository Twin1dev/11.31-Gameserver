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
// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.Timeline_0__FinishedFunc
struct AB_Ranged_Lotus_Mustache_C_Timeline_0__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.Timeline_0__UpdateFunc
struct AB_Ranged_Lotus_Mustache_C_Timeline_0__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.Timeline_1__FinishedFunc
struct AB_Ranged_Lotus_Mustache_C_Timeline_1__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.Timeline_1__UpdateFunc
struct AB_Ranged_Lotus_Mustache_C_Timeline_1__UpdateFunc_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.OnSpawnProjectile
struct AB_Ranged_Lotus_Mustache_C_OnSpawnProjectile_Params
{
public:
	class AFortProjectileBase*                   SpawnProjectile;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.K2_OnUnEquip
struct AB_Ranged_Lotus_Mustache_C_K2_OnUnEquip_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.OnWeaponAttached
struct AB_Ranged_Lotus_Mustache_C_OnWeaponAttached_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.ReceiveTick
struct AB_Ranged_Lotus_Mustache_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.NewTarget
struct AB_Ranged_Lotus_Mustache_C_NewTarget_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.OnPlayWeaponFireFX
struct AB_Ranged_Lotus_Mustache_C_OnPlayWeaponFireFX_Params
{
public:
	bool                                         bPersistentFire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSecondaryFire;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.SetHealthPercentServer
struct AB_Ranged_Lotus_Mustache_C_SetHealthPercentServer_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.SetHealthPercentClient
struct AB_Ranged_Lotus_Mustache_C_SetHealthPercentClient_Params
{
public:
	float                                        HealthPercent;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C0 (0x1C0 - 0x0)
// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.ExecuteUbergraph_B_Ranged_Lotus_Mustache
struct AB_Ranged_Lotus_Mustache_C_ExecuteUbergraph_B_Ranged_Lotus_Mustache_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_462E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortProjectileBase*                   K2Node_Event_SpawnProjectile;                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_462F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingStyle_self_CastInput;            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingLockTargetDistanceThreshold_self_CastInput; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTurnSpeedMax_self_CastInput;     // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTurnSpeedMin_self_CastInput;     // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4630[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTarget_self_CastInput;           // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bPersistentFire;                      // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSecondaryFire;                       // 0x76(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4631[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4632[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_CustomEvent_HealthPercent;                  // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetHealth_ReturnValue;                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4633[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4634[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0xA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4635[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue;       // 0xC0(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0xF0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4636[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_LockOnWidgetActor_Proto_C*     CallFunc_FinishSpawningActor_ReturnValue;          // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULotus_Mustache_HealthBar_C*           K2Node_DynamicCast_AsLotus_Mustache_Health_Bar;    // 0x198(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4637[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_GetDistanceTo_ReturnValue;                // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RowToBool_ReturnValue;                    // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4638[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTimeUntilMaxTurnSpeed_self_CastInput; // 0x1B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
