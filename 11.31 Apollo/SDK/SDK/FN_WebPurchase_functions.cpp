#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WebPurchase.WebPurchase_C
// (None)

class UClass* UWebPurchase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebPurchase_C");

	return Clss;
}


// WebPurchase_C WebPurchase.Default__WebPurchase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWebPurchase_C* UWebPurchase_C::GetDefaultObj()
{
	static class UWebPurchase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebPurchase_C*>(UWebPurchase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WebPurchase.WebPurchase_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWebPurchase_C::HandleBack(bool* bPassThrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPurchase_C", "HandleBack");

	Params::UWebPurchase_C_HandleBack_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function WebPurchase.WebPurchase_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWebPurchase_C::BindDelegates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPurchase_C", "BindDelegates");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WebPurchase.WebPurchase_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWebPurchase_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPurchase_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasInputActionHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWebPurchase_C::ExecuteUbergraph_WebPurchase(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasInputActionHandler_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPurchase_C", "ExecuteUbergraph_WebPurchase");

	Params::UWebPurchase_C_ExecuteUbergraph_WebPurchase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasInputActionHandler_ReturnValue = CallFunc_HasInputActionHandler_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


