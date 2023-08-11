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


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.OnChallengeSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsComplete                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsLocked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeImageGrid_Button_C::OnChallengeSet(bool bIsComplete, bool bIsLocked)
{
	static auto Func = Class->GetFunction("ChallengeImageGrid_Button_C", "OnChallengeSet");

	Params::UChallengeImageGrid_Button_C_OnChallengeSet_Params Parms;

	Parms.bIsComplete = bIsComplete;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeImageGrid_Button_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("ChallengeImageGrid_Button_C", "BP_OnHovered");

	Params::UChallengeImageGrid_Button_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeImageGrid_Button_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("ChallengeImageGrid_Button_C", "BP_OnUnhovered");

	Params::UChallengeImageGrid_Button_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.TransitionFromLockedToOwnedState
// (Event, Public, BlueprintEvent)
// Parameters:

void UChallengeImageGrid_Button_C::TransitionFromLockedToOwnedState()
{
	static auto Func = Class->GetFunction("ChallengeImageGrid_Button_C", "TransitionFromLockedToOwnedState");

	Params::UChallengeImageGrid_Button_C_TransitionFromLockedToOwnedState_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.TransitionFromOwnedToCompletedState
// (Event, Public, BlueprintEvent)
// Parameters:

void UChallengeImageGrid_Button_C::TransitionFromOwnedToCompletedState()
{
	static auto Func = Class->GetFunction("ChallengeImageGrid_Button_C", "TransitionFromOwnedToCompletedState");

	Params::UChallengeImageGrid_Button_C_TransitionFromOwnedToCompletedState_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChallengeImageGrid_Button_C::Construct()
{
	static auto Func = Class->GetFunction("ChallengeImageGrid_Button_C", "Construct");

	Params::UChallengeImageGrid_Button_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.SetupLockedToOwnState
// (Event, Public, BlueprintEvent)
// Parameters:

void UChallengeImageGrid_Button_C::SetupLockedToOwnState()
{
	static auto Func = Class->GetFunction("ChallengeImageGrid_Button_C", "SetupLockedToOwnState");

	Params::UChallengeImageGrid_Button_C_SetupLockedToOwnState_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.SetupGridLocationText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UChallengeImageGrid_Button_C::SetupGridLocationText()
{
	static auto Func = Class->GetFunction("ChallengeImageGrid_Button_C", "SetupGridLocationText");

	Params::UChallengeImageGrid_Button_C_SetupGridLocationText_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.ExecuteUbergraph_ChallengeImageGrid_Button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsComplete                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsLocked                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeImageGrid_Button_C::ExecuteUbergraph_ChallengeImageGrid_Button(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_bIsComplete, bool K2Node_Event_bIsLocked, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5)
{
	static auto Func = Class->GetFunction("ChallengeImageGrid_Button_C", "ExecuteUbergraph_ChallengeImageGrid_Button");

	Params::UChallengeImageGrid_Button_C_ExecuteUbergraph_ChallengeImageGrid_Button_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_bIsComplete = K2Node_Event_bIsComplete;
	Parms.K2Node_Event_bIsLocked = K2Node_Event_bIsLocked;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
