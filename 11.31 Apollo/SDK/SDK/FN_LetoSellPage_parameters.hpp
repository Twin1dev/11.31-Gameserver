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
// Function LetoSellPage.LetoSellPage_C.BP_OnActivated
struct ULetoSellPage_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LetoSellPage.LetoSellPage_C.BP_OnDeactivated
struct ULetoSellPage_C_BP_OnDeactivated_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function LetoSellPage.LetoSellPage_C.ExecuteUbergraph_LetoSellPage
struct ULetoSellPage_C_ExecuteUbergraph_LetoSellPage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B2C[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
