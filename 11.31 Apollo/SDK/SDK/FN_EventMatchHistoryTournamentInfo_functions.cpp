#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EventMatchHistoryTournamentInfo.EventMatchHistoryTournamentInfo_C
// (None)

class UClass* UEventMatchHistoryTournamentInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventMatchHistoryTournamentInfo_C");

	return Clss;
}


// EventMatchHistoryTournamentInfo_C EventMatchHistoryTournamentInfo.Default__EventMatchHistoryTournamentInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventMatchHistoryTournamentInfo_C* UEventMatchHistoryTournamentInfo_C::GetDefaultObj()
{
	static class UEventMatchHistoryTournamentInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventMatchHistoryTournamentInfo_C*>(UEventMatchHistoryTournamentInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventMatchHistoryTournamentInfo.EventMatchHistoryTournamentInfo_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventMatchHistoryTournamentInfo_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventMatchHistoryTournamentInfo_C", "RefreshDataBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventMatchHistoryTournamentInfo.EventMatchHistoryTournamentInfo_C.ExecuteUbergraph_EventMatchHistoryTournamentInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWindowRoundDisplayString_ReturnValue                 (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UEventMatchHistoryTournamentInfo_C::ExecuteUbergraph_EventMatchHistoryTournamentInfo(int32 EntryPoint, class FText CallFunc_GetWindowRoundDisplayString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventMatchHistoryTournamentInfo_C", "ExecuteUbergraph_EventMatchHistoryTournamentInfo");

	Params::UEventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWindowRoundDisplayString_ReturnValue = CallFunc_GetWindowRoundDisplayString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


