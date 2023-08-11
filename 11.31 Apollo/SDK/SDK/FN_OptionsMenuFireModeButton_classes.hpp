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

// 0xF8 (0x380 - 0x288)
// WidgetBlueprintGeneratedClass OptionsMenuFireModeButton.OptionsMenuFireModeButton_C
class UOptionsMenuFireModeButton_C : public UFortOptionsMenuSetting
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonTouchTooltip;                                // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ChangeFireModeButton;                              // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ChangeFireModeTitle;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Right;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           MenuAnchorSettingDescription;                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxLabel;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_Bottom;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_Right;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        FontSizeMobile;                                    // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B79[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Hover_Text;                                        // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                             ToolTipSizeMobile;                                 // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HeightDefault;                                     // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HeightMobile;                                      // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TooltipTimer;                                      // 0x300(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                  AutoFireText;                                      // 0x308(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  TapToShootText;                                    // 0x320(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DedicatedButtonText;                               // 0x338(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CustomText;                                        // 0x350(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  _3DTouchText;                                      // 0x368(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenuFireModeButton_C");
		return Clss;
	}

	void HandleWidgetDeactivated(class UCommonActivatablePanel* ActivatableWidget);
	void SetFireModeButtonText(class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, const struct FFireModeData& CallFunc_GetFireModeData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	class UWidget* On_MenuAnchorSettingDescription_GetMenuContent_0(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTooltip_Basic_S_C* CallFunc_Create_ReturnValue);
	void Hide_Tooltip();
	void SetToolTipSize(const struct FVector2D& DefaultSize, const struct FVector2D& MobileSize, bool CallFunc_IsMobileGame_ReturnValue, bool Temp_bool_Variable, const struct FVector2D& K2Node_Select_Default);
	void ShowTooltip();
	void SetFontSize(class UCommonTextBlock* Text, int32 DefaultSize, int32 MobileSize, const struct FSlateFontInfo& TempFont, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, int32 K2Node_Select_Default);
	void UpdateSize(const struct FVector2D& LargeSize, const struct FVector2D& SmallSize, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool CallFunc_IsBROnly_ReturnValue, const struct FVector2D& K2Node_Select_Default);
	void OnComplete_A8B997BB40321F469E82A785FB369A27(class UUserWidget* UserWidget);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void CenterOnWidget();
	void BP_OnEntryReleased();
	void BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ChangeFireModeButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_OptionsMenuFireModeButton(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* Temp_object_Variable, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, class UHUDLayoutToolFireModePanel_C* K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bIsSelected, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, class UObject* K2Node_Event_ListItemObject, class UFortSettingInfo* K2Node_DynamicCast_AsFort_Setting_Info, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_bIsExpanded, class UUserWidget* K2Node_CustomEvent_UserWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsMobileGame_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_TextIsEmpty_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, float K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsUsingGamepad_ReturnValue, bool Temp_bool_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility K2Node_Select_Default_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
