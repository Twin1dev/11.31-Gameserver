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


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.EndAbilityCleanup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Galileo_Lobster_Block_C::EndAbilityCleanup(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "EndAbilityCleanup");

	Params::UGA_Galileo_Lobster_Block_C_EndAbilityCleanup_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.EnableBlockingCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 CallFunc_GetCurrentSourceWeapon_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Athena_Galileo_Lobster_Parent_C*K2Node_DynamicCast_AsB_Athena_Galileo_Lobster_Parent             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ZeroConstructor, ReferenceParm)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_Galileo_Lobster_Block_Collision_C*K2Node_DynamicCast_AsB_Galileo_Lobster_Block_Collision           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Galileo_Lobster_Block_Collision_C*K2Node_DynamicCast_AsB_Galileo_Lobster_Block_Collision_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Galileo_Lobster_Block_C::EnableBlockingCollision(int32 Temp_int_Array_Index_Variable, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AB_Athena_Galileo_Lobster_Parent_C* K2Node_DynamicCast_AsB_Athena_Galileo_Lobster_Parent, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AB_Galileo_Lobster_Block_Collision_C* K2Node_DynamicCast_AsB_Galileo_Lobster_Block_Collision, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class AB_Galileo_Lobster_Block_Collision_C* K2Node_DynamicCast_AsB_Galileo_Lobster_Block_Collision_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "EnableBlockingCollision");

	Params::UGA_Galileo_Lobster_Block_C_EnableBlockingCollision_Params Parms;

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCurrentSourceWeapon_ReturnValue = CallFunc_GetCurrentSourceWeapon_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsB_Athena_Galileo_Lobster_Parent = K2Node_DynamicCast_AsB_Athena_Galileo_Lobster_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Galileo_Lobster_Block_Collision = K2Node_DynamicCast_AsB_Galileo_Lobster_Block_Collision;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Galileo_Lobster_Block_Collision_1 = K2Node_DynamicCast_AsB_Galileo_Lobster_Block_Collision_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.InitAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeapon*                 CallFunc_GetCurrentSourceWeapon_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Athena_Galileo_Lobster_Parent_C*K2Node_DynamicCast_AsB_Athena_Galileo_Lobster_Parent             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Galileo_Lobster_Block_C::InitAbility(bool CallFunc_K2_CommitAbility_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, class AB_Athena_Galileo_Lobster_Parent_C* K2Node_DynamicCast_AsB_Athena_Galileo_Lobster_Parent, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "InitAbility");

	Params::UGA_Galileo_Lobster_Block_C_InitAbility_Params Parms;

	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentSourceWeapon_ReturnValue = CallFunc_GetCurrentSourceWeapon_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Athena_Galileo_Lobster_Parent = K2Node_DynamicCast_AsB_Athena_Galileo_Lobster_Parent;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.Added_9034B1574A61C0C8F7C9CCA067665014
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Block_C::Added_9034B1574A61C0C8F7C9CCA067665014()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "Added_9034B1574A61C0C8F7C9CCA067665014");

	Params::UGA_Galileo_Lobster_Block_C_Added_9034B1574A61C0C8F7C9CCA067665014_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.Added_4A5A6EF945595D500D1BB2AFE39B8739
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Block_C::Added_4A5A6EF945595D500D1BB2AFE39B8739()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "Added_4A5A6EF945595D500D1BB2AFE39B8739");

	Params::UGA_Galileo_Lobster_Block_C_Added_4A5A6EF945595D500D1BB2AFE39B8739_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.Added_CDFF4D1740585E98F2BF98BA87597AB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Block_C::Added_CDFF4D1740585E98F2BF98BA87597AB9()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "Added_CDFF4D1740585E98F2BF98BA87597AB9");

	Params::UGA_Galileo_Lobster_Block_C_Added_CDFF4D1740585E98F2BF98BA87597AB9_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.Added_5FCDDEE7446047F8942B6083274BB65F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Block_C::Added_5FCDDEE7446047F8942B6083274BB65F()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "Added_5FCDDEE7446047F8942B6083274BB65F");

	Params::UGA_Galileo_Lobster_Block_C_Added_5FCDDEE7446047F8942B6083274BB65F_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.Added_780D67FC49A19F7FA016BE90FC5831D8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Block_C::Added_780D67FC49A19F7FA016BE90FC5831D8()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "Added_780D67FC49A19F7FA016BE90FC5831D8");

	Params::UGA_Galileo_Lobster_Block_C_Added_780D67FC49A19F7FA016BE90FC5831D8_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.Added_A761FA0941B5F4959784779712C6BDFE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Block_C::Added_A761FA0941B5F4959784779712C6BDFE()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "Added_A761FA0941B5F4959784779712C6BDFE");

	Params::UGA_Galileo_Lobster_Block_C_Added_A761FA0941B5F4959784779712C6BDFE_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.Added_0D7B4D884AAC5BCEA71DB8B8D72F8E0F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Block_C::Added_0D7B4D884AAC5BCEA71DB8B8D72F8E0F()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "Added_0D7B4D884AAC5BCEA71DB8B8D72F8E0F");

	Params::UGA_Galileo_Lobster_Block_C_Added_0D7B4D884AAC5BCEA71DB8B8D72F8E0F_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.EventReceived_6B79BEA741F2CA05FAC8DDA5DF319A8D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Galileo_Lobster_Block_C::EventReceived_6B79BEA741F2CA05FAC8DDA5DF319A8D(const struct FGameplayEventData& Payload)
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "EventReceived_6B79BEA741F2CA05FAC8DDA5DF319A8D");

	Params::UGA_Galileo_Lobster_Block_C_EventReceived_6B79BEA741F2CA05FAC8DDA5DF319A8D_Params Parms;

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.EventReceived_69CA5C6C46EED6C8408F07BCF8110743
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Galileo_Lobster_Block_C::EventReceived_69CA5C6C46EED6C8408F07BCF8110743(const struct FGameplayEventData& Payload)
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "EventReceived_69CA5C6C46EED6C8408F07BCF8110743");

	Params::UGA_Galileo_Lobster_Block_C_EventReceived_69CA5C6C46EED6C8408F07BCF8110743_Params Parms;

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Block_C::OnAbilityInputReleased()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "OnAbilityInputReleased");

	Params::UGA_Galileo_Lobster_Block_C_OnAbilityInputReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Galileo_Lobster_Block_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "K2_OnEndAbility");

	Params::UGA_Galileo_Lobster_Block_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_Block_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "K2_ActivateAbility");

	Params::UGA_Galileo_Lobster_Block_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_Block.GA_Galileo_Lobster_Block_C.ExecuteUbergraph_GA_Galileo_Lobster_Block
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FGameplayEventData          K2Node_CustomEvent_Payload_1                                     ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// struct FGameplayEventData          Temp_struct_Variable                                             ()
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       ()
// struct FGameplayEventData          Temp_struct_Variable_1                                           ()
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)

void UGA_Galileo_Lobster_Block_C::ExecuteUbergraph_GA_Galileo_Lobster_Block(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable_1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_bWasCancelled, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_2, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_6, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_7, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_8, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9)
{
	static auto Func = Class->GetFunction("GA_Galileo_Lobster_Block_C", "ExecuteUbergraph_GA_Galileo_Lobster_Block");

	Params::UGA_Galileo_Lobster_Block_C_ExecuteUbergraph_GA_Galileo_Lobster_Block_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_Payload_1 = K2Node_CustomEvent_Payload_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue_1 = CallFunc_WaitGameplayEvent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_1 = CallFunc_WaitGameplayTagAdd_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_2 = CallFunc_WaitGameplayTagAdd_ReturnValue_2;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_3 = CallFunc_WaitGameplayTagAdd_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_4 = CallFunc_WaitGameplayTagAdd_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_5 = CallFunc_WaitGameplayTagAdd_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_6 = CallFunc_WaitGameplayTagAdd_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
