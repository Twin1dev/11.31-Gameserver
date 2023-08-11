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
// Function FrontendChallengeInfoPanelEntry.FrontendChallengeInfoPanelEntry_C.OnChallengeInfoSet
struct UFrontendChallengeInfoPanelEntry_C_OnChallengeInfoSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontendChallengeInfoPanelEntry.FrontendChallengeInfoPanelEntry_C.OnLocalPlayerMissingAssistedChallenge
struct UFrontendChallengeInfoPanelEntry_C_OnLocalPlayerMissingAssistedChallenge_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function FrontendChallengeInfoPanelEntry.FrontendChallengeInfoPanelEntry_C.ExecuteUbergraph_FrontendChallengeInfoPanelEntry
struct UFrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E3E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
