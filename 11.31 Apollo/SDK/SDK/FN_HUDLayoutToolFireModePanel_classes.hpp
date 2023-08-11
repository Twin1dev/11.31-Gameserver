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

// 0xF0 (0x540 - 0x450)
// WidgetBlueprintGeneratedClass HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C
class UHUDLayoutToolFireModePanel_C : public UHUDLayoutToolFireModePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ScreenTutorial;                                    // 0x458(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnOpen;                                            // 0x460(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        _3DTouchBox;                                       // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCheckbox_C*                       _3DTouchCheckbox;                                  // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        AutofireBox;                                       // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCheckbox_C*                       AutofireCheckbox;                                  // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ClickBlocker;                                      // 0x488(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CustomButton;                                      // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              CustomOverlay;                                     // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        DedicatedButtonBox;                                // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCheckbox_C*                       DedicatedButtonCheckbox;                           // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     DismissDialogue;                                   // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFireModeSelectTile_C*                 FireMode_AutoFire;                                 // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFireModeSelectTile_C*                 FireMode_FireButton;                               // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFireModeSelectTile_C*                 FireMode_ForceTouch;                               // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFireModeSelectTile_C*                 FireMode_TapToShoot;                               // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ModeButtonSwitcher;                                // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PresetOverlay;                                     // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PresetsButton;                                     // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PreviewDescriptionText;                            // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       SelectionTypeSwitcher;                             // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TapAnywhereBox;                                    // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCheckbox_C*                       TapAnywhereCheckbox;                               // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextDescription;                                   // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     TutorialConfirm;                                   // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFireModeSelectTile_C*>         FireOptionTiles;                                   // 0x528(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class UFireModeSelectTile_C*                 CurSelectedTile;                                   // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUDLayoutToolFireModePanel_C");
		return Clss;
	}

	void HasSelectedCustomMode(bool* Value, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, enum class EFireModeType CallFunc_GetFireMode_FireMode, bool CallFunc_GetFireMode_bAutofireEnabled, bool CallFunc_GetFireMode_bForceTouchEnabled, bool CallFunc_GetFireMode_bTapToShootEnabled, bool CallFunc_GetFireMode_bAlwaysShowDedicatedButton, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void IsInCustomMode(bool* IsCustom, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void SetCustomFireMode(class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void SetCustomModeVisibilities(enum class ESlateVisibility Temp_byte_Variable, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsFireModeAvailable_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsFireModeAvailable_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue_2, bool CallFunc_IsFireModeAvailable_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, bool CallFunc_HasSelectedCustomMode_Value, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_3, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue_3, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue_4, bool CallFunc_IsFireModeAvailable_ReturnValue_3, enum class EFireModeType CallFunc_GetFireMode_FireMode, bool CallFunc_GetFireMode_bAutofireEnabled, bool CallFunc_GetFireMode_bForceTouchEnabled, bool CallFunc_GetFireMode_bTapToShootEnabled, bool CallFunc_GetFireMode_bAlwaysShowDedicatedButton, enum class ESlateVisibility K2Node_Select_Default_3);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void InitButtonBindings(TArray<class UHUDLayoutToolFireModeButton*>& ArrayOfFireModeButtons, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UHUDLayoutToolFireModeButton* CallFunc_Array_Get_Item, class UFireModeSelectTile_C* K2Node_DynamicCast_AsFire_Mode_Select_Tile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void HandleCurSelectedTile(class UFireModeSelectTile_C* Tile, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InitializeSelection();
	void PlayCurFocusedTileMovie(class UFireModeSelectTile_C* CurFocusedTile, class UFireModeSelectTile_C* NextPanelToPlay, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UHUDLayoutToolFireModeButton* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFireModeSelectTile_C* K2Node_DynamicCast_AsFire_Mode_Select_Tile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void HandleTileButtonFocused(class UFireModeSelectTile_C* Tile);
	void NewTileSelected(class UFireModeSelectTile_C* Tile);
	void SetOpenState(bool bNewOpenState);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_185_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__CustomButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PresetsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnFire_Mode_Changed(enum class EFireModeType NewFireMode);
	void BndEvt__AutofireCheckbox_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__TapAnywhereCheckbox_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__DedicatedButtonCheckbox_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__3DTouchCheckbox_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void UpdateSelectButtonVisibility();
	void DeselectTile(class UFireModeSelectTile_C* Tile);
	void ExecuteUbergraph_HUDLayoutToolFireModePanel(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFireModeSelectTile_C* K2Node_CustomEvent_Tile_2, class FText CallFunc_GetFireModeDescription_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFireModeSelectTile_C* K2Node_CustomEvent_Tile_1, bool K2Node_Event_bNewOpenState, TArray<class UHUDLayoutToolFireModeButton*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsInCustomMode_IsCustom, bool CallFunc_IsInCustomMode_IsCustom_1, bool Temp_bool_Variable_1, enum class EFireModeType K2Node_CustomEvent_NewFireMode, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsInCustomMode_IsCustom_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasSelectedCustomMode_Value, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, class UFireModeSelectTile_C* K2Node_CustomEvent_Tile, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
