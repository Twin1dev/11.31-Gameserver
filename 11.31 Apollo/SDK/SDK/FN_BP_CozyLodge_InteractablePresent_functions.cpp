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


// Function BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C.Timeline_OpenPresent__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CozyLodge_InteractablePresent_C::Timeline_OpenPresent__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_CozyLodge_InteractablePresent_C", "Timeline_OpenPresent__FinishedFunc");

	Params::ABP_CozyLodge_InteractablePresent_C_Timeline_OpenPresent__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C.Timeline_OpenPresent__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CozyLodge_InteractablePresent_C::Timeline_OpenPresent__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_CozyLodge_InteractablePresent_C", "Timeline_OpenPresent__UpdateFunc");

	Params::ABP_CozyLodge_InteractablePresent_C_Timeline_OpenPresent__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CozyLodge_InteractablePresent_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_CozyLodge_InteractablePresent_C", "Timeline_0__FinishedFunc");

	Params::ABP_CozyLodge_InteractablePresent_C_Timeline_0__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CozyLodge_InteractablePresent_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_CozyLodge_InteractablePresent_C", "Timeline_0__UpdateFunc");

	Params::ABP_CozyLodge_InteractablePresent_C_Timeline_0__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C.Timeline_0__TriggerFX__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_CozyLodge_InteractablePresent_C::Timeline_0__TriggerFX__EventFunc()
{
	static auto Func = Class->GetFunction("BP_CozyLodge_InteractablePresent_C", "Timeline_0__TriggerFX__EventFunc");

	Params::ABP_CozyLodge_InteractablePresent_C_Timeline_0__TriggerFX__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C.Timeline_Shake__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CozyLodge_InteractablePresent_C::Timeline_Shake__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_CozyLodge_InteractablePresent_C", "Timeline_Shake__FinishedFunc");

	Params::ABP_CozyLodge_InteractablePresent_C_Timeline_Shake__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C.Timeline_Shake__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CozyLodge_InteractablePresent_C::Timeline_Shake__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_CozyLodge_InteractablePresent_C", "Timeline_Shake__UpdateFunc");

	Params::ABP_CozyLodge_InteractablePresent_C_Timeline_Shake__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C.OnShakePresent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         ItemDef                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CozyLodge_InteractablePresent_C::OnShakePresent(class UFortItemDefinition* ItemDef)
{
	static auto Func = Class->GetFunction("BP_CozyLodge_InteractablePresent_C", "OnShakePresent");

	Params::ABP_CozyLodge_InteractablePresent_C_OnShakePresent_Params Parms;

	Parms.ItemDef = ItemDef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C.OnOpenPresent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bActionCancelled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CozyLodge_InteractablePresent_C::OnOpenPresent(bool bActionCancelled)
{
	static auto Func = Class->GetFunction("BP_CozyLodge_InteractablePresent_C", "OnOpenPresent");

	Params::ABP_CozyLodge_InteractablePresent_C_OnOpenPresent_Params Parms;

	Parms.bActionCancelled = bActionCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C.OnResetPresent
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CozyLodge_InteractablePresent_C::OnResetPresent()
{
	static auto Func = Class->GetFunction("BP_CozyLodge_InteractablePresent_C", "OnResetPresent");

	Params::ABP_CozyLodge_InteractablePresent_C_OnResetPresent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C.TestOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CozyLodge_InteractablePresent_C::TestOpen()
{
	static auto Func = Class->GetFunction("BP_CozyLodge_InteractablePresent_C", "TestOpen");

	Params::ABP_CozyLodge_InteractablePresent_C_TestOpen_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CozyLodge_InteractablePresent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_CozyLodge_InteractablePresent_C", "ReceiveBeginPlay");

	Params::ABP_CozyLodge_InteractablePresent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C.ExecuteUbergraph_BP_CozyLodge_InteractablePresent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPI_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Sin_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         K2Node_Event_ItemDef                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bActionCancelled                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGSC_DynamicLevelStreaming_C*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UGSC_DynamicLevelStreaming_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortEventLevelNavigationActor*CallFunc_GetLastNavObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CozyLodge_SelectablePresent_C*K2Node_DynamicCast_AsBP_Cozy_Lodge_Selectable_Present            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CozyLodge_InteractablePresent_C::ExecuteUbergraph_BP_CozyLodge_InteractablePresent(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetPI_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddWorldRotation_SweepHitResult, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UFortItemDefinition* K2Node_Event_ItemDef, bool K2Node_Event_bActionCancelled, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFortEventLevelNavigationActor* CallFunc_GetLastNavObject_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ABP_CozyLodge_SelectablePresent_C* K2Node_DynamicCast_AsBP_Cozy_Lodge_Selectable_Present, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("BP_CozyLodge_InteractablePresent_C", "ExecuteUbergraph_BP_CozyLodge_InteractablePresent");

	Params::ABP_CozyLodge_InteractablePresent_C_ExecuteUbergraph_BP_CozyLodge_InteractablePresent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPI_ReturnValue = CallFunc_GetPI_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Sin_ReturnValue = CallFunc_Sin_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_AddWorldRotation_SweepHitResult = CallFunc_K2_AddWorldRotation_SweepHitResult;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_ItemDef = K2Node_Event_ItemDef;
	Parms.K2Node_Event_bActionCancelled = K2Node_Event_bActionCancelled;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue = CallFunc_K2_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue_1 = CallFunc_SpawnSoundAtLocation_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetLastNavObject_ReturnValue = CallFunc_GetLastNavObject_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Cozy_Lodge_Selectable_Present = K2Node_DynamicCast_AsBP_Cozy_Lodge_Selectable_Present;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
