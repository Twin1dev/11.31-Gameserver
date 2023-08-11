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


// Function TabControllerSettings_New.TabControllerSettings_New_C.SettingValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabControllerSettings_New_C::SettingValueChanged(float Value)
{
	static auto Func = Class->GetFunction("TabControllerSettings_New_C", "SettingValueChanged");

	Params::UTabControllerSettings_New_C_SettingValueChanged_Params Parms;

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabControllerSettings_New.TabControllerSettings_New_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabControllerSettings_New_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabControllerSettings_New_C", "CenterOnTab");

	Params::UTabControllerSettings_New_C_CenterOnTab_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabControllerSettings_New.TabControllerSettings_New_C.ExecuteUbergraph_TabControllerSettings_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabControllerSettings_New_C::ExecuteUbergraph_TabControllerSettings_New(int32 EntryPoint, float K2Node_CustomEvent_Value)
{
	static auto Func = Class->GetFunction("TabControllerSettings_New_C", "ExecuteUbergraph_TabControllerSettings_New");

	Params::UTabControllerSettings_New_C_ExecuteUbergraph_TabControllerSettings_New_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
