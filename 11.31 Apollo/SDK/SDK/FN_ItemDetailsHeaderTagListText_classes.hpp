#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2C0 - 0x2B0)
// WidgetBlueprintGeneratedClass ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C
class UItemDetailsHeaderTagListText_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      TagListTextBlock;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemDetailsHeaderTagListText_C* GetDefaultObj();

	void FormatItemDisplayTags(TArray<class FText>& TagTexts, class FText* FormatedText, class FText Result, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Array_Get_Item, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_TextIsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentItemToCompareWithSet();
	void ExecuteUbergraph_ItemDetailsHeaderTagListText(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FText>& CallFunc_GetUserFriendlyTags_ReturnValue, class FText CallFunc_FormatItemDisplayTags_FormatedText, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityDataForItemDef_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsSchematicOrCraftedWeapon_ReturnValue);
};

}


