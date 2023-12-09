#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1B8 - 0x1B0)
// BlueprintGeneratedClass GCN_Galileo_Lobster_Parent.GCN_Galileo_Lobster_Parent_C
class UGCN_Galileo_Lobster_Parent_C : public UFortGameplayCueNotify_Burst
{
public:
	class UFortTaggedSoundBank*                  TaggedSoundBank;                                   // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGCN_Galileo_Lobster_Parent_C* GetDefaultObj();

	void GetSoundFromBank(class AActor* Tagged_Actor, bool* Sound_Exists, class USoundBase** Sound, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, const struct FGameplayTagContainer& CallFunc_GetWeaponDataGameplayTags_GameplayTags, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USoundBase* CallFunc_GetSoundToPlay_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetSoundFromBank_Sound_Exists, class USoundBase* CallFunc_GetSoundFromBank_Sound, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


