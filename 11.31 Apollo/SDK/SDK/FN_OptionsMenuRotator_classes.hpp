#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x330 - 0x288)
// WidgetBlueprintGeneratedClass OptionsMenuRotator.OptionsMenuRotator_C
class UOptionsMenuRotator_C : public UFortOptionsMenuSetting
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonLeft;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonRight;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonTouchTooltip;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Right;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           MenuAnchorSettingDescription;                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RotatorText;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxContainer;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxLabel;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_Right;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               SpacerBottom;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_DisabledReason;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextRotator_C*                        TextRotator;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Tab_Tooltip_Text;                                  // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Hover_Text;                                        // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          Tooltip_Timer;                                     // 0x310(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        PreviousValue;                                     // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSizeMobile;                                    // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            AdvancedOptionsChangedHack;                        // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UOptionsMenuRotator_C* GetDefaultObj();

	void SetFontSize(class UCommonTextBlock* Text, int32 DefaultSize, int32 MobileSize, const struct FSlateFontInfo& TempFont, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, int32 K2Node_Select_Default);
	void Update_Display_Names(class UFortSettingsContext* CallFunc_GetContext_ReturnValue, TArray<class FText>& CallFunc_GetSettingDisplayNames_ReturnValue);
	void Hide_Tooltip();
	void Show_Tooltip();
	class UWidget* OnGetMenuContent(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTooltipMinusBasicMinusS_C* CallFunc_Create_ReturnValue);
	void HandlePawnSet(bool bRCPawn, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortRemoteControlledPawnAthena* K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena, bool K2Node_DynamicCast_bSuccess);
	void UpdateSize(const struct FVector2D& ToolTipSizeMobile, int32 HeightMobile, int32 HeightDefault, const struct FVector2D& LargeSize, const struct FVector2D& SmallSize, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_IsMobileGame_ReturnValue, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable_2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue_2, float K2Node_Select_Default, int32 K2Node_Select_Default_1, bool CallFunc_IsMobileGame_ReturnValue_3, bool CallFunc_IsMobileGame_ReturnValue_4, enum class ESlateVisibility K2Node_Select_Default_2, const struct FVector2D& K2Node_Select_Default_3, bool CallFunc_IsMobileGame_ReturnValue_5, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_6, const struct FVector2D& K2Node_Select_Default_4, enum class ESlateVisibility K2Node_Select_Default_5, bool Temp_bool_Variable_7, const struct FVector2D& K2Node_Select_Default_6, const struct FVector2D& K2Node_Select_Default_7);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void BndEvt__TextRotator_K2Node_ComponentBoundEvent_20_OnRotated__DelegateSignature(int32 Value);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent_22_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void UpdateSetting(class UCommonTextBlock* TooltipTextBlock);
	void CenterOnWidget();
	void SetControlsEnabled(bool bEnabled, class FText& DisabledReason);
	void ClearDisabledState();
	void ExecuteUbergraph_OptionsMenuRotator(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortSettingsContext* CallFunc_GetContext_ReturnValue, class UFortSettingsContext* CallFunc_GetContext_ReturnValue_1, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, int32 K2Node_ComponentBoundEvent_Value, class UObject* K2Node_Event_ListItemObject, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortSettingInfo* K2Node_DynamicCast_AsFort_Setting_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool K2Node_ComponentBoundEvent_bIsOpen, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue_1, class UCommonTextBlock* K2Node_Event_TooltipTextBlock, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_bEnabled, class FText K2Node_Event_DisabledReason, int32 CallFunc_GetRotatorSettingValue_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1);
	void AdvancedOptionsChangedHack__DelegateSignature(bool Enabled);
};

}


