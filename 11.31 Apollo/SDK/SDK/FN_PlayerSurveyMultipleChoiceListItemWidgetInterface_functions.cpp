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


// Function PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPlayerSurveyMultipleChoiceListItemWidgetInterface_C::SetIndex(int32 Value)
{
	static auto Func = Class->GetFunction("PlayerSurveyMultipleChoiceListItemWidgetInterface_C", "SetIndex");

	Params::IPlayerSurveyMultipleChoiceListItemWidgetInterface_C_SetIndex_Params Parms;

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C.SetChoiceData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerSurveyQuestionChoiceValue                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void IPlayerSurveyMultipleChoiceListItemWidgetInterface_C::SetChoiceData(const struct FFortPlayerSurveyQuestionChoice& Value)
{
	static auto Func = Class->GetFunction("PlayerSurveyMultipleChoiceListItemWidgetInterface_C", "SetChoiceData");

	Params::IPlayerSurveyMultipleChoiceListItemWidgetInterface_C_SetChoiceData_Params Parms;

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
