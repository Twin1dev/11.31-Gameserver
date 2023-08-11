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


// Function BP_Cozy_Discoverable.BP_Cozy_Discoverable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Cozy_Discoverable_C::UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_2)
{
	static auto Func = Class->GetFunction("BP_Cozy_Discoverable_C", "UserConstructionScript");

	Params::ABP_Cozy_Discoverable_C_UserConstructionScript_Params Parms;

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Cozy_Discoverable.BP_Cozy_Discoverable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Cozy_Discoverable_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Cozy_Discoverable_C", "ReceiveBeginPlay");

	Params::ABP_Cozy_Discoverable_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Cozy_Discoverable.BP_Cozy_Discoverable_C.Commit_OnSpecialInteraction
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Cozy_Discoverable_C::Commit_OnSpecialInteraction()
{
	static auto Func = Class->GetFunction("BP_Cozy_Discoverable_C", "Commit_OnSpecialInteraction");

	Params::ABP_Cozy_Discoverable_C_Commit_OnSpecialInteraction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Cozy_Discoverable.BP_Cozy_Discoverable_C.ResetCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Cozy_Discoverable_C::ResetCooldown()
{
	static auto Func = Class->GetFunction("BP_Cozy_Discoverable_C", "ResetCooldown");

	Params::ABP_Cozy_Discoverable_C_ResetCooldown_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Cozy_Discoverable.BP_Cozy_Discoverable_C.HandleObjectSpecialInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ActionTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Cozy_Discoverable_C::HandleObjectSpecialInteraction(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag)
{
	static auto Func = Class->GetFunction("BP_Cozy_Discoverable_C", "HandleObjectSpecialInteraction");

	Params::ABP_Cozy_Discoverable_C_HandleObjectSpecialInteraction_Params Parms;

	Parms.ActionTag = ActionTag;
	Parms.CameraTag = CameraTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Cozy_Discoverable.BP_Cozy_Discoverable_C.NotifiedByDiscoverable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ActionTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               bIsStart                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Cozy_Discoverable_C::NotifiedByDiscoverable(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag, bool bIsStart)
{
	static auto Func = Class->GetFunction("BP_Cozy_Discoverable_C", "NotifiedByDiscoverable");

	Params::ABP_Cozy_Discoverable_C_NotifiedByDiscoverable_Params Parms;

	Parms.ActionTag = ActionTag;
	Parms.CameraTag = CameraTag;
	Parms.bIsStart = bIsStart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Cozy_Discoverable.BP_Cozy_Discoverable_C.ExecuteUbergraph_BP_Cozy_Discoverable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Cozy_Discoverable_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Event_ActionTag                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_CameraTag                                           (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_ActionTag                                     (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_CameraTag                                     (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsStart                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cozy_Discoverable_C::ExecuteUbergraph_BP_Cozy_Discoverable(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABP_Cozy_Discoverable_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& K2Node_CustomEvent_ActionTag, const struct FGameplayTag& K2Node_CustomEvent_CameraTag, bool K2Node_CustomEvent_bIsStart, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Cozy_Discoverable_C", "ExecuteUbergraph_BP_Cozy_Discoverable");

	Params::ABP_Cozy_Discoverable_C_ExecuteUbergraph_BP_Cozy_Discoverable_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Event_ActionTag = K2Node_Event_ActionTag;
	Parms.K2Node_Event_CameraTag = K2Node_Event_CameraTag;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CustomEvent_ActionTag = K2Node_CustomEvent_ActionTag;
	Parms.K2Node_CustomEvent_CameraTag = K2Node_CustomEvent_CameraTag;
	Parms.K2Node_CustomEvent_bIsStart = K2Node_CustomEvent_bIsStart;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
