#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1C0 - 0x1B8)
// BlueprintGeneratedClass GCN_Galileo_Lobster_Deflect_Parent.GCN_Galileo_Lobster_Deflect_Parent_C
class UGCN_Galileo_Lobster_Deflect_Parent_C : public UGCN_Galileo_Lobster_Parent_C
{
public:
	float                                        MinShakeScale;                                     // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxShakeScale;                                     // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGCN_Galileo_Lobster_Deflect_Parent_C* GetDefaultObj();

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, class UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude_1, float CallFunc_BreakGameplayCueParameters_RawMagnitude_1, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext_1, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName_1, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag_1, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags_1, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags_1, const struct FVector& CallFunc_BreakGameplayCueParameters_Location_1, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal_1, class AActor* CallFunc_BreakGameplayCueParameters_Instigator_1, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser_1, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject_1, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial_1, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel_1, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel_1, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_GetSoundFromBank_Sound_Exists, class USoundBase* CallFunc_GetSoundFromBank_Sound, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable, float K2Node_Select_Default);
};

}


