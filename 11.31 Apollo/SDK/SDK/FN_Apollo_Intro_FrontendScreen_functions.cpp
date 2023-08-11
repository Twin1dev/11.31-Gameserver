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


// Function Apollo_Intro_FrontendScreen.Apollo_Intro_FrontendScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UApollo_Intro_FrontendScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("Apollo_Intro_FrontendScreen_C", "OnKeyDown");

	Params::UApollo_Intro_FrontendScreen_C_OnKeyDown_Params Parms;

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
	static auto Func = Class->GetFunction("Apollo_Intro_FrontendScreen_C", "BP_OnActivated");

	Params::UApollo_Intro_FrontendScreen_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Apollo_Intro_FrontendScreen.Apollo_Intro_FrontendScreen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UApollo_Intro_FrontendScreen_C::BP_OnDeactivated()
{
	static auto Func = Class->GetFunction("Apollo_Intro_FrontendScreen_C", "BP_OnDeactivated");

	Params::UApollo_Intro_FrontendScreen_C_BP_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Apollo_Intro_FrontendScreen.Apollo_Intro_FrontendScreen_C.ExecuteUbergraph_Apollo_Intro_FrontendScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UApollo_Intro_FrontendScreen_C::ExecuteUbergraph_Apollo_Intro_FrontendScreen(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Apollo_Intro_FrontendScreen_C", "ExecuteUbergraph_Apollo_Intro_FrontendScreen");

	Params::UApollo_Intro_FrontendScreen_C_ExecuteUbergraph_Apollo_Intro_FrontendScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
