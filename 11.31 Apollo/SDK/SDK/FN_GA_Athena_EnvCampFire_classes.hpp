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

// 0x140 (0xB70 - 0xA30)
// BlueprintGeneratedClass GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C
class UGA_Athena_EnvCampFire_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TimeBetweenHeals;                                  // 0xA38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_512D[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          Timer_ApplyHeal;                                   // 0xA40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxHeals;                                          // 0xA48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentHeals;                                      // 0xA4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CustomTargeting;                                   // 0xA50(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        TargetingHeightOffset;                             // 0xA80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_512E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FScalableFloat                        Row_MaxHeals;                                      // 0xA88(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_TimeBetweenHeals;                              // 0xAA8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        StokeTimeBetweenHeals;                             // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_512F[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FScalableFloat                        Row_StokeDuration;                                 // 0xAD0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_Stoke_TimeBetweenHeals;                        // 0xAF0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_Stoke_MaxHeals_Extension;                      // 0xB10(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsStoked;                                          // 0xB30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5130[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FScalableFloat                        Row_HealPerTick;                                   // 0xB38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          GC_StokedLoop;                                     // 0xB58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_StokeBurst;                                     // 0xB60(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AB_BGA_Athena_EnvCampFire_C*           Campfire;                                          // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_EnvCampFire_C");
		return Clss;
	}

	void SetBalanceValues(bool Stoke, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_5, float CallFunc_GetValueAtLevel_ReturnValue_6, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue);
	void SetCustomTargetingTrans(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	struct FTransform GetCustomAbilitySourceTransform();
	void Cancelled_EDAB937443020D47385625B06E892DF0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_EDAB937443020D47385625B06E892DF0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_OnEndAbility(bool bWasCancelled);
	void ApplyHeal();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void FinishStoke();
	void SetIsStoked(bool IsStoked);
	void EndEvent();
	void ExecuteUbergraph_GA_Athena_EnvCampFire(int32 EntryPoint, bool K2Node_Event_bWasCancelled, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AB_BGA_Athena_EnvCampFire_C* K2Node_DynamicCast_AsB_BGA_Athena_Env_Camp_Fire, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, bool K2Node_CustomEvent_IsStoked, const struct FGameplayTag& Temp_struct_Variable_1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AB_BGA_Athena_EnvCampFire_C* K2Node_DynamicCast_AsB_BGA_Athena_Env_Camp_Fire_1, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, float CallFunc_GetValueAtLevel_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class AB_BGA_Athena_EnvCampFire_C* K2Node_DynamicCast_AsB_BGA_Athena_Env_Camp_Fire_2, bool K2Node_DynamicCast_bSuccess_2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3, class AB_BGA_Athena_EnvCampFire_C* K2Node_DynamicCast_AsB_BGA_Athena_Env_Camp_Fire_3, bool K2Node_DynamicCast_bSuccess_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
