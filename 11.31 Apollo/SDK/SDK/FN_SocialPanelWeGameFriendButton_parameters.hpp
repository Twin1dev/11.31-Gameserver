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
// Function SocialPanelWeGameFriendButton.SocialPanelWeGameFriendButton_C.BP_OnHovered
struct USocialPanelWeGameFriendButton_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialPanelWeGameFriendButton.SocialPanelWeGameFriendButton_C.BP_OnUnhovered
struct USocialPanelWeGameFriendButton_C_BP_OnUnhovered_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function SocialPanelWeGameFriendButton.SocialPanelWeGameFriendButton_C.ExecuteUbergraph_SocialPanelWeGameFriendButton
struct USocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F73[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
