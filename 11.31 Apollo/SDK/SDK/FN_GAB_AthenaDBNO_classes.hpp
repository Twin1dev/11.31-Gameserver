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

// 0x110 (0xB40 - 0xA30)
// BlueprintGeneratedClass GAB_AthenaDBNO.GAB_AthenaDBNO_C
class UGAB_AthenaDBNO_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          DeathMontage;                                      // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DeathHitDirection;                                 // 0xA40(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            DeathHitResult;                                    // 0xA4C(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_4F9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 DamageTags;                                        // 0xAD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 GameplayStatusAfflicted;                           // 0xAF8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                          DeathMontageSkydive;                               // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           DBNOBleedGEHandle;                                 // 0xB20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  HolsterId;                                         // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          DeathMontageSwimming;                              // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                 Pawn;                                              // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_AthenaDBNO_C");
		return Clss;
	}

	class UAnimMontage* Get_DBNO_Montage(bool CallFunc_IsSurfaceSwimming_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue);
	void GetInitialHealAmount(float* Health, const struct FGameplayAttribute& FortHealthSet_Health, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void OnCancelled_F0F6785443BD2E74F5591884CB19F35F();
	void OnInterrupted_F0F6785443BD2E74F5591884CB19F35F();
	void OnBlendOut_F0F6785443BD2E74F5591884CB19F35F();
	void OnCompleted_F0F6785443BD2E74F5591884CB19F35F();
	void OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6();
	void OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6();
	void OnFinish_4C169D40441E45B462D83CBBA67F6E45();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_AthenaDBNO(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_StartAbilityState* CallFunc_StartAbilityState_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, float CallFunc_GetInitialHealAmount_Health, bool K2Node_Event_bWasCancelled, const struct FGameplayEffectSpecHandle& CallFunc_AssignSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, const struct FGameplayEventData& K2Node_Event_EventData, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, class UAnimMontage* CallFunc_Get_DBNO_Montage_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
