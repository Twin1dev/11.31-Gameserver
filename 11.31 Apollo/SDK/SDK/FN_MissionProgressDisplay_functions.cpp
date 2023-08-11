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


// Function MissionProgressDisplay.MissionProgressDisplay_C.StyleAsNormal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionProgressDisplay_C::StyleAsNormal()
{
	static auto Func = Class->GetFunction("MissionProgressDisplay_C", "StyleAsNormal");

	Params::UMissionProgressDisplay_C_StyleAsNormal_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionProgressDisplay.MissionProgressDisplay_C.StyleAsPrestige
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionProgressDisplay_C::StyleAsPrestige()
{
	static auto Func = Class->GetFunction("MissionProgressDisplay_C", "StyleAsPrestige");

	Params::UMissionProgressDisplay_C_StyleAsPrestige_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionProgressDisplay.MissionProgressDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionProgressDisplay_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("MissionProgressDisplay_C", "PreConstruct");

	Params::UMissionProgressDisplay_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionProgressDisplay.MissionProgressDisplay_C.SetPercentValueForMaterialNumber
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              PercentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionProgressDisplay_C::SetPercentValueForMaterialNumber(int32 PercentValue)
{
	static auto Func = Class->GetFunction("MissionProgressDisplay_C", "SetPercentValueForMaterialNumber");

	Params::UMissionProgressDisplay_C_SetPercentValueForMaterialNumber_Params Parms;

	Parms.PercentValue = PercentValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionProgressDisplay.MissionProgressDisplay_C.ExecuteUbergraph_MissionProgressDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PercentValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UMissionProgressDisplay_C::ExecuteUbergraph_MissionProgressDisplay(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 K2Node_Event_PercentValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionProgressDisplay_C", "ExecuteUbergraph_MissionProgressDisplay");

	Params::UMissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_1 = CallFunc_MakeLiteralFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_Event_PercentValue = K2Node_Event_PercentValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
