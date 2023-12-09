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

// 0x8 (0x8 - 0x0)
// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.BPSetup
struct UBattlePassScreenDetailRewardIcon_C_BPSetup_Params
{
public:
	class UFortItem*                             InReward;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.ExecuteUbergraph_BattlePassScreenDetailRewardIcon
struct UBattlePassScreenDetailRewardIcon_C_ExecuteUbergraph_BattlePassScreenDetailRewardIcon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6609[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             K2Node_Event_InReward;                             // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


