#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C
// (None)

class UClass* UAthenaViewStreamingReplayModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaViewStreamingReplayModal_C");

	return Clss;
}


// AthenaViewStreamingReplayModal_C AthenaViewStreamingReplayModal.Default__AthenaViewStreamingReplayModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaViewStreamingReplayModal_C* UAthenaViewStreamingReplayModal_C::GetDefaultObj()
{
	static class UAthenaViewStreamingReplayModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaViewStreamingReplayModal_C*>(UAthenaViewStreamingReplayModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaViewStreamingReplayModal_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaViewStreamingReplayModal_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UAthenaViewStreamingReplayModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C.BndEvt__GameSessionSearchText_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaViewStreamingReplayModal_C::BndEvt__GameSessionSearchText_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaViewStreamingReplayModal_C", "BndEvt__GameSessionSearchText_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature");

	Params::UAthenaViewStreamingReplayModal_C_BndEvt__GameSessionSearchText_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C.BndEvt__GameSessionSearchText_K2Node_ComponentBoundEvent_7_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaViewStreamingReplayModal_C::BndEvt__GameSessionSearchText_K2Node_ComponentBoundEvent_7_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaViewStreamingReplayModal_C", "BndEvt__GameSessionSearchText_K2Node_ComponentBoundEvent_7_OnEditableTextCommittedEvent__DelegateSignature");

	Params::UAthenaViewStreamingReplayModal_C_BndEvt__GameSessionSearchText_K2Node_ComponentBoundEvent_7_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaViewStreamingReplayModal_C::BndEvt__SearchButton_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaViewStreamingReplayModal_C", "BndEvt__SearchButton_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature");

	Params::UAthenaViewStreamingReplayModal_C_BndEvt__SearchButton_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C.ExecuteUbergraph_AthenaViewStreamingReplayModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidGameSessionId_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)

void UAthenaViewStreamingReplayModal_C::ExecuteUbergraph_AthenaViewStreamingReplayModal(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValidGameSessionId_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaViewStreamingReplayModal_C", "ExecuteUbergraph_AthenaViewStreamingReplayModal");

	Params::UAthenaViewStreamingReplayModal_C_ExecuteUbergraph_AthenaViewStreamingReplayModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValidGameSessionId_ReturnValue = CallFunc_IsValidGameSessionId_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


