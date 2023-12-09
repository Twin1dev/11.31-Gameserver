#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActivityBrowserTag.ActivityBrowserTag_C
// (None)

class UClass* UActivityBrowserTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivityBrowserTag_C");

	return Clss;
}


// ActivityBrowserTag_C ActivityBrowserTag.Default__ActivityBrowserTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActivityBrowserTag_C* UActivityBrowserTag_C::GetDefaultObj()
{
	static class UActivityBrowserTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivityBrowserTag_C*>(UActivityBrowserTag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActivityBrowserTag.ActivityBrowserTag_C.HandleStyling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UActivityBrowserTag_C::HandleStyling(const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserTag_C", "HandleStyling");

	Params::UActivityBrowserTag_C_HandleStyling_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityBrowserTag.ActivityBrowserTag_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActivityBrowserTag_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserTag_C", "PreConstruct");

	Params::UActivityBrowserTag_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityBrowserTag.ActivityBrowserTag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UActivityBrowserTag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserTag_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActivityBrowserTag.ActivityBrowserTag_C.ExecuteUbergraph_ActivityBrowserTag
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActivityBrowserTag_C::ExecuteUbergraph_ActivityBrowserTag(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserTag_C", "ExecuteUbergraph_ActivityBrowserTag");

	Params::UActivityBrowserTag_C_ExecuteUbergraph_ActivityBrowserTag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


