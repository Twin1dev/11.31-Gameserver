#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InputReflector_BottomBar.InputReflector_BottomBar_C
// (None)

class UClass* UInputReflector_BottomBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputReflector_BottomBar_C");

	return Clss;
}


// InputReflector_BottomBar_C InputReflector_BottomBar.Default__InputReflector_BottomBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInputReflector_BottomBar_C* UInputReflector_BottomBar_C::GetDefaultObj()
{
	static class UInputReflector_BottomBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputReflector_BottomBar_C*>(UInputReflector_BottomBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InputReflector_BottomBar.InputReflector_BottomBar_C.StyleButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               ButtonToStyle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               ButtonStyled                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputReflector_BottomBar_C* ReflectorButton                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputReflectorButton_BottomBar_C*K2Node_DynamicCast_AsInput_Reflector_Button_Bottom_Bar           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputReflector_BottomBar_C::StyleButton(class UCommonButton*& ButtonToStyle, class UCommonButton** ButtonStyled, class UInputReflector_BottomBar_C* ReflectorButton, class UInputReflectorButton_BottomBar_C* K2Node_DynamicCast_AsInput_Reflector_Button_Bottom_Bar, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputReflector_BottomBar_C", "StyleButton");

	Params::UInputReflector_BottomBar_C_StyleButton_Params Parms{};

	Parms.ButtonToStyle = ButtonToStyle;
	Parms.ReflectorButton = ReflectorButton;
	Parms.K2Node_DynamicCast_AsInput_Reflector_Button_Bottom_Bar = K2Node_DynamicCast_AsInput_Reflector_Button_Bottom_Bar;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ButtonStyled != nullptr)
		*ButtonStyled = Parms.ButtonStyled;

}


// Function InputReflector_BottomBar.InputReflector_BottomBar_C.HandleAddButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               AddedButton                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          HBoxSlot                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               CallFunc_StyleButton_ButtonStyled                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputReflector_BottomBar_C::HandleAddButton(class UCommonButton* AddedButton, class UHorizontalBoxSlot* HBoxSlot, class UCommonButton* CallFunc_StyleButton_ButtonStyled, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputReflector_BottomBar_C", "HandleAddButton");

	Params::UInputReflector_BottomBar_C_HandleAddButton_Params Parms{};

	Parms.AddedButton = AddedButton;
	Parms.HBoxSlot = HBoxSlot;
	Parms.CallFunc_StyleButton_ButtonStyled = CallFunc_StyleButton_ButtonStyled;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputReflector_BottomBar.InputReflector_BottomBar_C.OnButtonAdded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UCommonButton*               AddedButton                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommonInputActionHandlerDataData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UInputReflector_BottomBar_C::OnButtonAdded(class UCommonButton* AddedButton, struct FCommonInputActionHandlerData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputReflector_BottomBar_C", "OnButtonAdded");

	Params::UInputReflector_BottomBar_C_OnButtonAdded_Params Parms{};

	Parms.AddedButton = AddedButton;
	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputReflector_BottomBar.InputReflector_BottomBar_C.ExecuteUbergraph_InputReflector_BottomBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_Event_AddedButton                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommonInputActionHandlerDataK2Node_Event_Data                                                (ConstParm, NoDestructor)

void UInputReflector_BottomBar_C::ExecuteUbergraph_InputReflector_BottomBar(int32 EntryPoint, class UCommonButton* K2Node_Event_AddedButton, const struct FCommonInputActionHandlerData& K2Node_Event_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputReflector_BottomBar_C", "ExecuteUbergraph_InputReflector_BottomBar");

	Params::UInputReflector_BottomBar_C_ExecuteUbergraph_InputReflector_BottomBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_AddedButton = K2Node_Event_AddedButton;
	Parms.K2Node_Event_Data = K2Node_Event_Data;

	UObject::ProcessEvent(Func, &Parms);

}

}


