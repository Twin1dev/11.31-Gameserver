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

// 0x60 (0x60 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.UpdateItemsForWidgets
struct UItemAttributesDetailWidget_C_UpdateItemsForWidgets_Params
{
public:
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue_1;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue_2;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContextWithSource_ReturnValue; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortDisplayAttribute>         CallFunc_GetUpgradeStats_ReturnValue;              // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFortDisplayAttribute>         CallFunc_GetTooltipStats_ReturnValue;              // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFortDisplayAttribute>         CallFunc_GetComparisonStats_ReturnValue;           // 0x50(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet
struct UItemAttributesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToCompareWithSet
struct UItemAttributesDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleShouldPreviewUpgradingItemChanged
struct UItemAttributesDetailWidget_C_HandleShouldPreviewUpgradingItemChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToDetailChangedBP
struct UItemAttributesDetailWidget_C_HandleItemToDetailChangedBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToCompareWithChangedBP
struct UItemAttributesDetailWidget_C_HandleItemToCompareWithChangedBP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.ExecuteUbergraph_ItemAttributesDetailWidget
struct UItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
