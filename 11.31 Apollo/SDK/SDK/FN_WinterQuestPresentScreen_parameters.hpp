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

// 0x0 (0x0 - 0x0)
// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.OnStartOpeningPresent
struct UWinterQuestPresentScreen_C_OnStartOpeningPresent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.OnStopOpeningPresent
struct UWinterQuestPresentScreen_C_OnStopOpeningPresent_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.OnUpdatePlatformType
struct UWinterQuestPresentScreen_C_OnUpdatePlatformType_Params
{
public:
	enum class ECommonPlatformType               PlatformType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.OnInputMethodChanged
struct UWinterQuestPresentScreen_C_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  NewMethod;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.OnUpdateShakePercentage
struct UWinterQuestPresentScreen_C_OnUpdateShakePercentage_Params
{
public:
	float                                        InPercentage;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.BP_OnActivated
struct UWinterQuestPresentScreen_C_BP_OnActivated_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.OnUpdateShakeRecharge
struct UWinterQuestPresentScreen_C_OnUpdateShakeRecharge_Params
{
public:
	float                                        InPercentage;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function WinterQuestPresentScreen.WinterQuestPresentScreen_C.ExecuteUbergraph_WinterQuestPresentScreen
struct UWinterQuestPresentScreen_C_ExecuteUbergraph_WinterQuestPresentScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_223D[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWinterQuest_ShakePrompt_C*            K2Node_DynamicCast_AsWinter_Quest_Shake_Prompt;    // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonPlatformType               K2Node_Event_PlatformType;                         // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_223E[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWinterQuest_OpenPrompt_C*             K2Node_DynamicCast_AsWinter_Quest_Open_Prompt;     // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECommonInputType                  K2Node_Event_NewMethod;                            // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_223F[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_Event_InPercentage_1;                       // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2240[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWinterQuest_ShakePrompt_C*            K2Node_DynamicCast_AsWinter_Quest_Shake_Prompt_1;  // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2241[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWinterQuest_OpenPrompt_C*             K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_1;   // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2242[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_Event_InPercentage;                         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
