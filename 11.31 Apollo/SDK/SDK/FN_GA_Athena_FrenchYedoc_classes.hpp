#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xDC8 - 0xDA0)
// BlueprintGeneratedClass GA_Athena_FrenchYedoc.GA_Athena_FrenchYedoc_C
class UGA_Athena_FrenchYedoc_C : public UGA_ThrowConsumable_C
{
public:
	class UClass*                                ClassToSpawnCheck;                                 // 0xDA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_FailedTags;                                      // 0xDA8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_FrenchYedoc_C* GetDefaultObj();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FEvaluationResult& CallFunc_CanSpawnActorOfClass_ReturnValue);
};

}


