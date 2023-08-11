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


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.GetCurrentText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        CallFunc_GetText_ReturnValue                                     ()

void UFilteredTextEntryWidget_C::GetCurrentText(class FText* Text, class FText CallFunc_GetText_ReturnValue)
{
	static auto Func = Class->GetFunction("FilteredTextEntryWidget_C", "GetCurrentText");

	Params::UFilteredTextEntryWidget_C_GetCurrentText_Params Parms;

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.HandleShowPrompt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CurrentText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilteredTextEntryWidget_C::HandleShowPrompt(class FText& CurrentText, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FilteredTextEntryWidget_C", "HandleShowPrompt");

	Params::UFilteredTextEntryWidget_C_HandleShowPrompt_Params Parms;

	Parms.CurrentText = CurrentText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.SetTextFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFilteredTextEntryWidget_C::SetTextFocus()
{
	static auto Func = Class->GetFunction("FilteredTextEntryWidget_C", "SetTextFocus");

	Params::UFilteredTextEntryWidget_C_SetTextFocus_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.UpdateConfiguration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bOverrideStyle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bHideValidation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETextJustify            TextJustification                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldShowTextPrompt                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        PromptDisplayText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                      TextStyle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilteredTextEntryWidget_C::UpdateConfiguration(bool bOverrideStyle, bool bHideValidation, enum class ETextJustify TextJustification, bool bShouldShowTextPrompt, class FText PromptDisplayText, class UClass* TextStyle, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_GetText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FilteredTextEntryWidget_C", "UpdateConfiguration");

	Params::UFilteredTextEntryWidget_C_UpdateConfiguration_Params Parms;

	Parms.bOverrideStyle = bOverrideStyle;
	Parms.bHideValidation = bHideValidation;
	Parms.TextJustification = TextJustification;
	Parms.bShouldShowTextPrompt = bShouldShowTextPrompt;
	Parms.PromptDisplayText = PromptDisplayText;
	Parms.TextStyle = TextStyle;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFilteredTextEntryWidget_C::Construct()
{
	static auto Func = Class->GetFunction("FilteredTextEntryWidget_C", "Construct");

	Params::UFilteredTextEntryWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnDirtyTextAttempted
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsBadText                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilteredTextEntryWidget_C::OnDirtyTextAttempted(bool bIsBadText)
{
	static auto Func = Class->GetFunction("FilteredTextEntryWidget_C", "OnDirtyTextAttempted");

	Params::UFilteredTextEntryWidget_C_OnDirtyTextAttempted_Params Parms;

	Parms.bIsBadText = bIsBadText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilteredTextEntryWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("FilteredTextEntryWidget_C", "PreConstruct");

	Params::UFilteredTextEntryWidget_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFilteredTextEntryWidget_C::BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static auto Func = Class->GetFunction("FilteredTextEntryWidget_C", "BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UFilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms;

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.ExecuteUbergraph_FilteredTextEntryWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsBadText                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)

void UFilteredTextEntryWidget_C::ExecuteUbergraph_FilteredTextEntryWidget(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_bIsBadText, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, class FText K2Node_ComponentBoundEvent_Text)
{
	static auto Func = Class->GetFunction("FilteredTextEntryWidget_C", "ExecuteUbergraph_FilteredTextEntryWidget");

	Params::UFilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_bIsBadText = K2Node_Event_bIsBadText;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnTextChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UFilteredTextEntryWidget_C::OnTextChanged__DelegateSignature(class FText Text)
{
	static auto Func = Class->GetFunction("FilteredTextEntryWidget_C", "OnTextChanged__DelegateSignature");

	Params::UFilteredTextEntryWidget_C_OnTextChanged__DelegateSignature_Params Parms;

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
