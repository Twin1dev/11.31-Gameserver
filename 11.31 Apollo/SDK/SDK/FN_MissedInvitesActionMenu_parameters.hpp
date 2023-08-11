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

// 0x2B8 (0x2B8 - 0x0)
// Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnKeyUp
struct UMissedInvitesActionMenu_C_OnKeyUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x128(0xB8)()
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x1E0(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_421B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x200(0xB8)()
};

// 0x0 (0x0 - 0x0)
// Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnOpened
struct UMissedInvitesActionMenu_C_OnOpened_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.ExecuteUbergraph_MissedInvitesActionMenu
struct UMissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_421C[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
