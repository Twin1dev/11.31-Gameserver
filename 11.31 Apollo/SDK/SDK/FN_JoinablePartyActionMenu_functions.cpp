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


// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnToggleConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsVisible                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJoinablePartyActionMenu_C::OnToggleConfirmation(bool bIsVisible)
{
	static auto Func = Class->GetFunction("JoinablePartyActionMenu_C", "OnToggleConfirmation");

	Params::UJoinablePartyActionMenu_C_OnToggleConfirmation_Params Parms;

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJoinablePartyActionMenu_C::OnOpened()
{
	static auto Func = Class->GetFunction("JoinablePartyActionMenu_C", "OnOpened");

	Params::UJoinablePartyActionMenu_C_OnOpened_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.ExecuteUbergraph_JoinablePartyActionMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsVisible                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinablePartyActionMenu_C::ExecuteUbergraph_JoinablePartyActionMenu(int32 EntryPoint, bool K2Node_Event_bIsVisible, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static auto Func = Class->GetFunction("JoinablePartyActionMenu_C", "ExecuteUbergraph_JoinablePartyActionMenu");

	Params::UJoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsVisible = K2Node_Event_bIsVisible;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
