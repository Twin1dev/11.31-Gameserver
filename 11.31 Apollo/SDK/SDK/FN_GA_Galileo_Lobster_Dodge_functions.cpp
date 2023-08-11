#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GA_Galileo_Lobster_Dodge.GA_Galileo_Lobster_Dodge_C.SelectDodgeMontage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                DodgeMontage                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LOCAL_Direction                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCurrentAcceleration_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Vector_IsNearlyZero_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Dot_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Galileo_Lobster_Dodge_C::SelectDodgeMontage(struct FVector* Direction, class UAnimMontage** DodgeMontage, int32 LOCAL_Direction, int32 Temp_int_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class UClass* Temp_class_Variable_2, class UClass* Temp_class_Variable_3, bool Temp_bool_Variable, int32 Temp_int_Variable_1, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* Temp_object_Variable_2, class UAnimMontage* Temp_object_Variable_3, class UClass* K2Node_Select_Default, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class UAnimMontage* K2Node_Select_Default_1, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_Vector_IsNearlyZero_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, const struct FVector& K2Node_Select_Default_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_3)
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Dodge_C", "SelectDodgeMontage");

	Params::UGA_Galileo_Lobster_Dodge_C_SelectDodgeMontage_Params Parms;

	Parms.LOCAL_Direction = LOCAL_Direction;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.Temp_class_Variable_3 = Temp_class_Variable_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetCurrentAcceleration_ReturnValue = CallFunc_GetCurrentAcceleration_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_Vector_IsNearlyZero_ReturnValue = CallFunc_Vector_IsNearlyZero_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Dot_VectorVector_ReturnValue_1 = CallFunc_Dot_VectorVector_ReturnValue_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_2 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_3 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = Parms.Direction;

	if (DodgeMontage != nullptr)
		*DodgeMontage = Parms.DodgeMontage;

}


// Function GA_Galileo_Lobster_Dodge.GA_Galileo_Lobster_Dodge_C.OnFinish_3701CDDB4ABF86025C059291A706D4B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Dodge_C::OnFinish_3701CDDB4ABF86025C059291A706D4B9()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Dodge_C", "OnFinish_3701CDDB4ABF86025C059291A706D4B9");

	Params::UGA_Galileo_Lobster_Dodge_C_OnFinish_3701CDDB4ABF86025C059291A706D4B9_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Dodge.GA_Galileo_Lobster_Dodge_C.OnCancelled_B50D26204DCDE54864E4E4BE01DD0702
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Dodge_C::OnCancelled_B50D26204DCDE54864E4E4BE01DD0702()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Dodge_C", "OnCancelled_B50D26204DCDE54864E4E4BE01DD0702");

	Params::UGA_Galileo_Lobster_Dodge_C_OnCancelled_B50D26204DCDE54864E4E4BE01DD0702_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Dodge.GA_Galileo_Lobster_Dodge_C.OnInterrupted_B50D26204DCDE54864E4E4BE01DD0702
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Dodge_C::OnInterrupted_B50D26204DCDE54864E4E4BE01DD0702()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Dodge_C", "OnInterrupted_B50D26204DCDE54864E4E4BE01DD0702");

	Params::UGA_Galileo_Lobster_Dodge_C_OnInterrupted_B50D26204DCDE54864E4E4BE01DD0702_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Dodge.GA_Galileo_Lobster_Dodge_C.OnBlendOut_B50D26204DCDE54864E4E4BE01DD0702
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Dodge_C::OnBlendOut_B50D26204DCDE54864E4E4BE01DD0702()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Dodge_C", "OnBlendOut_B50D26204DCDE54864E4E4BE01DD0702");

	Params::UGA_Galileo_Lobster_Dodge_C_OnBlendOut_B50D26204DCDE54864E4E4BE01DD0702_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Dodge.GA_Galileo_Lobster_Dodge_C.OnCompleted_B50D26204DCDE54864E4E4BE01DD0702
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Dodge_C::OnCompleted_B50D26204DCDE54864E4E4BE01DD0702()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Dodge_C", "OnCompleted_B50D26204DCDE54864E4E4BE01DD0702");

	Params::UGA_Galileo_Lobster_Dodge_C_OnCompleted_B50D26204DCDE54864E4E4BE01DD0702_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Dodge.GA_Galileo_Lobster_Dodge_C.Added_F353C9544720980739529CBB2776F7E1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Dodge_C::Added_F353C9544720980739529CBB2776F7E1()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Dodge_C", "Added_F353C9544720980739529CBB2776F7E1");

	Params::UGA_Galileo_Lobster_Dodge_C_Added_F353C9544720980739529CBB2776F7E1_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Dodge.GA_Galileo_Lobster_Dodge_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Dodge_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Dodge_C", "K2_ActivateAbility");

	Params::UGA_Galileo_Lobster_Dodge_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Dodge.GA_Galileo_Lobster_Dodge_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Galileo_Lobster_Dodge_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Dodge_C", "K2_OnEndAbility");

	Params::UGA_Galileo_Lobster_Dodge_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Dodge.GA_Galileo_Lobster_Dodge_C.ExecuteUbergraph_GA_Galileo_Lobster_Dodge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectDodgeMontage_Direction                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_SelectDodgeMontage_DodgeMontage                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_ApplyRootMotionConstantForce*CallFunc_ApplyRootMotionConstantForce_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Galileo_Lobster_Dodge_C::ExecuteUbergraph_GA_Galileo_Lobster_Dodge(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_Event_bWasCancelled, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, const struct FVector& CallFunc_SelectDodgeMontage_Direction, class UAnimMontage* CallFunc_SelectDodgeMontage_DodgeMontage, bool CallFunc_K2_CommitAbility_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAbilityTask_ApplyRootMotionConstantForce* CallFunc_ApplyRootMotionConstantForce_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2)
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Dodge_C", "ExecuteUbergraph_GA_Galileo_Lobster_Dodge");

	Params::UGA_Galileo_Lobster_Dodge_C_ExecuteUbergraph_GA_Galileo_Lobster_Dodge_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_SelectDodgeMontage_Direction = CallFunc_SelectDodgeMontage_Direction;
	Parms.CallFunc_SelectDodgeMontage_DodgeMontage = CallFunc_SelectDodgeMontage_DodgeMontage;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ApplyRootMotionConstantForce_ReturnValue = CallFunc_ApplyRootMotionConstantForce_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
