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


// Function UserActionMenu.UserActionMenu_C.OnToggleConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsVisible                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUserActionMenu_C::OnToggleConfirmation(bool bIsVisible)
{
	static auto Func = Class->GetFunction("UserActionMenu_C", "OnToggleConfirmation");

	Params::UUserActionMenu_C_OnToggleConfirmation_Params Parms;

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UserActionMenu.UserActionMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserActionMenu_C::OnOpened()
{
	static auto Func = Class->GetFunction("UserActionMenu_C", "OnOpened");

	Params::UUserActionMenu_C_OnOpened_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsVisible                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUserActionMenu_C::ExecuteUbergraph_UserActionMenu(int32 EntryPoint, bool K2Node_Event_bIsVisible, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static auto Func = Class->GetFunction("UserActionMenu_C", "ExecuteUbergraph_UserActionMenu");

	Params::UUserActionMenu_C_ExecuteUbergraph_UserActionMenu_Params Parms;

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
