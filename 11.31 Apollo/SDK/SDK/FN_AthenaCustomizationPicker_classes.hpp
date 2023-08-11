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

// 0x98 (0x470 - 0x3D8)
// WidgetBlueprintGeneratedClass AthenaCustomizationPicker.AthenaCustomizationPicker_C
class UAthenaCustomizationPicker_C : public UAthenaCustomizationPicker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Contract;                                          // 0x3E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Expand;                                            // 0x3E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UPanelButton_C*                        Button_TextSearch;                                 // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilteredTextEntryWidget_C*            EditableText_Search;                               // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      FortMobileImage_0;                                 // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_TextSearch;                                // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_FilterName;                                   // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        TextBlock_NoItemAvailable;                         // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_SearchBar;                             // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_DisplayItemAvailability;            // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnDisableSaveButton;                               // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            OnEnableSaveButton;                                // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            OnTextSearchSelectedChanged;                       // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAthenaCustomizationPickerTileButton_C* TileButton;                                        // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TextEntryTimer;                                    // 0x468(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationPicker_C");
		return Clss;
	}

	void NavigateDownFromSearch(enum class EUINavigation Navigation, class UWidget** NewParam, bool K2Node_SwitchEnum_CmpSuccess);
	void ResetTextSearchFilter();
	void HandleTextEntryTimer(class FText CallFunc_GetCurrentText_Text, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue);
	void HandleSearchTextFilterChanged(class FText Text, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class FText CallFunc_GetCurrentText_Text, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetEmptyText_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue);
	void GetTextFilterSelectedState(bool* bIsSelected, bool CallFunc_GetSelected_ReturnValue);
	void SetTextFilterSelectedState(bool bIsSelected, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool K2Node_Select_Default);
	void SetTextFilter(class FText InText, bool Clear, class FText CallFunc_GetEmptyText_ReturnValue);
	void OnNoItemsAvailableInFilter(class FText& EmptyDisplayText);
	void OnItemsAvailableInFilter();
	void OnSearchEnabled(bool bEnabled);
	void OnInitialized();
	void HandleTextChanged(class FText& Text);
	void HandleDifferentFilterSetBP();
	void BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaCustomizationPicker(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetQualifiedFilterDisplayName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_Event_EmptyDisplayText, bool K2Node_Event_bEnabled, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_CustomEvent_Text, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void OnTextSearchSelectedChanged__DelegateSignature(bool bIsSelected);
	void OnEnableSaveButton__DelegateSignature();
	void OnDisableSaveButton__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
