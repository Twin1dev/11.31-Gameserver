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

// 0x20 (0x20 - 0x0)
// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateTextStyle
struct UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateTextStyle_Params
{
public:
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextStyle*                      CallFunc_GetCurrentTextStyle_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetColor_OutColor;                        // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateCheckBox
struct UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateCheckBox_Params
{
public:
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.MakeChoiceIndexText
struct UPlayerSurveyMultipleChoiceStandardListItem_C_MakeChoiceIndexText_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5310[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Text;                                              // 0x8(0x18)(Parm, OutParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5311[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x68(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x78(0x18)()
};

// 0x18 (0x18 - 0x0)
// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateChoiceIndexText
struct UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateChoiceIndexText_Params
{
public:
	class FText                                  CallFunc_MakeChoiceIndexText_Text;                 // 0x0(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateChoiceText
struct UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateChoiceText_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.Construct
struct UPlayerSurveyMultipleChoiceStandardListItem_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.BP_OnSelected
struct UPlayerSurveyMultipleChoiceStandardListItem_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.BP_OnDeselected
struct UPlayerSurveyMultipleChoiceStandardListItem_C_BP_OnDeselected_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.SetChoiceData
struct UPlayerSurveyMultipleChoiceStandardListItem_C_SetChoiceData_Params
{
public:
	struct FFortPlayerSurveyQuestionChoice       Value;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.SetIndex
struct UPlayerSurveyMultipleChoiceStandardListItem_C_SetIndex_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.OnCurrentTextStyleChanged
struct UPlayerSurveyMultipleChoiceStandardListItem_C_OnCurrentTextStyleChanged_Params
{
public:
};

// 0x24 (0x24 - 0x0)
// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem
struct UPlayerSurveyMultipleChoiceStandardListItem_C_ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5312[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortPlayerSurveyQuestionChoice       K2Node_Event_Value_1;                              // 0x8(0x18)()
	int32                                        K2Node_Event_Value;                                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
