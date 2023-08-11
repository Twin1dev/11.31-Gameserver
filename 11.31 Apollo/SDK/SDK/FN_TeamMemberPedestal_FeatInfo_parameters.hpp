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
// Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.OnAnimationFinished
struct UTeamMemberPedestal_FeatInfo_C_OnAnimationFinished_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.OnFeatDefinitionSet
struct UTeamMemberPedestal_FeatInfo_C_OnFeatDefinitionSet_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.ExecuteUbergraph_TeamMemberPedestal_FeatInfo
struct UTeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidgetAnimation*                      K2Node_Event_Animation;                            // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
