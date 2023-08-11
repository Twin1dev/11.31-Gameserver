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

// 0x1 (0x1 - 0x0)
// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnToggleConfirmation
struct UJoinablePartyActionMenu_C_OnToggleConfirmation_Params
{
public:
	bool                                         bIsVisible;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnOpened
struct UJoinablePartyActionMenu_C_OnOpened_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.ExecuteUbergraph_JoinablePartyActionMenu
struct UJoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsVisible;                           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5298[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
