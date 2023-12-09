#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Apollo_Intro_FrontendScreen.Apollo_Intro_FrontendScreen_C
// (None)

class UClass* UApollo_Intro_FrontendScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Apollo_Intro_FrontendScreen_C");

	return Clss;
}


// Apollo_Intro_FrontendScreen_C Apollo_Intro_FrontendScreen.Default__Apollo_Intro_FrontendScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UApollo_Intro_FrontendScreen_C* UApollo_Intro_FrontendScreen_C::GetDefaultObj()
{
	static class UApollo_Intro_FrontendScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UApollo_Intro_FrontendScreen_C*>(UApollo_Intro_FrontendScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Apollo_Intro_FrontendScreen.Apollo_Intro_FrontendScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UApollo_Intro_FrontendScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Apollo_Intro_FrontendScreen_C", "OnKeyDown");

	Params::UApollo_Intro_FrontendScreen_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Apollo_Intro_FrontendScreen.Apollo_Intro_FrontendScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UApollo_Intro_FrontendScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Apollo_Intro_FrontendScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Apollo_Intro_FrontendScreen.Apollo_Intro_FrontendScreen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UApollo_Intro_FrontendScreen_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Apollo_Intro_FrontendScreen_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Apollo_Intro_FrontendScreen.Apollo_Intro_FrontendScreen_C.ExecuteUbergraph_Apollo_Intro_FrontendScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UApollo_Intro_FrontendScreen_C::ExecuteUbergraph_Apollo_Intro_FrontendScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Apollo_Intro_FrontendScreen_C", "ExecuteUbergraph_Apollo_Intro_FrontendScreen");

	Params::UApollo_Intro_FrontendScreen_C_ExecuteUbergraph_Apollo_Intro_FrontendScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


