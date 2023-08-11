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


// Function AccountPinLinkingWindow.AccountPinLinkingWindow_C.BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAccountPinLinkingWindow_C::BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("AccountPinLinkingWindow_C", "BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature");

	Params::UAccountPinLinkingWindow_C_BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params Parms;

	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AccountPinLinkingWindow.AccountPinLinkingWindow_C.ExecuteUbergraph_AccountPinLinkingWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAccountPinLinkingWindow_C::ExecuteUbergraph_AccountPinLinkingWindow(int32 EntryPoint, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("AccountPinLinkingWindow_C", "ExecuteUbergraph_AccountPinLinkingWindow");

	Params::UAccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
