#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x21 - 0x0)
// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.DoStartSurveyIntro
struct UPlayerSurveyDispatcher_C_DoStartSurveyIntro_Params
{
public:
	class UFortPlayerSurveyPanelBase*            Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UPlayerSurveyPanel_C*                  K2Node_DynamicCast_AsPlayer_Survey_Panel;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.DisplaySurveyWidget
struct UPlayerSurveyDispatcher_C_DisplaySurveyWidget_Params
{
public:
	class UFortPlayerSurveyPanelBase*            Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.StartSurveyIntro
struct UPlayerSurveyDispatcher_C_StartSurveyIntro_Params
{
public:
	class UFortPlayerSurveyPanelBase*            Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.HandleFirstActivation
struct UPlayerSurveyDispatcher_C_HandleFirstActivation_Params
{
public:
	class UCommonActivatablePanel*               Panel;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.ExecuteUbergraph_PlayerSurveyDispatcher
struct UPlayerSurveyDispatcher_C_ExecuteUbergraph_PlayerSurveyDispatcher_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatablePanel*               K2Node_CustomEvent_Panel;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPlayerSurveyPanelBase*            K2Node_DynamicCast_AsFort_Player_Survey_Panel_Base; // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPlayerSurveyPanelBase*            K2Node_Event_Widget;                               // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerSurveyPanelBase*            K2Node_Event_Widget_1;                             // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsActivated_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E58[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x44(0x10)(ZeroConstructor, NoDestructor)
};

}
}


