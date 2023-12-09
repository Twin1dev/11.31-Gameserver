#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LargeTileStorefront.LargeTileStorefront_C
// (None)

class UClass* ULargeTileStorefront_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LargeTileStorefront_C");

	return Clss;
}


// LargeTileStorefront_C LargeTileStorefront.Default__LargeTileStorefront_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULargeTileStorefront_C* ULargeTileStorefront_C::GetDefaultObj()
{
	static class ULargeTileStorefront_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULargeTileStorefront_C*>(ULargeTileStorefront_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LargeTileStorefront.LargeTileStorefront_C.OnSectionEstablished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEmptySection                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULargeTileStorefront_C::OnSectionEstablished(bool bEmptySection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTileStorefront_C", "OnSectionEstablished");

	Params::ULargeTileStorefront_C_OnSectionEstablished_Params Parms{};

	Parms.bEmptySection = bEmptySection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTileStorefront.LargeTileStorefront_C.ExecuteUbergraph_LargeTileStorefront
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEmptySection                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTileStorefront_C::ExecuteUbergraph_LargeTileStorefront(int32 EntryPoint, bool K2Node_Event_bEmptySection, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTileStorefront_C", "ExecuteUbergraph_LargeTileStorefront");

	Params::ULargeTileStorefront_C_ExecuteUbergraph_LargeTileStorefront_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bEmptySection = K2Node_Event_bEmptySection;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


