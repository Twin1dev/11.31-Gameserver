#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C.SetIndex
struct IPlayerSurveyMultipleChoiceListItemWidgetInterface_C_SetIndex_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C.SetChoiceData
struct IPlayerSurveyMultipleChoiceListItemWidgetInterface_C_SetChoiceData_Params
{
public:
	struct FFortPlayerSurveyQuestionChoice       Value;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
