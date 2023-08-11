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


// Function TournamentPayoutModal.TournamentPayoutModal_C.EmptyFunction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTournamentPayoutModal_C::EmptyFunction(bool* Handled)
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "EmptyFunction");

	Params::UTournamentPayoutModal_C_EmptyFunction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.NotifyNoPayouts
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTournamentPayoutModal_C::NotifyNoPayouts()
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "NotifyNoPayouts");

	Params::UTournamentPayoutModal_C_NotifyNoPayouts_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentPayoutModal_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UTournamentPayoutModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventWindowId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      TournamentId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UTournamentPayoutModal_C::Init(const class FString& EventWindowId, const class FString& TournamentId)
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "Init");

	Params::UTournamentPayoutModal_C_Init_Params Parms;

	Parms.EventWindowId = EventWindowId;
	Parms.TournamentId = TournamentId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.EventIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTournamentPayoutModal_C::EventIntro()
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "EventIntro");

	Params::UTournamentPayoutModal_C_EventIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  TournamentDisplayInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UTournamentPayoutModal_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "EventColorize");

	Params::UTournamentPayoutModal_C_EventColorize_Params Parms;

	Parms.TournamentDisplayInfo = TournamentDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentPayoutModal_C::BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UTournamentPayoutModal_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTournamentPayoutModal_C::Construct()
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "Construct");

	Params::UTournamentPayoutModal_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.ExecuteUbergraph_TournamentPayoutModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventWindowId                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_TournamentId                                  (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_TournamentDisplayInfo                         ()
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentPayoutModal_C::ExecuteUbergraph_TournamentPayoutModal(int32 EntryPoint, bool CallFunc_IsUsingTouch_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, const class FString& K2Node_CustomEvent_EventWindowId, const class FString& K2Node_CustomEvent_TournamentId, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_TournamentDisplayInfo, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "ExecuteUbergraph_TournamentPayoutModal");

	Params::UTournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_CustomEvent_EventWindowId = K2Node_CustomEvent_EventWindowId;
	Parms.K2Node_CustomEvent_TournamentId = K2Node_CustomEvent_TournamentId;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_TournamentDisplayInfo = K2Node_CustomEvent_TournamentDisplayInfo;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.NoPayout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTournamentPayoutModal_C::NoPayout__DelegateSignature()
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "NoPayout__DelegateSignature");

	Params::UTournamentPayoutModal_C_NoPayout__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.CallEventBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTournamentPayoutModal_C::CallEventBack__DelegateSignature()
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "CallEventBack__DelegateSignature");

	Params::UTournamentPayoutModal_C_CallEventBack__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
