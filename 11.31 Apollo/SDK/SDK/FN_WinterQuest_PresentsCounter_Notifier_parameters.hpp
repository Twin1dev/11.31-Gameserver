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

// 0x10 (0x10 - 0x0)
// Function WinterQuest_PresentsCounter_Notifier.WinterQuest_PresentsCounter_Notifier_C.ShowPresentNotification
struct UWinterQuest_PresentsCounter_Notifier_C_ShowPresentNotification_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WinterQuest_PresentsCounter_Notifier.WinterQuest_PresentsCounter_Notifier_C.OnShowCountdown
struct UWinterQuest_PresentsCounter_Notifier_C_OnShowCountdown_Params
{
public:
	bool                                         bShowCountDown;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function WinterQuest_PresentsCounter_Notifier.WinterQuest_PresentsCounter_Notifier_C.Construct
struct UWinterQuest_PresentsCounter_Notifier_C_Construct_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function WinterQuest_PresentsCounter_Notifier.WinterQuest_PresentsCounter_Notifier_C.ExecuteUbergraph_WinterQuest_PresentsCounter_Notifier
struct UWinterQuest_PresentsCounter_Notifier_C_ExecuteUbergraph_WinterQuest_PresentsCounter_Notifier_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4240[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShowCountdown;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
