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

// 0x10 (0x10 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetMeshComponents
struct AB_ShootingTarget_Master_C_GetMeshComponents_Params
{
public:
	TArray<class UMeshComponent*>                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetCollisionStaticMesh
struct AB_ShootingTarget_Master_C_GetCollisionStaticMesh_Params
{
public:
	class UStaticMesh*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.RestoreToMaxHealth
struct AB_ShootingTarget_Master_C_RestoreToMaxHealth_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.WeakPointArrayContainsItems
struct AB_ShootingTarget_Master_C_WeakPointArrayContainsItems_Params
{
public:
	bool                                         ArrayContainsItems;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DDB[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetWeaponDataFromDamageCauser
struct AB_ShootingTarget_Master_C_GetWeaponDataFromDamageCauser_Params
{
public:
	class UObject*                               DamageCauser;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             OutWeaponData;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             WeaponData;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileAthena*                 K2Node_DynamicCast_AsFort_Projectile_Athena;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DDC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortWeapon*                           K2Node_DynamicCast_AsFort_Weapon;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             CallFunc_GetWeaponData_ReturnValue;                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           K2Node_DynamicCast_AsFort_Weapon_1;                // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DDE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortWeaponItemDefinition*             CallFunc_GetWeaponData_ReturnValue_1;              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CalculateDamageFromWeaponData
struct AB_ShootingTarget_Master_C_CalculateDamageFromWeaponData_Params
{
public:
	class UFortWeaponItemDefinition*             WeaponData;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InDamage;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutDamage;                                         // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewDamage;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DDF[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FDataTableRowHandle                   CallFunc_GetWeaponStatHandle_ReturnValue;          // 0x18(0x10)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortBaseWeaponStats                  CallFunc_GetWeaponStatsRow_OutRow;                 // 0x30(0x138)()
	bool                                         CallFunc_GetWeaponStatsRow_ReturnValue;            // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x76 (0x76 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.IsWithinWeakpointBounds
struct AB_ShootingTarget_Master_C_IsWithinWeakpointBounds_Params
{
public:
	struct FVector                               Impact_Location;                                   // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DE2[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USceneComponent*                       Component;                                         // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_BreakVector_X;                            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_Origin;                // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_BoxExtent;             // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetComponentBounds_SphereRadius;          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_1;                          // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_1;                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_1;                          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DE4[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DE5[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue_2;       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.UpdateHealthBarVisibility
struct AB_ShootingTarget_Master_C_UpdateHealthBarVisibility_Params
{
public:
	bool                                         ShouldShowBar;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldSuppress;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x101 (0x101 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BlueprintModifyIncomingDamage
struct AB_ShootingTarget_Master_C_BlueprintModifyIncomingDamage_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 InTags;                                            // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x28(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AController*                           EventInstigator;                                   // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReturnValue;                                       // 0x50(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewDamage;                                         // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             CallFunc_GetWeaponDataFromDamageCauser_OutWeaponData; // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BlueprintModifyIncomingDamage_ReturnValue; // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalculateDamageFromWeaponData_OutDamage;  // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_EffectContextGetHitResult_ReturnValue;    // 0x68(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_EffectContextHasHitResult_ReturnValue;    // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UPrimitiveComponent*                   CallFunc_WeakPointWasHit_HitComponent;             // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeakPointWasHit_ReturnValue;              // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF8 (0xF8 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetAimAssistEnabled
struct AB_ShootingTarget_Master_C_SetAimAssistEnabled_Params
{
public:
	bool                                         NewType;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECollisionResponse                Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionResponse                Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionResponse                K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class ACharacter*                            K2Node_DynamicCast_AsCharacter;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECollisionResponse                CallFunc_GetCollisionResponseToChannel_ReturnValue; // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DE9[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_Conv_ByteToText_ReturnValue;              // 0x18(0x18)()
	enum class ECollisionResponse                CallFunc_GetCollisionResponseToChannel_ReturnValue_1; // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ByteToText_ReturnValue_1;            // 0x78(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x90(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xD0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE0(0x18)()
};

// 0x38 (0x38 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CreateWeakPointArray
struct AB_ShootingTarget_Master_C_CreateWeakPointArray_Params
{
public:
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_8;                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_9;                  // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_10;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_11;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_12;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_13;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CheckIfShouldHop
struct AB_ShootingTarget_Master_C_CheckIfShouldHop_Params
{
public:
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetBunnyHopTimer
struct AB_ShootingTarget_Master_C_SetBunnyHopTimer_Params
{
public:
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ClearBunnyHopTimer
struct AB_ShootingTarget_Master_C_ClearBunnyHopTimer_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.InitializeHideTargetTimer
struct AB_ShootingTarget_Master_C_InitializeHideTargetTimer_Params
{
public:
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HideTarget
struct AB_ShootingTarget_Master_C_HideTarget_Params
{
public:
};

// 0x3D (0x3D - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetMaxHealth
struct AB_ShootingTarget_Master_C_SetMaxHealth_Params
{
public:
	float                                        NewMaxHealth;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DEB[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingSpec_ReturnValue;             // 0x8(0x10)()
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x20(0x10)()
	bool                                         CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DEC[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue; // 0x34(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetShouldFall
struct AB_ShootingTarget_Master_C_TargetShouldFall_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DED[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_GetHealth_ReturnValue;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetStartingPosition
struct AB_ShootingTarget_Master_C_SetStartingPosition_Params
{
public:
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.MinigameIsRunning
struct AB_ShootingTarget_Master_C_MinigameIsRunning_Params
{
public:
	bool                                         MinigameIsRunning;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasStarted_ReturnValue;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x62 (0x62 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ShouldTriggerTarget
struct AB_ShootingTarget_Master_C_ShouldTriggerTarget_Params
{
public:
	class UObject*                               Overlapping_Actor;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   Overlapping_Component;                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortAthenaVehicle*                    K2Node_DynamicCast_AsFort_Athena_Vehicle;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetAllPassengers_self_CastInput;          // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AFortPlayerPawn*>               CallFunc_GetAllPassengers_ReturnValue;             // 0x48(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF1[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.AwardScore
struct AB_ShootingTarget_Master_C_AwardScore_Params
{
public:
	class AFortPlayerController*                 FortPlayerController;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ScoreAwarded;                                      // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TeamAwardedPoints;                                 // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMinigameManager*                  MinigameManager;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMinigameManager*                  CallFunc_GetMinigameManager_ReturnValue;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetSourceAndContextTags_OutSourceTags;    // 0x20(0x20)()
	struct FGameplayTagContainer                 CallFunc_GetSourceAndContextTags_OutContextTags;   // 0x40(0x20)()
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Subtract_ByteByte_ReturnValue;            // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x68(0x20)()
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF2[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_CalculateScore_ScoreToAward;              // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CalculateScore
struct AB_ShootingTarget_Master_C_CalculateScore_Params
{
public:
	int32                                        ScoreToAward;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PrepareChosenTarget
struct AB_ShootingTarget_Master_C_PrepareChosenTarget_Params
{
public:
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   WeakPointComponent_1;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   WeakPointComponent2;                               // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15A (0x15A - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.WeakPointWasHit
struct AB_ShootingTarget_Master_C_WeakPointWasHit_Params
{
public:
	struct FHitResult                            Hit_Result;                                        // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                   HitComponent;                                      // 0x88(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_WeakPointArrayContainsItems_ArrayContainsItems; // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakHitResult_Time;                      // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0xB4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0xC0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DF3[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0xF8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x104(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ComponentHasTag_ReturnValue;              // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF4[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x114(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x120(0x30)(IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                   CallFunc_Array_Get_Item;                           // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsWithinWeakpointBounds_ReturnValue;      // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ResetWeakPoints
struct AB_ShootingTarget_Master_C_ResetWeakPoints_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeakPointArrayContainsItems_ArrayContainsItems; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF5[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DF6[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UPrimitiveComponent*                   CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF7[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CanPopUp
struct AB_ShootingTarget_Master_C_CanPopUp_Params
{
public:
	bool                                         MinigameJustStartedOrStopped;                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CanPopUp;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTimeline__FinishedFunc
struct AB_ShootingTarget_Master_C_PopUpTimeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTimeline__UpdateFunc
struct AB_ShootingTarget_Master_C_PopUpTimeline__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockDownTimeline__FinishedFunc
struct AB_ShootingTarget_Master_C_KnockDownTimeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockDownTimeline__UpdateFunc
struct AB_ShootingTarget_Master_C_KnockDownTimeline__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Timeline_2__FinishedFunc
struct AB_ShootingTarget_Master_C_Timeline_2__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Timeline_2__UpdateFunc
struct AB_ShootingTarget_Master_C_Timeline_2__UpdateFunc_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnLoaded_E00ACB5548EAE7DC61ECB69BAE5C78CA
struct AB_ShootingTarget_Master_C_OnLoaded_E00ACB5548EAE7DC61ECB69BAE5C78CA_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnReady_A57ED5A14BEB6A98DB20D88D1582D58A
struct AB_ShootingTarget_Master_C_OnReady_A57ED5A14BEB6A98DB20D88D1582D58A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockdownTarget
struct AB_ShootingTarget_Master_C_KnockdownTarget_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTarget
struct AB_ShootingTarget_Master_C_PopUpTarget_Params
{
public:
	bool                                         MinigameJustStartedOrStopped;                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature
struct AB_ShootingTarget_Master_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
struct AB_ShootingTarget_Master_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params
{
public:
};

// 0xE8 (0xE8 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnDamageServer
struct AB_ShootingTarget_Master_C_OnDamageServer_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DF8[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x34(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_4DF9[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AController*                           InstigatedBy;                                      // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ReceiveBeginPlay
struct AB_ShootingTarget_Master_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature
struct AB_ShootingTarget_Master_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct AB_ShootingTarget_Master_C_BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature
struct AB_ShootingTarget_Master_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PickMeshFromSettings
struct AB_ShootingTarget_Master_C_PickMeshFromSettings_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.InitializeSettings
struct AB_ShootingTarget_Master_C_InitializeSettings_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ResetFromSettings
struct AB_ShootingTarget_Master_C_ResetFromSettings_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HideTargetTimerEvent
struct AB_ShootingTarget_Master_C_HideTargetTimerEvent_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetHideTargetTimer
struct AB_ShootingTarget_Master_C_SetHideTargetTimer_Params
{
public:
	float                                        TimerDuration;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Hop
struct AB_ShootingTarget_Master_C_Hop_Params
{
public:
	bool                                         InJumpUpPosition;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HopTimerEvent
struct AB_ShootingTarget_Master_C_HopTimerEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetHopTimer
struct AB_ShootingTarget_Master_C_SetHopTimer_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Knock Down Audio
struct AB_ShootingTarget_Master_C_Knock_Down_Audio_Params
{
public:
	bool                                         Knocked_Down_;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Impact Audio
struct AB_ShootingTarget_Master_C_Impact_Audio_Params
{
public:
	int32                                        Check_for_Positive_Score;                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DFB[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AController*                           Instigator;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SpawnWeakpointFX
struct AB_ShootingTarget_Master_C_SpawnWeakpointFX_Params
{
public:
	struct FTransform                            ImpactTransform;                                   // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Target Movement Audio
struct AB_ShootingTarget_Master_C_Target_Movement_Audio_Params
{
public:
	bool                                         Jump_Up_;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTargetTimerEvent
struct AB_ShootingTarget_Master_C_PopUpTargetTimerEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PostFinishSpawning
struct AB_ShootingTarget_Master_C_PostFinishSpawning_Params
{
public:
};

// 0x595 (0x595 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ExecuteUbergraph_B_ShootingTarget_Master
struct AB_ShootingTarget_Master_C_ExecuteUbergraph_B_ShootingTarget_Master_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Temp_object_Variable;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Temp_object_Variable_2;                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Temp_object_Variable_4;                            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_5;                            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x68(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_MinigameJustStartedOrStopped;   // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanPopUp_CanPopUp;                        // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Damage;                               // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x88(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0xB4(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_4DFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AController*                           K2Node_Event_InstigatedBy;                         // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0x150(0x18)()
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E00[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UPrimitiveComponent*                   CallFunc_WeakPointWasHit_HitComponent;             // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeakPointWasHit_ReturnValue;              // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E01[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_AwardScore_ScoreAwarded;                  // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_AwardScore_TeamAwardedPoints;             // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x190(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E02[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Variable;                                 // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x1A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor;             // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp;              // 0x1B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bFromSweep;             // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E03[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FHitResult                            K2Node_ComponentBoundEvent_SweepResult;            // 0x1C8(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldTriggerTarget_Result;               // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E04[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAsyncAction_AuthorityMatchReady*  CallFunc_MatchReadyAsync_ReturnValue;              // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E05[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x268(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TargetShouldFall_ReturnValue;             // 0x271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E06[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x274(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4E07[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               Temp_object_Variable_6;                            // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           K2Node_DynamicCast_AsStatic_Mesh;                  // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E08[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_CustomEvent_TimerDuration;                  // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x2A0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_InJumpUpPosition;               // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E09[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x2AC(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_4E0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x338(0x8)(NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            CallFunc_Array_Get_Item;                           // 0x348(0x28)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UStaticMesh*                           K2Node_DynamicCast_AsStatic_Mesh_1;                // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x389(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetStaticMesh_ReturnValue_1;              // 0x38A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x38B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UPrimitiveComponent*                   CallFunc_Array_Get_Item_1;                         // 0x390(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x398(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Knocked_Down_;                  // 0x3A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            K2Node_Select_Default;                             // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x3B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Check_for_Positive_Score;       // 0x3BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_CustomEvent_Instigator;                     // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            K2Node_Select_Default_1;                           // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x3D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E0F[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            K2Node_CustomEvent_ImpactTransform;                // 0x3E0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x410(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x41C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x428(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E10[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x438(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x440(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x44C(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         K2Node_CustomEvent_Jump_Up_;                       // 0x4D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E11[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x4D8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x4E4(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_4E12[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            K2Node_Select_Default_2;                           // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x578(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x584(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_WeakPointArrayContainsItems_ArrayContainsItems; // 0x594(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetPopUpDispatcher__DelegateSignature
struct AB_ShootingTarget_Master_C_TargetPopUpDispatcher__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetKnockedDownDispatcher__DelegateSignature
struct AB_ShootingTarget_Master_C_TargetKnockedDownDispatcher__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
