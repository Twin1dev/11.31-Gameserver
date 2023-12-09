#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RedeemFriendCodeWindow.RedeemFriendCodeWindow_C
// (None)

class UClass* URedeemFriendCodeWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedeemFriendCodeWindow_C");

	return Clss;
}


// RedeemFriendCodeWindow_C RedeemFriendCodeWindow.Default__RedeemFriendCodeWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URedeemFriendCodeWindow_C* URedeemFriendCodeWindow_C::GetDefaultObj()
{
	static class URedeemFriendCodeWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URedeemFriendCodeWindow_C*>(URedeemFriendCodeWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.HandleRedeemCodeComplete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERedeemCodeFailureReasonFailureReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERedeemCodeFailureReasonTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// TArray<struct FPurchasedItemInfo>  K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void URedeemFriendCodeWindow_C::HandleRedeemCodeComplete(bool Success, enum class ERedeemCodeFailureReason FailureReason, enum class ERedeemCodeFailureReason Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, TArray<struct FPurchasedItemInfo>& K2Node_MakeArray_Array, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "HandleRedeemCodeComplete");

	Params::URedeemFriendCodeWindow_C_HandleRedeemCodeComplete_Params Parms{};

	Parms.Success = Success;
	Parms.FailureReason = FailureReason;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URedeemFriendCodeWindow_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedeemFriendCodeWindow_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature");

	Params::URedeemFriendCodeWindow_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedeemFriendCodeWindow_C::BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature");

	Params::URedeemFriendCodeWindow_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.OnRedeemFriendCodeComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERedeemCodeFailureReasonFailureReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedeemFriendCodeWindow_C::OnRedeemFriendCodeComplete(bool bSuccess, enum class ERedeemCodeFailureReason FailureReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "OnRedeemFriendCodeComplete");

	Params::URedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.FailureReason = FailureReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URedeemFriendCodeWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URedeemFriendCodeWindow_C::BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");

	Params::URedeemFriendCodeWindow_C_BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.ExecuteUbergraph_RedeemFriendCodeWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSuccess                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERedeemCodeFailureReasonK2Node_Event_FailureReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedeemFriendCodeWindow_C::ExecuteUbergraph_RedeemFriendCodeWindow(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bSuccess, enum class ERedeemCodeFailureReason K2Node_Event_FailureReason, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, bool CallFunc_IsVisible_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "ExecuteUbergraph_RedeemFriendCodeWindow");

	Params::URedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_bSuccess = K2Node_Event_bSuccess;
	Parms.K2Node_Event_FailureReason = K2Node_Event_FailureReason;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


