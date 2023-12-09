#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x4B8 - 0x448)
// WidgetBlueprintGeneratedClass HelpPanel.HelpPanel_C
class UHelpPanel_C : public UFortAthenaHelpPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                     CloseButton;                                       // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CloseIcon;                                         // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHelpEntryBodyWidget_C*                HelpEntryBodyWidget;                               // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HelpIcon;                                          // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        MobileCloseButton;                                 // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MobileCloseOverlay;                                // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextHeader;                                        // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortHelpItem*>                 TopLevelHelpItems;                                 // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FText                                  Header_Display_Text;                               // 0x4A0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UHelpPanel_C* GetDefaultObj();

	void Setup_Header();
	void SetSelectedItemByID(class FName SelectedItemID, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortHelpItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UFortHelpItem* CallFunc_GetItemWithID_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UnbindDelegates();
	TArray<class UObject*> HelpTreeView_GetChildrenForCategory(class UObject* Item, const TArray<class UFortHelpItem*>& HelpItems, class UFortHelpItem* K2Node_DynamicCast_AsFort_Help_Item, bool K2Node_DynamicCast_bSuccess, TArray<class UFortHelpItem*>& CallFunc_GetSubItems_ReturnValue);
	void UpdateDetails(class UFortHelpItem* SelectedHelpItem, enum class EFortHelpItemType SelectedHelpItemType, class UFortHelpItem* LocalHelpItem, bool CallFunc_IsValid_ReturnValue);
	void HandleTopHelpListChanged(TArray<class UFortHelpItem*>& InHelpItems, bool bExpandAll);
	void BindDelegates();
	void BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BP_OnActivated();
	void BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void Destruct();
	void Construct();
	void OnContextHelpChanged();
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_HelpPanel(int32 EntryPoint, bool CallFunc_IsUsingTouch_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortHelpItem* K2Node_DynamicCast_AsFort_Help_Item, bool K2Node_DynamicCast_bSuccess, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, TArray<class UFortHelpItem*>& CallFunc_GetTopLevelHelpItems_ActiveHelpEntries, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}


