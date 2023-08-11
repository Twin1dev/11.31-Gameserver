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

// 0x18 (0x18 - 0x0)
// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.OnSettingAssigned
struct USettingsListEntry_ControllerButton_C_OnSettingAssigned_Params
{
public:
	class FText                                  ActionText;                                        // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.ExecuteUbergraph_SettingsListEntry_ControllerButton
struct USettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6325[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_Event_ActionText;                           // 0x8(0x18)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
