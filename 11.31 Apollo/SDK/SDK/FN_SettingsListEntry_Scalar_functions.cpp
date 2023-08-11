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


// Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* USettingsListEntry_Scalar_C::GetPrimaryGamepadFocusWidget()
{
	static auto Func = Class->GetFunction("SettingsListEntry_Scalar_C", "GetPrimaryGamepadFocusWidget");

	Params::USettingsListEntry_Scalar_C_GetPrimaryGamepadFocusWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_Scalar_C::OnValueChanged(float Value)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Scalar_C", "OnValueChanged");

	Params::USettingsListEntry_Scalar_C_OnValueChanged_Params Parms;

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnDefaultValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DefaultValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_Scalar_C::OnDefaultValueChanged(float DefaultValue)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Scalar_C", "OnDefaultValueChanged");

	Params::USettingsListEntry_Scalar_C_OnDefaultValueChanged_Params Parms;

	Parms.DefaultValue = DefaultValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_Scalar_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Scalar_C", "OnMouseEnter");

	Params::USettingsListEntry_Scalar_C_OnMouseEnter_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_Scalar_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Scalar_C", "OnMouseLeave");

	Params::USettingsListEntry_Scalar_C_OnMouseLeave_Params Parms;

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.ExecuteUbergraph_SettingsListEntry_Scalar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DefaultValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_Scalar_C::ExecuteUbergraph_SettingsListEntry_Scalar(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_MouseEvent, float K2Node_Event_Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Event_DefaultValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Scalar_C", "ExecuteUbergraph_SettingsListEntry_Scalar");

	Params::USettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_DefaultValue = K2Node_Event_DefaultValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
