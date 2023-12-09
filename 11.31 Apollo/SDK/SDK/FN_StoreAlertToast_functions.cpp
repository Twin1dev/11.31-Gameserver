#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StoreAlertToast.StoreAlertToast_C
// (None)

class UClass* UStoreAlertToast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoreAlertToast_C");

	return Clss;
}


// StoreAlertToast_C StoreAlertToast.Default__StoreAlertToast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStoreAlertToast_C* UStoreAlertToast_C::GetDefaultObj()
{
	static class UStoreAlertToast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoreAlertToast_C*>(UStoreAlertToast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StoreAlertToast.StoreAlertToast_C.AttemptToShowToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreAlertToast_C::AttemptToShowToast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreAlertToast_C", "AttemptToShowToast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreAlertToast.StoreAlertToast_C.BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UStoreAlertToast_C::BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreAlertToast_C", "BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreAlertToast.StoreAlertToast_C.DisplayStoreUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UStoreToastRequest*          NewStoreUpdatedRequest                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreAlertToast_C::DisplayStoreUpdated(class UStoreToastRequest* NewStoreUpdatedRequest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreAlertToast_C", "DisplayStoreUpdated");

	Params::UStoreAlertToast_C_DisplayStoreUpdated_Params Parms{};

	Parms.NewStoreUpdatedRequest = NewStoreUpdatedRequest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreAlertToast.StoreAlertToast_C.ExecuteUbergraph_StoreAlertToast
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UStoreToastRequest*          K2Node_Event_NewStoreUpdatedRequest                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRequestReady_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldBeginRequest_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStoreCallout               CallFunc_GetToast_ReturnValue                                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreAlertToast_C::ExecuteUbergraph_StoreAlertToast(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UStoreToastRequest* K2Node_Event_NewStoreUpdatedRequest, bool CallFunc_IsRequestReady_ReturnValue, bool CallFunc_ShouldBeginRequest_ReturnValue, const struct FStoreCallout& CallFunc_GetToast_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreAlertToast_C", "ExecuteUbergraph_StoreAlertToast");

	Params::UStoreAlertToast_C_ExecuteUbergraph_StoreAlertToast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_NewStoreUpdatedRequest = K2Node_Event_NewStoreUpdatedRequest;
	Parms.CallFunc_IsRequestReady_ReturnValue = CallFunc_IsRequestReady_ReturnValue;
	Parms.CallFunc_ShouldBeginRequest_ReturnValue = CallFunc_ShouldBeginRequest_ReturnValue;
	Parms.CallFunc_GetToast_ReturnValue = CallFunc_GetToast_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreAlertToast.StoreAlertToast_C.AnimationDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreAlertToast_C::AnimationDone__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreAlertToast_C", "AnimationDone__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreAlertToast.StoreAlertToast_C.AnimationStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreAlertToast_C::AnimationStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreAlertToast_C", "AnimationStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


