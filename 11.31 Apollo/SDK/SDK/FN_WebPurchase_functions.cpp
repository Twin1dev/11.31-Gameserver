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


// Function WebPurchase.WebPurchase_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWebPurchase_C::HandleBack(bool* bPassThrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("WebPurchase_C", "HandleBack");

	Params::UWebPurchase_C_HandleBack_Params Parms;

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
	static auto Func = Class->GetFunction("WebPurchase_C", "BindDelegates");

	Params::UWebPurchase_C_BindDelegates_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WebPurchase.WebPurchase_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWebPurchase_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("WebPurchase_C", "BP_OnActivated");

	Params::UWebPurchase_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasInputActionHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWebPurchase_C::ExecuteUbergraph_WebPurchase(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasInputActionHandler_ReturnValue)
{
	static auto Func = Class->GetFunction("WebPurchase_C", "ExecuteUbergraph_WebPurchase");

	Params::UWebPurchase_C_ExecuteUbergraph_WebPurchase_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasInputActionHandler_ReturnValue = CallFunc_HasInputActionHandler_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
