#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActivityBrowserView.ActivityBrowserView_C
// (None)

class UClass* UActivityBrowserView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivityBrowserView_C");

	return Clss;
}


// ActivityBrowserView_C ActivityBrowserView.Default__ActivityBrowserView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActivityBrowserView_C* UActivityBrowserView_C::GetDefaultObj()
{
	static class UActivityBrowserView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivityBrowserView_C*>(UActivityBrowserView_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActivityBrowserView.ActivityBrowserView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActivityBrowserView_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserView_C", "PreConstruct");

	Params::UActivityBrowserView_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityBrowserView.ActivityBrowserView_C.ExecuteUbergraph_ActivityBrowserView
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActivityBrowserView_C::ExecuteUbergraph_ActivityBrowserView(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserView_C", "ExecuteUbergraph_ActivityBrowserView");

	Params::UActivityBrowserView_C_ExecuteUbergraph_ActivityBrowserView_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


