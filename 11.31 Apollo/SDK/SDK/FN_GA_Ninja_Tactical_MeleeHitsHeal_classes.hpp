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

// 0x5E (0xB68 - 0xB0A)
// BlueprintGeneratedClass GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C
class UGA_Ninja_Tactical_MeleeHitsHeal_C : public UGAT_GenericTriggeredAbility_C
{
public:
	uint8                                        Pad_4ECB[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB10(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          EventActivation;                                   // 0xB18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventComplete;                                     // 0xB20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_Ninja_Tactical_MeleeHitsHeal;                   // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_Melee;                                          // 0xB30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        MeleeCount;                                        // 0xB50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastHitSwingTime;                                  // 0xB54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BaseHealValue;                                     // 0xB58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FinalHealValue;                                    // 0xB5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DataRowName;                                       // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Ninja_Tactical_MeleeHitsHeal_C");
		return Clss;
	}

	void SetupAbility(class UAbilitySystemComponent* AbilitySystem, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, const struct FFortBaseWeaponStats& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess, float CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue, bool CallFunc_ShouldHammerHitsHealRespondToEvent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_K2_CommitAbility_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool K2Node_Event_bWasCancelled, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
