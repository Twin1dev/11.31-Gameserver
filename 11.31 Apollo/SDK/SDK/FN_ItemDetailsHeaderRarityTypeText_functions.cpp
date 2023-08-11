#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemDetailsHeaderRarityTypeText_C::HandlePostDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("ItemDetailsHeaderRarityTypeText_C", "HandlePostDifferentItemToDetailSet");

	Params::UItemDetailsHeaderRarityTypeText_C_HandlePostDifferentItemToDetailSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemDetailsHeaderRarityTypeText_C::HandlePostDifferentItemToCompareWithSet()
{
	static auto Func = Class->GetFunction("ItemDetailsHeaderRarityTypeText_C", "HandlePostDifferentItemToCompareWithSet");

	Params::UItemDetailsHeaderRarityTypeText_C_HandlePostDifferentItemToCompareWithSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.ExecuteUbergraph_ItemDetailsHeaderRarityTypeText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityDataForItemDef_ReturnValue                   ()
// class UFortItemDefinition*         CallFunc_GetSchematicCraftingResultBP_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   K2Node_DynamicCast_AsFort_Weapon_Item_Definition                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetItemTypeName_ReturnValue                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UItemDetailsHeaderRarityTypeText_C::ExecuteUbergraph_ItemDetailsHeaderRarityTypeText(int32 EntryPoint, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityDataForItemDef_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, class UFortWeaponItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetItemTypeName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemDetailsHeaderRarityTypeText_C", "ExecuteUbergraph_ItemDetailsHeaderRarityTypeText");

	Params::UItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_BPGetRarityDataForItemDef_ReturnValue = CallFunc_BPGetRarityDataForItemDef_ReturnValue;
	Parms.CallFunc_GetSchematicCraftingResultBP_ReturnValue = CallFunc_GetSchematicCraftingResultBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weapon_Item_Definition = K2Node_DynamicCast_AsFort_Weapon_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemTypeName_ReturnValue = CallFunc_GetItemTypeName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
