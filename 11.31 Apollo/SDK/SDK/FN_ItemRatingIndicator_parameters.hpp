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
// Function ItemRatingIndicator.ItemRatingIndicator_C.HandleViewModelChanged
struct UItemRatingIndicator_C_HandleViewModelChanged_Params
{
public:
};

// 0x94 (0x94 - 0x0)
// Function ItemRatingIndicator.ItemRatingIndicator_C.ExecuteUbergraph_ItemRatingIndicator
struct UItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateBrush                           CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x8(0x88)(ConstParm)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
