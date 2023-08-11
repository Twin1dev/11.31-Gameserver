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

// 0x8 (0xA38 - 0xA30)
// BlueprintGeneratedClass GA_Lotus_Athena_ApplyHeal.GA_Lotus_Athena_ApplyHeal_C
class UGA_Lotus_Athena_ApplyHeal_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Lotus_Athena_ApplyHeal_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, float CallFunc_GetHealth_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
