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

// 0x93 (0x93 - 0x0)
// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.K2_CanActivateAbility
struct UGA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                 RelevantTags;                                      // 0x40(0x20)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E8F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E90[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_GetFloatAttribute_ReturnValue;            // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E91[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AB_Ranged_Lotus_Mustache_C*            K2Node_DynamicCast_AsB_Ranged_Lotus_Mustache;      // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x202 (0x202 - 0x0)
// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.GetEventData
struct UGA_Ranged_Mustache_Attribute_C_GetEventData_Params
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    GameplayEventData;                                 // 0x8(0xB0)(Parm, OutParm)
	struct FGameplayTagContainer                 GT_TargetTags;                                     // 0xB8(0x20)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 GT_InstigatorTags;                                 // 0xD8(0x20)(Edit, BlueprintVisible)
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                      K2Node_DynamicCast_AsFort_Player_State;            // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E92[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       CallFunc_GetCurrentPawn_ReturnValue;               // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E93[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortWeapon*                           CallFunc_GetCurrentSourceWeapon_ReturnValue;       // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E94[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x130(0xB0)()
	struct FGameplayTagContainer                 CallFunc_GetWeaponDataGameplayTags_GameplayTags;   // 0x1E0(0x20)()
	bool                                         CallFunc_WeaponDataIsValid_ReturnValue;            // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF0 (0xF0 - 0x0)
// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.K2_CommitExecute
struct UGA_Ranged_Mustache_Attribute_C_K2_CommitExecute_Params
{
public:
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E95[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x14(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E96[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_GetFloatAttribute_ReturnValue;            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E97[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E98[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayEventData                    CallFunc_GetEventData_GameplayEventData;           // 0x40(0xB0)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
