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


// Function PunchCard.PunchCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPunchCard_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("PunchCard_C", "PreConstruct");

	Params::UPunchCard_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCard.PunchCard_C.RunIntroAnim
// (Event, Public, BlueprintEvent)
// Parameters:

void UPunchCard_C::RunIntroAnim()
{
	static auto Func = Class->GetFunction("PunchCard_C", "RunIntroAnim");

	Params::UPunchCard_C_RunIntroAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCard.PunchCard_C.MedalFInishedPlacing
// (Event, Public, BlueprintEvent)
// Parameters:

void UPunchCard_C::MedalFInishedPlacing()
{
	static auto Func = Class->GetFunction("PunchCard_C", "MedalFInishedPlacing");

	Params::UPunchCard_C_MedalFInishedPlacing_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCard.PunchCard_C.ShowWidget
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPunchCard_C::ShowWidget()
{
	static auto Func = Class->GetFunction("PunchCard_C", "ShowWidget");

	Params::UPunchCard_C_ShowWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCard.PunchCard_C.On Intro Done
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPunchCard_C::On_Intro_Done()
{
	static auto Func = Class->GetFunction("PunchCard_C", "On Intro Done");

	Params::UPunchCard_C_On_Intro_Done_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCard.PunchCard_C.FinishedPlacingMedals
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bPlayOutro                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPunchCard_C::FinishedPlacingMedals(bool bPlayOutro)
{
	static auto Func = Class->GetFunction("PunchCard_C", "FinishedPlacingMedals");

	Params::UPunchCard_C_FinishedPlacingMedals_Params Parms;

	Parms.bPlayOutro = bPlayOutro;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCard.PunchCard_C.On Outro Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPunchCard_C::On_Outro_Finished()
{
	static auto Func = Class->GetFunction("PunchCard_C", "On Outro Finished");

	Params::UPunchCard_C_On_Outro_Finished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCard.PunchCard_C.UpdateCardCompleted
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPunchCard_C::UpdateCardCompleted(bool bCompleted)
{
	static auto Func = Class->GetFunction("PunchCard_C", "UpdateCardCompleted");

	Params::UPunchCard_C_UpdateCardCompleted_Params Parms;

	Parms.bCompleted = bCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCard.PunchCard_C.SetSuperStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSuper                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPunchCard_C::SetSuperStyle(bool IsSuper)
{
	static auto Func = Class->GetFunction("PunchCard_C", "SetSuperStyle");

	Params::UPunchCard_C_SetSuperStyle_Params Parms;

	Parms.IsSuper = IsSuper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PunchCard.PunchCard_C.ExecuteUbergraph_PunchCard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPlayOutro                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isSuper                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPunchCard_C::ExecuteUbergraph_PunchCard(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, int32 Temp_int_Variable_5, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, int32 Temp_int_Variable_6, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_6, float Temp_float_Variable_7, bool K2Node_Event_IsDesignTime, int32 K2Node_Select_Default, float K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, float K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bPlayOutro, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_bCompleted, bool K2Node_CustomEvent_isSuper, class UClass* K2Node_Select_Default_5, float K2Node_Select_Default_6, int32 Temp_int_Variable_8, enum class ESlateVisibility K2Node_Select_Default_7)
{
	static auto Func = Class->GetFunction("PunchCard_C", "ExecuteUbergraph_PunchCard");

	Params::UPunchCard_C_ExecuteUbergraph_PunchCard_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_bPlayOutro = K2Node_Event_bPlayOutro;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_CustomEvent_isSuper = K2Node_CustomEvent_isSuper;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
