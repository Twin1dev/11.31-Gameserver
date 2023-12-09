#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LetoFrontendJoinPrompt_Side.LetoFrontendJoinPrompt_Side_C
// (None)

class UClass* ULetoFrontendJoinPrompt_Side_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LetoFrontendJoinPrompt_Side_C");

	return Clss;
}


// LetoFrontendJoinPrompt_Side_C LetoFrontendJoinPrompt_Side.Default__LetoFrontendJoinPrompt_Side_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULetoFrontendJoinPrompt_Side_C* ULetoFrontendJoinPrompt_Side_C::GetDefaultObj()
{
	static class ULetoFrontendJoinPrompt_Side_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULetoFrontendJoinPrompt_Side_C*>(ULetoFrontendJoinPrompt_Side_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LetoFrontendJoinPrompt_Side.LetoFrontendJoinPrompt_Side_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULetoFrontendJoinPrompt_Side_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LetoFrontendJoinPrompt_Side_C", "OnMouseEnter");

	Params::ULetoFrontendJoinPrompt_Side_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LetoFrontendJoinPrompt_Side.LetoFrontendJoinPrompt_Side_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULetoFrontendJoinPrompt_Side_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LetoFrontendJoinPrompt_Side_C", "OnMouseLeave");

	Params::ULetoFrontendJoinPrompt_Side_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LetoFrontendJoinPrompt_Side.LetoFrontendJoinPrompt_Side_C.ExecuteUbergraph_LetoFrontendJoinPrompt_Side
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)

void ULetoFrontendJoinPrompt_Side_C::ExecuteUbergraph_LetoFrontendJoinPrompt_Side(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LetoFrontendJoinPrompt_Side_C", "ExecuteUbergraph_LetoFrontendJoinPrompt_Side");

	Params::ULetoFrontendJoinPrompt_Side_C_ExecuteUbergraph_LetoFrontendJoinPrompt_Side_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


