#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaStandaloneTimer.AthenaStandaloneTimer_C
// (None)

class UClass* UAthenaStandaloneTimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaStandaloneTimer_C");

	return Clss;
}


// AthenaStandaloneTimer_C AthenaStandaloneTimer.Default__AthenaStandaloneTimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaStandaloneTimer_C* UAthenaStandaloneTimer_C::GetDefaultObj()
{
	static class UAthenaStandaloneTimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaStandaloneTimer_C*>(UAthenaStandaloneTimer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaStandaloneTimer.AthenaStandaloneTimer_C.IsTextStyleValid
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        DisplayTextStyle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ZeroConstructor, ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAthenaStandaloneTimer_C::IsTextStyleValid(class FName& DisplayTextStyle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStandaloneTimer_C", "IsTextStyleValid");

	Params::UAthenaStandaloneTimer_C_IsTextStyleValid_Params Parms{};

	Parms.DisplayTextStyle = DisplayTextStyle;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaStandaloneTimer.AthenaStandaloneTimer_C.OnMinigameEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaStandaloneTimer_C::OnMinigameEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStandaloneTimer_C", "OnMinigameEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaStandaloneTimer.AthenaStandaloneTimer_C.UpdateDisplay
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        DisplayText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        DisplayTextStyle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStandaloneTimer_C::UpdateDisplay(class FText& DisplayText, class FName& DisplayTextStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStandaloneTimer_C", "UpdateDisplay");

	Params::UAthenaStandaloneTimer_C_UpdateDisplay_Params Parms{};

	Parms.DisplayText = DisplayText;
	Parms.DisplayTextStyle = DisplayTextStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStandaloneTimer.AthenaStandaloneTimer_C.OnMinigameStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaStandaloneTimer_C::OnMinigameStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStandaloneTimer_C", "OnMinigameStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaStandaloneTimer.AthenaStandaloneTimer_C.ExecuteUbergraph_AthenaStandaloneTimer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_DisplayText                                         (ConstParm)
// class FName                        K2Node_Event_DisplayTextStyle                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UAthenaStandaloneTimer_C::ExecuteUbergraph_AthenaStandaloneTimer(int32 EntryPoint, class FText K2Node_Event_DisplayText, class FName K2Node_Event_DisplayTextStyle, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool Temp_bool_Variable, class FName K2Node_Select_Default, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStandaloneTimer_C", "ExecuteUbergraph_AthenaStandaloneTimer");

	Params::UAthenaStandaloneTimer_C_ExecuteUbergraph_AthenaStandaloneTimer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DisplayText = K2Node_Event_DisplayText;
	Parms.K2Node_Event_DisplayTextStyle = K2Node_Event_DisplayTextStyle;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


