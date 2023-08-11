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


// Function RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void URejoinWindow_C::OnRequestRejoinRetry__DelegateSignature()
{
	static auto Func = Class->GetFunction("RejoinWindow_C", "OnRequestRejoinRetry__DelegateSignature");

	Params::URejoinWindow_C_OnRequestRejoinRetry__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void URejoinWindow_C::OnRequestAbandon__DelegateSignature()
{
	static auto Func = Class->GetFunction("RejoinWindow_C", "OnRequestAbandon__DelegateSignature");

	Params::URejoinWindow_C_OnRequestAbandon__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
