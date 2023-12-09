#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x200 - 0x1B0)
// BlueprintGeneratedClass GCN_Athena_Item_JollyRascal_Main_Destroy.GCN_Athena_Item_JollyRascal_Main_Destroy_C
class UGCN_Athena_Item_JollyRascal_Main_Destroy_C : public UFortGameplayCueNotify_Burst
{
public:
	TMap<int32, class USoundBase*>               MapSound;                                          // 0x1B0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGCN_Athena_Item_JollyRascal_Main_Destroy_C* GetDefaultObj();

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, bool Temp_bool_Variable, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 Temp_int_Variable, class USoundBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class USoundBase* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class USoundBase* K2Node_Select_Default);
};

}


