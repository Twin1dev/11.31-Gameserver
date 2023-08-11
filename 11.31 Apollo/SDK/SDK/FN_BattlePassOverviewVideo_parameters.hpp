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
// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.BP_OnActivated
struct UBattlePassOverviewVideo_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.BP_OnDeactivated
struct UBattlePassOverviewVideo_C_BP_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.MediaOpened
struct UBattlePassOverviewVideo_C_MediaOpened_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.PreConstruct
struct UBattlePassOverviewVideo_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.ExecuteUbergraph_BattlePassOverviewVideo
struct UBattlePassOverviewVideo_C_ExecuteUbergraph_BattlePassOverviewVideo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_618D[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
