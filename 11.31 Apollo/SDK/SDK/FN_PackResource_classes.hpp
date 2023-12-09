#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2B8 - 0x258)
// WidgetBlueprintGeneratedClass PackResource.PackResource_C
class UPackResource_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         Background;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ContentOverlay;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       CountWidgetSwitcher;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageResourceIcon;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               NumericTextCount;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ShorthandCount;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxContainer;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortResourceType                 ResourceType;                                      // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4F96[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ResourceCount;                                     // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ActiveResource;                                    // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             TouchStart;                                        // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        LargeIconOffset;                                   // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BottomTextOffset;                                  // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPackResource_C* GetDefaultObj();

	void ResourceCountNeedsUpdate(bool* NeedsUpdate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, float CallFunc_GetTotalMilliseconds_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FEventReply& K2Node_Select_Default);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, float CallFunc_GetTotalMilliseconds_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FEventReply& K2Node_Select_Default);
	void GetCountOpacity(struct FSlateColor* SlateColor, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetResourceItemMaxStackSize_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void RefreshLargerCountLayout(float CallFunc_Conv_IntToFloat_ReturnValue, const struct FSlateColor& CallFunc_GetCountOpacity_SlateColor, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetShorthandItemStackCount_ReturnValue);
	void RefreshSmallerCountLayout(const struct FSlateColor& CallFunc_GetCountOpacity_SlateColor);
	void Change_Material(class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Set_ResourceStyle(bool UseLargeIcon, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Multiply_FloatFloat_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FSlateBrush& CallFunc_MakeBrushFromResource_Brush, bool CallFunc_MakeBrushFromResource_IsValid, const struct FSlateBrush& CallFunc_MakeBrushFromResource_Brush_1, bool CallFunc_MakeBrushFromResource_IsValid_1);
	void TryUpdateCount(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue_1, int32 CallFunc_GetResourceCount_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void TryUpdateBackground(bool Local_IsResourceActive, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable_1, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable_2, class UFortResourceItemDefinition* CallFunc_GetCurrentResourceItemDefinition_ReturnValue, class UClass* Temp_class_Variable_2, class UClass* Temp_class_Variable_3, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UClass* K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1, class UClass* K2Node_Select_Default_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void UpdateType(enum class EFortResourceType ResourceType, const struct FSlateBrush& CallFunc_MakeBrushFromResource_Brush, bool CallFunc_MakeBrushFromResource_IsValid);
	void UpdateCount();
	void Construct();
	void On_Material_Change();
	void ExecuteUbergraph_PackResource(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
};

}


