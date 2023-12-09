#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ResizableTileStorefront.ResizableTileStorefront_C
// (None)

class UClass* UResizableTileStorefront_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResizableTileStorefront_C");

	return Clss;
}


// ResizableTileStorefront_C ResizableTileStorefront.Default__ResizableTileStorefront_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResizableTileStorefront_C* UResizableTileStorefront_C::GetDefaultObj()
{
	static class UResizableTileStorefront_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResizableTileStorefront_C*>(UResizableTileStorefront_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ResizableTileStorefront.ResizableTileStorefront_C.OnSectionEstablished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEmptySection                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResizableTileStorefront_C::OnSectionEstablished(bool bEmptySection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResizableTileStorefront_C", "OnSectionEstablished");

	Params::UResizableTileStorefront_C_OnSectionEstablished_Params Parms{};

	Parms.bEmptySection = bEmptySection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResizableTileStorefront.ResizableTileStorefront_C.ExecuteUbergraph_ResizableTileStorefront
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEmptySection                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResizableTileStorefront_C::ExecuteUbergraph_ResizableTileStorefront(int32 EntryPoint, bool K2Node_Event_bEmptySection, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResizableTileStorefront_C", "ExecuteUbergraph_ResizableTileStorefront");

	Params::UResizableTileStorefront_C_ExecuteUbergraph_ResizableTileStorefront_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bEmptySection = K2Node_Event_bEmptySection;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


