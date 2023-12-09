#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TabHUDOptions_New.TabHUDOptions_New_C
// (None)

class UClass* UTabHUDOptions_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabHUDOptions_New_C");

	return Clss;
}


// TabHUDOptions_New_C TabHUDOptions_New.Default__TabHUDOptions_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabHUDOptions_New_C* UTabHUDOptions_New_C::GetDefaultObj()
{
	static class UTabHUDOptions_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabHUDOptions_New_C*>(UTabHUDOptions_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabHUDOptions_New.TabHUDOptions_New_C.SettingValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabHUDOptions_New_C::SettingValueChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabHUDOptions_New_C", "SettingValueChanged");

	Params::UTabHUDOptions_New_C_SettingValueChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabHUDOptions_New.TabHUDOptions_New_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabHUDOptions_New_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabHUDOptions_New_C", "CenterOnTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabHUDOptions_New.TabHUDOptions_New_C.ExecuteUbergraph_TabHUDOptions_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabHUDOptions_New_C::ExecuteUbergraph_TabHUDOptions_New(int32 EntryPoint, float K2Node_CustomEvent_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabHUDOptions_New_C", "ExecuteUbergraph_TabHUDOptions_New");

	Params::UTabHUDOptions_New_C_ExecuteUbergraph_TabHUDOptions_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


