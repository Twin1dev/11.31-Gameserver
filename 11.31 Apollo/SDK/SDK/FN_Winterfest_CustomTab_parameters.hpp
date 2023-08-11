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
// Function Winterfest_CustomTab.Winterfest_CustomTab_C.PlayHoverAnimBackward
struct UWinterfest_CustomTab_C_PlayHoverAnimBackward_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Winterfest_CustomTab.Winterfest_CustomTab_C.PlayHoverAnimForward
struct UWinterfest_CustomTab_C_PlayHoverAnimForward_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Winterfest_CustomTab.Winterfest_CustomTab_C.Construct
struct UWinterfest_CustomTab_C_Construct_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function Winterfest_CustomTab.Winterfest_CustomTab_C.ExecuteUbergraph_Winterfest_CustomTab
struct UWinterfest_CustomTab_C_ExecuteUbergraph_Winterfest_CustomTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
