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
// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToDetailSet
struct UItemDetailsHeaderRarityTypeText_C_HandlePostDifferentItemToDetailSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToCompareWithSet
struct UItemDetailsHeaderRarityTypeText_C_HandlePostDifferentItemToCompareWithSet_Params
{
public:
};

// 0x1A8 (0x1A8 - 0x0)
// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.ExecuteUbergraph_ItemDetailsHeaderRarityTypeText
struct UItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRarityItemData                   CallFunc_BPGetRarityDataForItemDef_ReturnValue;    // 0x10(0x80)()
	class UFortItemDefinition*                   CallFunc_GetSchematicCraftingResultBP_ReturnValue; // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             K2Node_DynamicCast_AsFort_Weapon_Item_Definition;  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xA8(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0xD0(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0xF8(0x28)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetItemTypeName_ReturnValue;              // 0x128(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x140(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x180(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x190(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
