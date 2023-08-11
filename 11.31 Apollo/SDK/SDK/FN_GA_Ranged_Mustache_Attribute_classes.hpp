#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xAA0 - 0xA68)
// BlueprintGeneratedClass GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C
class UGA_Ranged_Mustache_Attribute_C : public UFortGameplayAbility_RangedWeapon
{
public:
	struct FGameplayTag                          GT_EventWeaponFire;                                // 0xA68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ManualFireEvent;                                   // 0xA70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E99[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayAttribute                    Attribute;                                         // 0xA78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGameplayTag                          MuzzleFlash;                                       // 0xA98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Ranged_Mustache_Attribute_C");
		return Clss;
	}

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AB_Ranged_Lotus_Mustache_C* K2Node_DynamicCast_AsB_Ranged_Lotus_Mustache, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void GetEventData(const struct FGameplayTag& EventTag, struct FGameplayEventData* GameplayEventData, const struct FGameplayTagContainer& GT_TargetTags, const struct FGameplayTagContainer& GT_InstigatorTags, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayTagContainer& CallFunc_GetWeaponDataGameplayTags_GameplayTags, bool CallFunc_WeaponDataIsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void K2_CommitExecute(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FGameplayEventData& CallFunc_GetEventData_GameplayEventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
