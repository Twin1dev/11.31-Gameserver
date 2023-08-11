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

// 0x30 (0xA60 - 0xA30)
// BlueprintGeneratedClass GA_TrapGeneric.GA_TrapGeneric_C
class UGA_TrapGeneric_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABuildingTrap*                         CeilingTrap;                                       // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CachedDamageTargets;                               // 0xA40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        TargetArray;                                       // 0xA50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_TrapGeneric_C");
		return Clss;
	}

	void Cancelled_EFEC611E4D988CAA3867F28EE35771B3(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_EFEC611E4D988CAA3867F28EE35771B3(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_TrapGeneric(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, int32 CallFunc_GetAbilityLevel_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetTrapLevel_ReturnValue, float CallFunc_GetDamageDelay_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, const struct FGameplayTag& CallFunc_GetActivateTrapGameplayCueTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_GetFireDelay_ReturnValue, const struct FGameplayTag& CallFunc_GetDelayBeginGameplayCueTag_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTag& CallFunc_GetReloadBeginGameplayCueTag_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_2, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap_2, bool K2Node_DynamicCast_bSuccess_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_3, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap_3, bool K2Node_DynamicCast_bSuccess_3, const struct FGameplayTag& CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
