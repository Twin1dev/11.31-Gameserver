#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ReticleStatusWidget.ReticleStatusWidget_C
// (None)

class UClass* UReticleStatusWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReticleStatusWidget_C");

	return Clss;
}


// ReticleStatusWidget_C ReticleStatusWidget.Default__ReticleStatusWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReticleStatusWidget_C* UReticleStatusWidget_C::GetDefaultObj()
{
	static class UReticleStatusWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReticleStatusWidget_C*>(UReticleStatusWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReticleStatusWidget.ReticleStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UReticleStatusWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReticleStatusWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReticleStatusWidget.ReticleStatusWidget_C.OnUnableToPerformAction
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       FailedReason                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        FailureText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UReticleStatusWidget_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, class FText& FailureText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReticleStatusWidget_C", "OnUnableToPerformAction");

	Params::UReticleStatusWidget_C_OnUnableToPerformAction_Params Parms{};

	Parms.FailedReason = FailedReason;
	Parms.FailureText = FailureText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReticleStatusWidget.ReticleStatusWidget_C.ExecuteUbergraph_ReticleStatusWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayTagContainer       K2Node_CustomEvent_FailedReason                                  (None)
// class FText                        K2Node_CustomEvent_FailureText                                   (ConstParm)

void UReticleStatusWidget_C::ExecuteUbergraph_ReticleStatusWidget(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTagContainer& K2Node_CustomEvent_FailedReason, class FText K2Node_CustomEvent_FailureText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReticleStatusWidget_C", "ExecuteUbergraph_ReticleStatusWidget");

	Params::UReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_FailedReason = K2Node_CustomEvent_FailedReason;
	Parms.K2Node_CustomEvent_FailureText = K2Node_CustomEvent_FailureText;

	UObject::ProcessEvent(Func, &Parms);

}

}


