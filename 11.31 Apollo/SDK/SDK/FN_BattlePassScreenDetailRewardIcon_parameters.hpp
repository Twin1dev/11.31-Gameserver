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
// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.BPSetup
struct UBattlePassScreenDetailRewardIcon_C_BPSetup_Params
{
public:
	class UFortItem*                             InReward;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.BP_OnHovered
struct UBattlePassScreenDetailRewardIcon_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.BP_OnUnhovered
struct UBattlePassScreenDetailRewardIcon_C_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.OnSetupVariant
struct UBattlePassScreenDetailRewardIcon_C_OnSetupVariant_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.ExecuteUbergraph_BattlePassScreenDetailRewardIcon
struct UBattlePassScreenDetailRewardIcon_C_ExecuteUbergraph_BattlePassScreenDetailRewardIcon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E2C[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortItem*                             K2Node_Event_InReward;                             // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
