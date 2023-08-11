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


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.On_BorderTouch_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UAthenaBannerSelectModal_C::On_BorderTouch_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaBannerSelectModal_C", "On_BorderTouch_MouseButtonDown_0");

	Params::UAthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Setup Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAthenaBannerSelectModal_C::Setup_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("AthenaBannerSelectModal_C", "Setup Input Action Handlers");

	Params::UAthenaBannerSelectModal_C_Setup_Input_Action_Handlers_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandleCloseAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Attempt_Leave_Picker_Left                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBannerSelectModal_C::HandleCloseAction(bool* PassThrough, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_Attempt_Leave_Picker_Left, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaBannerSelectModal_C", "HandleCloseAction");

	Params::UAthenaBannerSelectModal_C_HandleCloseAction_Params Parms;

	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.CallFunc_Attempt_Leave_Picker_Left = CallFunc_Attempt_Leave_Picker_Left;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaBannerSelectModal_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaBannerSelectModal_C", "Construct");

	Params::UAthenaBannerSelectModal_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        IconId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ColorId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBannerSelectModal_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId)
{
	static auto Func = Class->GetFunction("AthenaBannerSelectModal_C", "BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature");

	Params::UAthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature_Params Parms;

	Parms.IconId = IconId;
	Parms.ColorId = ColorId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaBannerSelectModal_C::BP_OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaBannerSelectModal_C", "BP_OnDeactivated");

	Params::UAthenaBannerSelectModal_C_BP_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaBannerSelectModal_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("AthenaBannerSelectModal_C", "BP_OnActivated");

	Params::UAthenaBannerSelectModal_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaBannerSelectModal_C::Close()
{
	static auto Func = Class->GetFunction("AthenaBannerSelectModal_C", "Close");

	Params::UAthenaBannerSelectModal_C_Close_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.ExecuteUbergraph_AthenaBannerSelectModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleCloseAction_PassThrough                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleCloseAction_PassThrough_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_IconId                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_ColorId                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBannerSelectModal_C::ExecuteUbergraph_AthenaBannerSelectModal(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_HandleCloseAction_PassThrough, bool CallFunc_HandleCloseAction_PassThrough_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class FName K2Node_ComponentBoundEvent_IconId, class FName K2Node_ComponentBoundEvent_ColorId)
{
	static auto Func = Class->GetFunction("AthenaBannerSelectModal_C", "ExecuteUbergraph_AthenaBannerSelectModal");

	Params::UAthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_HandleCloseAction_PassThrough = CallFunc_HandleCloseAction_PassThrough;
	Parms.CallFunc_HandleCloseAction_PassThrough_1 = CallFunc_HandleCloseAction_PassThrough_1;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_ComponentBoundEvent_IconId = K2Node_ComponentBoundEvent_IconId;
	Parms.K2Node_ComponentBoundEvent_ColorId = K2Node_ComponentBoundEvent_ColorId;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
