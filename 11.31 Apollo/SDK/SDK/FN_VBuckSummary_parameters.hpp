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
// Function VBuckSummary.VBuckSummary_C.Construct
struct UVBuckSummary_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VBuckSummary.VBuckSummary_C.OnSetSummary
struct UVBuckSummary_C_OnSetSummary_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VBuckSummary.VBuckSummary_C.ExecuteUbergraph_VBuckSummary
struct UVBuckSummary_C_ExecuteUbergraph_VBuckSummary_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_640B[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
