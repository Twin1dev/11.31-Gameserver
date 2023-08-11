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
// Function GiftReceivedPrompt.GiftReceivedPrompt_C.BP_OnActivated
struct UGiftReceivedPrompt_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GiftReceivedPrompt.GiftReceivedPrompt_C.OnGiftInfoPopulated
struct UGiftReceivedPrompt_C_OnGiftInfoPopulated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GiftReceivedPrompt.GiftReceivedPrompt_C.OnCloseButtonClicked
struct UGiftReceivedPrompt_C_OnCloseButtonClicked_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function GiftReceivedPrompt.GiftReceivedPrompt_C.ExecuteUbergraph_GiftReceivedPrompt
struct UGiftReceivedPrompt_C_ExecuteUbergraph_GiftReceivedPrompt_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5161[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
