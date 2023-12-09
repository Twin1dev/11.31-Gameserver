#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TabGameplayOptions_New.TabGameplayOptions_New_C
// (None)

class UClass* UTabGameplayOptions_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabGameplayOptions_New_C");

	return Clss;
}


// TabGameplayOptions_New_C TabGameplayOptions_New.Default__TabGameplayOptions_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabGameplayOptions_New_C* UTabGameplayOptions_New_C::GetDefaultObj()
{
	static class UTabGameplayOptions_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabGameplayOptions_New_C*>(UTabGameplayOptions_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabGameplayOptions_New.TabGameplayOptions_New_C.SettingValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameplayOptions_New_C::SettingValueChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameplayOptions_New_C", "SettingValueChanged");

	Params::UTabGameplayOptions_New_C_SettingValueChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameplayOptions_New.TabGameplayOptions_New_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGameplayOptions_New_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameplayOptions_New_C", "CenterOnTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabGameplayOptions_New.TabGameplayOptions_New_C.ExecuteUbergraph_TabGameplayOptions_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameplayOptions_New_C::ExecuteUbergraph_TabGameplayOptions_New(int32 EntryPoint, float K2Node_CustomEvent_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameplayOptions_New_C", "ExecuteUbergraph_TabGameplayOptions_New");

	Params::UTabGameplayOptions_New_C_ExecuteUbergraph_TabGameplayOptions_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


