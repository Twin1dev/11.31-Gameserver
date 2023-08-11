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


// Function AthenaChatWidget.AthenaChatWidget_C.OnEnteredChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnteredChat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChatWidget_C::OnEnteredChat__DelegateSignature(bool EnteredChat)
{
	static auto Func = Class->GetFunction("AthenaChatWidget_C", "OnEnteredChat__DelegateSignature");

	Params::UAthenaChatWidget_C_OnEnteredChat__DelegateSignature_Params Parms;

	Parms.EnteredChat = EnteredChat;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
