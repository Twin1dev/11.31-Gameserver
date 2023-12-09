#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass JoinablePartyActionMenu.JoinablePartyActionMenu_C
// (None)

class UClass* UJoinablePartyActionMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JoinablePartyActionMenu_C");

	return Clss;
}


// JoinablePartyActionMenu_C JoinablePartyActionMenu.Default__JoinablePartyActionMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJoinablePartyActionMenu_C* UJoinablePartyActionMenu_C::GetDefaultObj()
{
	static class UJoinablePartyActionMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJoinablePartyActionMenu_C*>(UJoinablePartyActionMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnToggleConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsVisible                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJoinablePartyActionMenu_C::OnToggleConfirmation(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JoinablePartyActionMenu_C", "OnToggleConfirmation");

	Params::UJoinablePartyActionMenu_C_OnToggleConfirmation_Params Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJoinablePartyActionMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JoinablePartyActionMenu_C", "OnOpened");



	UObject::ProcessEvent(Func, nullptr);

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JoinablePartyActionMenu_C", "ExecuteUbergraph_JoinablePartyActionMenu");

	Params::UJoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsVisible = K2Node_Event_bIsVisible;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


