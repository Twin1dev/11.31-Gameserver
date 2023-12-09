#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShowdownPin.ShowdownPin_C
// (None)

class UClass* UShowdownPin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowdownPin_C");

	return Clss;
}


// ShowdownPin_C ShowdownPin.Default__ShowdownPin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShowdownPin_C* UShowdownPin_C::GetDefaultObj()
{
	static class UShowdownPin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowdownPin_C*>(UShowdownPin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShowdownPin.ShowdownPin_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortShowdownPinState   PinState                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownPinState   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortShowdownPinState   Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetScoreToDisplay_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UTextBlock*                  K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownPinState   CallFunc_GetEventPinState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownPinState   CallFunc_GetTournamentBestPinState_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownPinState   K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownPin_C::Refresh(enum class EFortShowdownPinState PinState, enum class EFortShowdownPinState Temp_byte_Variable, bool Temp_bool_Variable, enum class EFortShowdownPinState Temp_byte_Variable_1, int32 CallFunc_GetScoreToDisplay_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UTextBlock* K2Node_Select_Default, class UWidget* K2Node_Select_Default_1, enum class EFortShowdownPinState CallFunc_GetEventPinState_ReturnValue, enum class EFortShowdownPinState CallFunc_GetTournamentBestPinState_ReturnValue, enum class EFortShowdownPinState K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownPin_C", "Refresh");

	Params::UShowdownPin_C_Refresh_Params Parms{};

	Parms.PinState = PinState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetScoreToDisplay_ReturnValue = CallFunc_GetScoreToDisplay_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetEventPinState_ReturnValue = CallFunc_GetEventPinState_ReturnValue;
	Parms.CallFunc_GetTournamentBestPinState_ReturnValue = CallFunc_GetTournamentBestPinState_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownPin.ShowdownPin_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownPin_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownPin_C", "RefreshDataBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownPin.ShowdownPin_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShowdownPin_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownPin_C", "PreConstruct");

	Params::UShowdownPin_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownPin.ShowdownPin_C.EventSetTier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Score                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownPin_C::EventSetTier(int32 Score)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownPin_C", "EventSetTier");

	Params::UShowdownPin_C_EventSetTier_Params Parms{};

	Parms.Score = Score;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownPin.ShowdownPin_C.EventFixPts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Points                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownPin_C::EventFixPts(int32 Points)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownPin_C", "EventFixPts");

	Params::UShowdownPin_C_EventFixPts_Params Parms{};

	Parms.Points = Points;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownPin.ShowdownPin_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShowdownPin_C::EventColorize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownPin_C", "EventColorize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownPin.ShowdownPin_C.EventRevealAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShowdownPin_C::EventRevealAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownPin_C", "EventRevealAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownPin.ShowdownPin_C.ExecuteUbergraph_ShowdownPin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Score                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              K2Node_CustomEvent_Points                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTournamentPinUnlockScore_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownPin_C::ExecuteUbergraph_ShowdownPin(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable_3, float Temp_float_Variable, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Score, float CallFunc_Conv_IntToFloat_ReturnValue, int32 Temp_int_Variable_4, class FText CallFunc_Conv_IntToText_ReturnValue, int32 K2Node_CustomEvent_Points, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool Temp_bool_Variable_5, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Variable_5, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, int32 Temp_int_Variable_6, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool Temp_bool_Variable_6, int32 CallFunc_GetTournamentPinUnlockScore_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 K2Node_Select_Default_2, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, int32 K2Node_Select_Default_3, bool CallFunc_Less_FloatFloat_ReturnValue_2, int32 K2Node_Select_Default_4, int32 K2Node_Select_Default_5, enum class ESlateVisibility K2Node_Select_Default_6, class UMaterialInterface* K2Node_Select_Default_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownPin_C", "ExecuteUbergraph_ShowdownPin");

	Params::UShowdownPin_C_ExecuteUbergraph_ShowdownPin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Score = K2Node_CustomEvent_Score;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_CustomEvent_Points = K2Node_CustomEvent_Points;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_GetStartTime_ReturnValue = CallFunc_GetStartTime_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue_1 = CallFunc_PauseAnimation_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_GetTournamentPinUnlockScore_ReturnValue = CallFunc_GetTournamentPinUnlockScore_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;

	UObject::ProcessEvent(Func, &Parms);

}

}


