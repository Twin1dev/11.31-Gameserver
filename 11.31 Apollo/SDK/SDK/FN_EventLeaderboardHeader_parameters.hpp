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
// Function EventLeaderboardHeader.EventLeaderboardHeader_C.RefreshDataBP
struct UEventLeaderboardHeader_C_RefreshDataBP_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function EventLeaderboardHeader.EventLeaderboardHeader_C.ExecuteUbergraph_EventLeaderboardHeader
struct UEventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6547[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetWindowRoundDisplayString_ReturnValue;  // 0x8(0x18)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x20(0x28)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
