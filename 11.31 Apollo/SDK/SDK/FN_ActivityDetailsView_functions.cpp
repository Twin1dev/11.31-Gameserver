#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActivityDetailsView.ActivityDetailsView_C
// (None)

class UClass* UActivityDetailsView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivityDetailsView_C");

	return Clss;
}


// ActivityDetailsView_C ActivityDetailsView.Default__ActivityDetailsView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActivityDetailsView_C* UActivityDetailsView_C::GetDefaultObj()
{
	static class UActivityDetailsView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivityDetailsView_C*>(UActivityDetailsView_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActivityDetailsView.ActivityDetailsView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActivityDetailsView_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityDetailsView_C", "PreConstruct");

	Params::UActivityDetailsView_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityDetailsView.ActivityDetailsView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UActivityDetailsView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityDetailsView_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActivityDetailsView.ActivityDetailsView_C.ExecuteUbergraph_ActivityDetailsView
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActivityDetailsView_C::ExecuteUbergraph_ActivityDetailsView(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityDetailsView_C", "ExecuteUbergraph_ActivityDetailsView");

	Params::UActivityDetailsView_C_ExecuteUbergraph_ActivityDetailsView_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


