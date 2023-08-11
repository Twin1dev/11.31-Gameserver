#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xC08 - 0xBB8)
// WidgetBlueprintGeneratedClass AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C
class UAthenaCustomizationPickerTileButton_C : public UAthenaCustomizationPickerTileButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHover;                                           // 0xBC0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_item;                                       // 0xBC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                        Image_Equipped;                                    // 0xBD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              NullItemOverlay;                                   // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       RootWidgetSwitcher;                                // 0xBE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UnownedDampen;                                     // 0xBE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsSlottedSomewhere;                                // 0xBF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UMulticastInlineDelegateProperty_            PickedButtonHovered;                               // 0xBF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationPickerTileButton_C");
		return Clss;
	}

	void HandleEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, const struct FVector2D& K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Select_Default_1);
	void OnTileSizeOverrideCheck(enum class EFortItemCardSize SizeIn, enum class EFortItemCardSize* SizeOut, bool CallFunc_IsMobileGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void OnChangeOwnedState(bool bOwned);
	void OnEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot);
	void ExecuteUbergraph_AthenaCustomizationPickerTileButton(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UObject* K2Node_Event_ListItemObject, bool CallFunc_IsNullItem_Is_Null_Item, class UWidget* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_bOwned, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_bEquipped, bool K2Node_Event_bOnDifferentSlot, enum class ESlateVisibility K2Node_Select_Default_1);
	void PickedButtonHovered__DelegateSignature(class UWidgetSwitcher* WidgetSwitcher);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
