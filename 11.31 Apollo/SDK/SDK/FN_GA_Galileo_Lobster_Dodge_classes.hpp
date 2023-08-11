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

// 0x80 (0xAB0 - 0xA30)
// BlueprintGeneratedClass GA_Galileo_Lobster_Dodge.GA_Galileo_Lobster_Dodge_C
class UGA_Galileo_Lobster_Dodge_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ACharacter*                            PlayerCharacter;                                   // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           MovementStrengthCurve;                             // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           DodgeEffectHandle;                                 // 0xA48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        DodgeStrength;                                     // 0xA50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DodgeDuration;                                     // 0xA70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DodgeVelocityClamp;                                // 0xA90(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Galileo_Lobster_Dodge_C");
		return Clss;
	}

	void SelectDodgeMontage(struct FVector* Direction, class UAnimMontage** DodgeMontage, int32 LOCAL_Direction, int32 Temp_int_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class UClass* Temp_class_Variable_2, class UClass* Temp_class_Variable_3, bool Temp_bool_Variable, int32 Temp_int_Variable_1, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* Temp_object_Variable_2, class UAnimMontage* Temp_object_Variable_3, class UClass* K2Node_Select_Default, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class UAnimMontage* K2Node_Select_Default_1, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_Vector_IsNearlyZero_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, const struct FVector& K2Node_Select_Default_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_3);
	void OnFinish_3701CDDB4ABF86025C059291A706D4B9();
	void OnCancelled_B50D26204DCDE54864E4E4BE01DD0702();
	void OnInterrupted_B50D26204DCDE54864E4E4BE01DD0702();
	void OnBlendOut_B50D26204DCDE54864E4E4BE01DD0702();
	void OnCompleted_B50D26204DCDE54864E4E4BE01DD0702();
	void Added_F353C9544720980739529CBB2776F7E1();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Galileo_Lobster_Dodge(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_Event_bWasCancelled, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, const struct FVector& CallFunc_SelectDodgeMontage_Direction, class UAnimMontage* CallFunc_SelectDodgeMontage_DodgeMontage, bool CallFunc_K2_CommitAbility_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAbilityTask_ApplyRootMotionConstantForce* CallFunc_ApplyRootMotionConstantForce_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
