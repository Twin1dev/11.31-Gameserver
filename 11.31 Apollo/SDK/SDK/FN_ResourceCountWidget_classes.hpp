#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x308 - 0x230)
// WidgetBlueprintGeneratedClass ResourceCountWidget.ResourceCountWidget_C
class UResourceCountWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Background;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageResourceIcon;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               NumericTextCount;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortResourceType                 ResourceType;                                      // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_5599[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ResourceCount;                                     // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IconSize;                                          // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_559A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CanAffordTextColor;                                // 0x260(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           CanNotAffordTextColor;                             // 0x288(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UseBackgroundForAffordabilityFeedback;             // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_559B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CanNotAffordBackgroundColor;                       // 0x2B8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           CanAffordBackgroundColor;                          // 0x2E0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UResourceCountWidget_C* GetDefaultObj();

	void SetResourceCost(int32 ResourceCount, bool UseBackgroundForAffordabilityFeedback, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool Temp_bool_Variable_1, int32 CallFunc_GetResourceCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateColor& K2Node_Select_Default_1);
	void UpdateIcon(float CallFunc_Conv_IntToFloat_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable, const struct FSlateBrush& CallFunc_MakeBrushFromResource_Brush, bool CallFunc_MakeBrushFromResource_IsValid, const struct FSlateBrush& K2Node_SetFieldsInStruct_StructOut, const struct FSlateBrush& K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ResourceCountWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


