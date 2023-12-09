#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C.OnInitializeRarityWithSeries
struct UAthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithSeries_Params
{
public:
	class UFortItemSeriesDefinition*             SeriesData;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C.OnInitializeRarityWithoutSeries
struct UAthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithoutSeries_Params
{
public:
	struct FFortRarityItemData                   RarityData;                                        // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xA0 (0xA0 - 0x0)
// Function AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C.ExecuteUbergraph_AthenaRewardItemTypeRarityTag
struct UAthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_556A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemSeriesDefinition*             K2Node_Event_SeriesData;                           // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRarityItemData                   K2Node_Event_RarityData;                           // 0x10(0x80)(None)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


