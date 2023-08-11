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

// 0x8 (0x8 - 0x0)
// Function SettingsListEntry_Action.SettingsListEntry_Action_C.GetPrimaryGamepadFocusWidget
struct USettingsListEntry_Action_C_GetPrimaryGamepadFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnSettingAssigned
struct USettingsListEntry_Action_C_OnSettingAssigned_Params
{
public:
	class FText                                  ActionText;                                        // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnMouseEnter
struct USettingsListEntry_Action_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnMouseLeave
struct USettingsListEntry_Action_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x158 (0x158 - 0x0)
// Function SettingsListEntry_Action.SettingsListEntry_Action_C.ExecuteUbergraph_SettingsListEntry_Action
struct USettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6322[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x8(0x70)(ConstParm)
	class FText                                  K2Node_Event_ActionText;                           // 0x78(0x18)(ConstParm)
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6323[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x9C(0x38)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_6324[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0xD8(0x70)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
