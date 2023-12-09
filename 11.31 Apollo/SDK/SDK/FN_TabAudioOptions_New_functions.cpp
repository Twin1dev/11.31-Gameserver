#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TabAudioOptions_New.TabAudioOptions_New_C
// (None)

class UClass* UTabAudioOptions_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabAudioOptions_New_C");

	return Clss;
}


// TabAudioOptions_New_C TabAudioOptions_New.Default__TabAudioOptions_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabAudioOptions_New_C* UTabAudioOptions_New_C::GetDefaultObj()
{
	static class UTabAudioOptions_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabAudioOptions_New_C*>(UTabAudioOptions_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabAudioOptions_New.TabAudioOptions_New_C.SettingValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_New_C::SettingValueChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_New_C", "SettingValueChanged");

	Params::UTabAudioOptions_New_C_SettingValueChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions_New.TabAudioOptions_New_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabAudioOptions_New_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_New_C", "CenterOnTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabAudioOptions_New.TabAudioOptions_New_C.ExecuteUbergraph_TabAudioOptions_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_New_C::ExecuteUbergraph_TabAudioOptions_New(int32 EntryPoint, float K2Node_CustomEvent_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAudioOptions_New_C", "ExecuteUbergraph_TabAudioOptions_New");

	Params::UTabAudioOptions_New_C_ExecuteUbergraph_TabAudioOptions_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


