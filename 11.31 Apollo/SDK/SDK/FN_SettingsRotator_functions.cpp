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


// Function SettingsRotator.SettingsRotator_C.BP_OnOptionsPopulated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsRotator_C::BP_OnOptionsPopulated(int32 Count)
{
	static auto Func = Class->GetFunction("SettingsRotator_C", "BP_OnOptionsPopulated");

	Params::USettingsRotator_C_BP_OnOptionsPopulated_Params Parms;

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsRotator.SettingsRotator_C.BP_OnOptionSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsRotator_C::BP_OnOptionSelected(int32 Index)
{
	static auto Func = Class->GetFunction("SettingsRotator_C", "BP_OnOptionSelected");

	Params::USettingsRotator_C_BP_OnOptionSelected_Params Parms;

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsRotator.SettingsRotator_C.BP_OnDefaultOptionSpecified
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              DefaultOptionIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsRotator_C::BP_OnDefaultOptionSpecified(int32 DefaultOptionIndex)
{
	static auto Func = Class->GetFunction("SettingsRotator_C", "BP_OnDefaultOptionSpecified");

	Params::USettingsRotator_C_BP_OnDefaultOptionSpecified_Params Parms;

	Parms.DefaultOptionIndex = DefaultOptionIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsRotator.SettingsRotator_C.ExecuteUbergraph_SettingsRotator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Count                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_DefaultOptionIndex                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsRotator_C::ExecuteUbergraph_SettingsRotator(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 K2Node_Event_Count, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 K2Node_Event_Index, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 K2Node_Event_DefaultOptionIndex, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_2)
{
	static auto Func = Class->GetFunction("SettingsRotator_C", "ExecuteUbergraph_SettingsRotator");

	Params::USettingsRotator_C_ExecuteUbergraph_SettingsRotator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_Count = K2Node_Event_Count;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.K2Node_Event_DefaultOptionIndex = K2Node_Event_DefaultOptionIndex;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
