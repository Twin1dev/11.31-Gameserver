#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PopupCenterMessageWidget.PopupCenterMessageWidget_C
// (None)

class UClass* UPopupCenterMessageWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PopupCenterMessageWidget_C");

	return Clss;
}


// PopupCenterMessageWidget_C PopupCenterMessageWidget.Default__PopupCenterMessageWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPopupCenterMessageWidget_C* UPopupCenterMessageWidget_C::GetDefaultObj()
{
	static class UPopupCenterMessageWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPopupCenterMessageWidget_C*>(UPopupCenterMessageWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.OnModalDisplayed
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECenterPopupMessageStateEnumNewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatablePanel*     ModalPopup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupCenterMessageWidget_C::OnModalDisplayed(enum class ECenterPopupMessageStateEnum NewState, class UCommonActivatablePanel* ModalPopup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupCenterMessageWidget_C", "OnModalDisplayed");

	Params::UPopupCenterMessageWidget_C_OnModalDisplayed_Params Parms{};

	Parms.NewState = NewState;
	Parms.ModalPopup = ModalPopup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPopupCenterMessageWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupCenterMessageWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.UpdateStateEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPopupCenterMessageWidget_C::UpdateStateEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupCenterMessageWidget_C", "UpdateStateEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPopupCenterMessageWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupCenterMessageWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.ExecuteUbergraph_PopupCenterMessageWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECenterPopupMessageStateEnumK2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatablePanel*     K2Node_Event_ModalPopup                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPopupCenterMessageModalPanel_C*K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UPopupCenterMessageWidget_C::ExecuteUbergraph_PopupCenterMessageWidget(int32 EntryPoint, enum class ECenterPopupMessageStateEnum K2Node_Event_NewState, class UCommonActivatablePanel* K2Node_Event_ModalPopup, class UPopupCenterMessageModalPanel_C* K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupCenterMessageWidget_C", "ExecuteUbergraph_PopupCenterMessageWidget");

	Params::UPopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.K2Node_Event_ModalPopup = K2Node_Event_ModalPopup;
	Parms.K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel = K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


