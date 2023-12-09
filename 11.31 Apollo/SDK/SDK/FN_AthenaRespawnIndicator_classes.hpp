#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x2E1 - 0x2B0)
// WidgetBlueprintGeneratedClass AthenaRespawnIndicator.AthenaRespawnIndicator_C
class UAthenaRespawnIndicator_C : public UAthenaRespawnBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Background;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_StatusText;                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Check;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        LivesIndicatorBox;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortNumericTextBlock*                 PlayerLivesText;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         CanRespawn;                                        // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaRespawnIndicator_C* GetDefaultObj();

	void ToggleRespawnState(bool CanRespawn);
	void SetVisibilty(bool Visible);
	void PreConstruct(bool IsDesignTime);
	void OnUpdateRespawnState(bool bEnabled);
	void OnUpdateLives(int32 Lives);
	void ExecuteUbergraph_AthenaRespawnIndicator(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_5, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_CustomEvent_canRespawn, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1, const struct FVector2D& K2Node_Select_Default_2, bool K2Node_CustomEvent_Visible, enum class ESlateVisibility K2Node_Select_Default_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default_4, bool K2Node_Event_IsDesignTime, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, bool K2Node_Event_bEnabled, const struct FLinearColor& K2Node_Select_Default_5, int32 K2Node_Event_Lives, bool CallFunc_IsVisible_ReturnValue);
};

}


