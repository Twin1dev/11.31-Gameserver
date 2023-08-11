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


// Function ActivityBrowserTag.ActivityBrowserTag_C.HandleStyling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UActivityBrowserTag_C::HandleStyling(const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("ActivityBrowserTag_C", "HandleStyling");

	Params::UActivityBrowserTag_C_HandleStyling_Params Parms;

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityBrowserTag.ActivityBrowserTag_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActivityBrowserTag_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ActivityBrowserTag_C", "PreConstruct");

	Params::UActivityBrowserTag_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityBrowserTag.ActivityBrowserTag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UActivityBrowserTag_C::Construct()
{
	static auto Func = Class->GetFunction("ActivityBrowserTag_C", "Construct");

	Params::UActivityBrowserTag_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityBrowserTag.ActivityBrowserTag_C.ExecuteUbergraph_ActivityBrowserTag
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActivityBrowserTag_C::ExecuteUbergraph_ActivityBrowserTag(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("ActivityBrowserTag_C", "ExecuteUbergraph_ActivityBrowserTag");

	Params::UActivityBrowserTag_C_ExecuteUbergraph_ActivityBrowserTag_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
