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

// 0x380 (0x878 - 0x4F8)
// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
class UOptionsMenu_C : public UFortOptionsMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         BackgroundBorder;                                  // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderBackground;                                  // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CloseIcon;                                         // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Message;                                           // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        MobileCloseButton;                                 // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayCloseButton;                                // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OverlayText;                                       // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            SavingLayer;                                       // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                  SettingsTabs;                                      // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     VideoSettingsAccept;                               // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     VideoSettingsCancel;                               // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedOption;                                    // 0x570(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Current_Tab;                                       // 0x574(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Accept_Input;                                      // 0x57C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Video_Tab_Selected;                                // 0x57D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Apply_Visible;                                     // 0x57E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6082[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class UFortOptionsTab*>               AllTabWidgets;                                     // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class UProgressModalWidget_C*                SavingModal;                                       // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                VideoTabClass;                                     // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AccountTabClass;                                   // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GamepadTabClass;                                   // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                InputTabClass;                                     // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LoadCount;                                         // 0x5B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6083[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSoftClassPtr<class UObject>                 TabGamePad;                                        // 0x5C0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabAccount;                                        // 0x5E8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabAccountV2;                                      // 0x610(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabVideoOptions;                                   // 0x638(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabVideoOptionsV2;                                 // 0x660(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabInputOptions;                                   // 0x688(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ToggleModeAction;                                  // 0x6B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ApplyAction;                                       // 0x6C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ResetToDefault;                                    // 0x6D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Back;                                              // 0x6E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	TSoftClassPtr<class UObject>                 TabInputOptionsV2;                                 // 0x6F0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                          ResetVideoOptionsTimer;                            // 0x718(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabAccessibilityOptions;                           // 0x720(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                AccessibilityTabClass;                             // 0x748(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabBrightnessOptions;                              // 0x750(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                BrightnessTabClass;                                // 0x778(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortTabButtonLabelInfo>       TabLabels;                                         // 0x780(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                          TabIds;                                            // 0x790(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastInlineDelegateProperty_            OnSettingsApplied;                                 // 0x7A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   ChoosePreset;                                      // 0x7B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TSoftClassPtr<class UUserWidget>             NewControllerSettingsTab;                          // 0x7C0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateBrush                           ControllerSensitivity;                             // 0x7E8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                ControllerSensitivityTabClass;                     // 0x870(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenu_C");
		return Clss;
	}

	void RequestTab(class FName Tab, bool CallFunc_SelectTabByID_ReturnValue);
	void CreateMobileBackButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void NotifyTabsOfActivationState(class UFortOptionsTab* ActivatedTab, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortOptionsTab* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void HandleResetAvailableActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, enum class EInputActionState K2Node_Select_Default);
	void Update_Header_Text_by_Tab_ID(class FName TabId, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void DoResetKBMToDefault(int32 Preset_To_Set);
	void UpdateAllOptionsTabs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortOptionsTab* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateBasedOnActiveWidget(class UObject* ActiveWidget, bool ShouldCenterOnTab, class UTabAccount_C* K2Node_DynamicCast_AsTab_Account, bool K2Node_DynamicCast_bSuccess, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess_2, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options, bool K2Node_DynamicCast_bSuccess_3, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue_2, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_2);
	void ApplySettings(class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void DoResetHUDOptionsToDefault();
	void DoResetGameOptionsToDefault(class UFortOptionsTab* Tab_To_Reset);
	void HandleTabGamepadConfigActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, enum class EInputActionState K2Node_Select_Default, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UTabGamePadConfig_v3_C* K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3, bool K2Node_DynamicCast_bSuccess);
	void HandleResetUnavailableActionHandlerStates(bool ShouldShowApply, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void HandleTabInputOptionsActionHandlerStates(class UTabInputOptions_C* TabInputOptionsActor);
	void HandleTabGameOptionsActionHandlerStates(int32 Active_Widget_Index, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void CenterOnActiveTab(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess);
	void SetBackground(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsInZone_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void AddTabs(class UClass* WidgetClass, class FText DisplayName, class FName NameId, const struct FSlateBrush& Icon, enum class ESettingTab Tab_Type, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortOptionsTab* CallFunc_Create_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void HandleCursorModeChanging(bool IsEnabled);
	void Handle_Toggle_Mode(class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UFortGamepadInputOptions* K2Node_DynamicCast_AsFort_Gamepad_Input_Options, bool K2Node_DynamicCast_bSuccess);
	void HandleBack();
	void Handle_Reset(bool* PassThrough);
	void Handle_Apply(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NeedsLanguageChangeConfirmation_ReturnValue, class UFortSettingsContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NeedsLanguageChangeConfirmation_ReturnValue_1, bool CallFunc_NeedsVideoChangeConfirmation_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Initialize(const struct FSlateBrush& TouchIcon, const struct FSlateBrush& MKB_Icon, const struct FSlateBrush& HUD_Icon, const struct FSlateBrush& Game_Normal, const struct FSlateBrush& Accounts_Normal, const struct FSlateBrush& Keys_Normal, const struct FSlateBrush& Controller_Normal, const struct FSlateBrush& Color_Normal, const struct FSlateBrush& Brightness_Normal, const struct FSlateBrush& Audio_Normal, const struct FSlateBrush& Video_Normal, bool CallFunc_ShowTouchAndMotionOptions_ReturnValue, bool CallFunc_ShowInputOptions_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_ShowNewControllerSenseOptions_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FName CallFunc_GetTabIdAtIndex_ReturnValue, bool Temp_bool_Variable, bool CallFunc_ShowBrightnessOptions_ReturnValue, bool CallFunc_ShowAccessibilityOptions_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_ShowAccountOptions_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_ShowControllerOptions_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_HasWidgets_ReturnValue, class FText K2Node_Select_Default, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText Temp_text_Variable_2, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_ShowInputOptions_ReturnValue_1, class FText Temp_text_Variable_3, bool CallFunc_ShowVideoOptions_ReturnValue);
	void OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426(class UClass* Loaded);
	void OnLoaded_56F757014AB176CE2140009FB54D0D23(class UClass* Loaded);
	void OnLoaded_488EE90943BFF7AA4DB2049A7D72238C(class UClass* Loaded);
	void OnLoaded_598823E641B8288CD371F0B50BE07C91(class UClass* Loaded);
	void OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD(class UClass* Loaded);
	void OnLoaded_EF0A182C49925D83A3E55080FA222F7D(class UClass* Loaded);
	void DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_865D48E84DB087F08A2C9797E6CB619E(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_505313CB4EC9E510DD07E6B544334958(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_BC062FC047B05F5EE0C6A09D64BFEB2A(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_826C59EC4C294BC872A644878B35A13B(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_B31FF5BD4C0772716F27509EA83B418E(enum class EFortDialogResult Result, class FName ResultName);
	void OnLoaded_8C5A9E8C42027607DE7ED0B10409E5CE(class UClass* Loaded);
	void Enable_Overlay_Input(bool Accept_Input, class FText Overlay_Text);
	void Enable_Overlay_Video(bool Accept_Input);
	void Disable_Overlay();
	void BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void Tab_Setting_Changed();
	void BP_OnActivated();
	void Disable_Overlay_Input();
	void Gamepad_Changed(bool Gamepad_Enabled);
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void HandleBenchmarkComplete();
	void BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleSettingsErrorMessageClosed();
	void OnHandleBack();
	void BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void Construct();
	void TabGameOptions_OnActiveWidgetChanged_Bind(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void HandleSettingsSaveComplete();
	void BP_OnDeactivated();
	void LoadTabClasses();
	void ResetVideoOptionsTimerDelegate();
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_20_OnTabSelected__DelegateSignature(class FName TabId);
	void ShowLangaugeConfirmation();
	void HandleTabGamePadActionsNeedBinds(TArray<class FText>& ScreenLabels);
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnInputsResetToDefault();
	void OnResetToDefault();
	void OnBack();
	void OnToggleMode();
	void OnApplySettings();
	void ExecuteUbergraph_OptionsMenu(int32 EntryPoint, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class EFortDialogResult K2Node_CustomEvent_Result_4, class FName K2Node_CustomEvent_ResultName_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable_1, enum class EFortDialogResult Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EFortDialogResult K2Node_CustomEvent_Result_3, class FName K2Node_CustomEvent_ResultName_3, class FName Temp_name_Variable_2, enum class EFortDialogResult Temp_byte_Variable_2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, enum class EFortDialogResult K2Node_CustomEvent_Result_2, class FName K2Node_CustomEvent_ResultName_2, class FName Temp_name_Variable_3, enum class EFortDialogResult Temp_byte_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, class UInputPresetConfirmationRotator_C* CallFunc_Create_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EFortDialogResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ResultName_1, class FName Temp_name_Variable_4, enum class EFortDialogResult Temp_byte_Variable_4, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable_5, enum class EFortDialogResult Temp_byte_Variable_5, bool K2Node_SwitchEnum_CmpSuccess, class UClass* K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab, bool K2Node_ClassDynamicCast_bSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool K2Node_CustomEvent_Accept_Input_1, class FText K2Node_CustomEvent_Overlay_Text, bool K2Node_CustomEvent_Accept_Input, class FText CallFunc_MakeLiteralText_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UTabVideoOptions_New_C* K2Node_DynamicCast_AsTab_Video_Options_New, bool K2Node_DynamicCast_bSuccess, enum class EFortDialogResult K2Node_CustomEvent_Result_5, class FName K2Node_CustomEvent_ResultName_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_CustomEvent_Gamepad_Enabled, class FName K2Node_ComponentBoundEvent_TabId_1, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class FName CallFunc_GetActiveTab_ReturnValue, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Handle_Reset_PassThrough, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Add_IntInt_ReturnValue, class UTabGamePadConfig_v3_C* K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3, bool K2Node_DynamicCast_bSuccess_3, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options, bool K2Node_DynamicCast_bSuccess_4, class UTabVideoOptions_C* K2Node_DynamicCast_AsTab_Video_Options, bool K2Node_DynamicCast_bSuccess_5, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess_6, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UClass* Temp_class_Variable_1, class UClass* K2Node_CustomEvent_Loaded_1, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab_1, bool K2Node_ClassDynamicCast_bSuccess_1, class UWidget* K2Node_CustomEvent_ActiveWidget, int32 K2Node_CustomEvent_ActiveWidgetIndex, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UClass* Temp_class_Variable_2, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab_2, bool K2Node_ClassDynamicCast_bSuccess_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_ShowVideoOptions_ReturnValue, bool CallFunc_ShowAccountOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_ShowControllerOptions_ReturnValue, bool CallFunc_ShowInputOptions_ReturnValue, class UClass* K2Node_CustomEvent_Loaded_2, class UClass* Temp_class_Variable_3, class UClass* K2Node_CustomEvent_Loaded_3, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab_3, bool K2Node_ClassDynamicCast_bSuccess_3, bool CallFunc_IsVisible_ReturnValue_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UClass* Temp_class_Variable_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab_4, bool K2Node_ClassDynamicCast_bSuccess_4, bool CallFunc_ShowAccessibilityOptions_ReturnValue, class UClass* K2Node_CustomEvent_Loaded_4, bool CallFunc_ShowBrightnessOptions_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId, class UClass* Temp_class_Variable_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab_5, bool K2Node_ClassDynamicCast_bSuccess_5, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, class UClass* K2Node_CustomEvent_Loaded_5, class UTabNewControllerSettings_C* K2Node_DynamicCast_AsTab_New_Controller_Settings, bool K2Node_DynamicCast_bSuccess_7, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab_1, bool K2Node_DynamicCast_bSuccess_8, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options_1, bool K2Node_DynamicCast_bSuccess_9, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue_1, class UTabGameOptionsHud_C* K2Node_DynamicCast_AsTab_Game_Options_Hud, bool K2Node_DynamicCast_bSuccess_10, class UWidget* CallFunc_GetActiveWidget_ReturnValue_2, class UTabGameOptionsMain_C* K2Node_DynamicCast_AsTab_Game_Options_Main, bool K2Node_DynamicCast_bSuccess_11, class UWidget* CallFunc_GetActiveWidget_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options_1, bool K2Node_DynamicCast_bSuccess_12, class UClass* Temp_class_Variable_6, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab_6, bool K2Node_ClassDynamicCast_bSuccess_6, class UClass* K2Node_CustomEvent_Loaded_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, enum class EInputActionState Temp_byte_Variable_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, enum class EInputActionState Temp_byte_Variable_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, TArray<class FText>& K2Node_CustomEvent_ScreenLabels, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool Temp_bool_Variable_3, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_2, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue_2, enum class EInputActionState K2Node_Select_Default, class UTabGamePadConfig_v3_C* K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3_1, bool K2Node_DynamicCast_bSuccess_13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class UFortHUDContext* CallFunc_GetContext_ReturnValue_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, bool CallFunc_IsInZone_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, bool CallFunc_ShowNewControllerSenseOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, TSoftClassPtr<class UObject> K2Node_Select_Default_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_2, TSoftClassPtr<class UObject> K2Node_Select_Default_2, TSoftClassPtr<class UObject> K2Node_Select_Default_3);
	void OnSettingsApplied__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
