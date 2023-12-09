#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ResourceFormattingBlueprintLibrary.ResourceFormattingBlueprintLibrary_C
class UResourceFormattingBlueprintLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UResourceFormattingBlueprintLibrary_C* GetDefaultObj();

	void UpdateResouceCountOnTextblock(class UCommonNumericTextBlock* TextBlock, int32 ResourceCount, class UObject* __WorldContext, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_GetTargetValue_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void MakeBrushFromResource(enum class EFortResourceType Resource, int32 Width, int32 Height, class UObject* __WorldContext, struct FSlateBrush* Brush, bool* IsValid, class UPaperSprite* Temp_object_Variable, class UPaperSprite* Temp_object_Variable_1, class UPaperSprite* Temp_object_Variable_2, class UPaperSprite* Temp_object_Variable_3, class UPaperSprite* Temp_object_Variable_4, class UPaperSprite* Temp_object_Variable_5, enum class EFortResourceType Temp_byte_Variable, class UPaperSprite* K2Node_Select_Default, const struct FSlateBrush& CallFunc_MakeBrushFromSprite_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


