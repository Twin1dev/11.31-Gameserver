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
// Function BattlePAssTracker.BattlePassTracker_C.HandleButtonIn
struct UBattlePassTracker_C_HandleButtonIn_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BattlePAssTracker.BattlePassTracker_C.HandleInitialState
struct UBattlePassTracker_C_HandleInitialState_Params
{
public:
	class UBattlePassItemTracker_C*              K2Node_DynamicCast_AsBattle_Pass_Item_Tracker;     // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_431F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassItemTracker_C*              K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1;   // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4320[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassItemTracker_C*              K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2;   // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4321[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassItemTracker_C*              K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3;   // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
