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


// Function ErrorWindow.ErrorWindow_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()

struct FEventReply UErrorWindow_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "OnAnalogValueChanged");

	Params::UErrorWindow_C_OnAnalogValueChanged_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ErrorWindow.ErrorWindow_C.Initialize Close Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInputPriority_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UErrorWindow_C::Initialize_Close_Button(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetInputPriority_ReturnValue)
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "Initialize Close Button");

	Params::UErrorWindow_C_Initialize_Close_Button_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputPriority_ReturnValue = CallFunc_GetInputPriority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UErrorWindow_C::Construct()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "Construct");

	Params::UErrorWindow_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UErrorWindow_C::Destruct()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "Destruct");

	Params::UErrorWindow_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.OnBeginOutro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UErrorWindow_C::OnBeginOutro()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "OnBeginOutro");

	Params::UErrorWindow_C_OnBeginOutro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.OnBeginIntro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UErrorWindow_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "OnBeginIntro");

	Params::UErrorWindow_C_OnBeginIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UErrorWindow_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "BP_OnActivated");

	Params::UErrorWindow_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.HandleLlamaAnimFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UErrorWindow_C::HandleLlamaAnimFinish()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "HandleLlamaAnimFinish");

	Params::UErrorWindow_C_HandleLlamaAnimFinish_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.LlamaReverse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UErrorWindow_C::LlamaReverse()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "LlamaReverse");

	Params::UErrorWindow_C_LlamaReverse_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.HandleLlamaCycleFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UErrorWindow_C::HandleLlamaCycleFinished()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "HandleLlamaCycleFinished");

	Params::UErrorWindow_C_HandleLlamaCycleFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.PlayRandomAmbientLlama
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UErrorWindow_C::PlayRandomAmbientLlama()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "PlayRandomAmbientLlama");

	Params::UErrorWindow_C_PlayRandomAmbientLlama_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.StartAmbientLlamaSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UErrorWindow_C::StartAmbientLlamaSequence()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "StartAmbientLlamaSequence");

	Params::UErrorWindow_C_StartAmbientLlamaSequence_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.ResetLlamas
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UErrorWindow_C::ResetLlamas()
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "ResetLlamas");

	Params::UErrorWindow_C_ResetLlamas_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.OnOverrideCloseButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        OverrideText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UErrorWindow_C::OnOverrideCloseButtonText(class FText& OverrideText)
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "OnOverrideCloseButtonText");

	Params::UErrorWindow_C_OnOverrideCloseButtonText_Params Parms;

	Parms.OverrideText = OverrideText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// TArray<class UErrorLlama_C*>       K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UErrorLlama_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_OverrideText                                        (ConstParm)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UErrorWindow_C::ExecuteUbergraph_ErrorWindow(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class UErrorLlama_C*>& K2Node_MakeArray_Array, class UErrorLlama_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, float CallFunc_GetEndTime_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class FText K2Node_Event_OverrideText, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ErrorWindow_C", "ExecuteUbergraph_ErrorWindow");

	Params::UErrorWindow_C_ExecuteUbergraph_ErrorWindow_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue_1 = CallFunc_GetEndTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_GetEndTime_ReturnValue_2 = CallFunc_GetEndTime_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;
	Parms.K2Node_Event_OverrideText = K2Node_Event_OverrideText;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
