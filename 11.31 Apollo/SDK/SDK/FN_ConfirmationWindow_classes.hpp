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

// 0x38 (0x608 - 0x5D0)
// WidgetBlueprintGeneratedClass ConfirmationWindow.ConfirmationWindow_C
class UConfirmationWindow_C : public UFortConfirmationWindow
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                CloseIcon;                                         // 0x5D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        MobileCloseButton;                                 // 0x5E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MobileCloseOverlay;                                // 0x5E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         TapToCloseZone;                                    // 0x5F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          ButtonIconColor;                                   // 0x5F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConfirmationWindow_C");
		return Clss;
	}

	void HandleConfigureDeclineButton(class UCommonButton* New_Button, class UIconTextButton_C* Icon_Text_Button, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, const struct FFortDialogDescription_NUI& CallFunc_GetConfirmationDescription_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 CallFunc_GetInputPriority_ReturnValue);
	void ConfigureConfirmationButton(class UCommonButton* Button, struct FConfirmationDialogAction& Action, bool bSimpleConfirm, class UIconTextButton_C* IconTextButton, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetInputPriority_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetInputAction_ReturnValue);
	void PlayShowSound(const struct FFortDialogDescription_NUI& CallFunc_GetConfirmationDescription_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	struct FEventReply TapToClose(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_PointerEvent_IsTouchEvent_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& K2Node_Select_Default);
	void SetupNonInteractiveContent();
	struct FDataTableRowHandle GetInputAction(class FName RowName, bool UseInputAction, bool Temp_bool_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& Temp_struct_Variable, const struct FDataTableRowHandle& K2Node_Select_Default);
	void Initialize();
	void Construct();
	void OnBeginOutro();
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ConfigureDeclineButton(class UCommonButton* Button);
	void BP_OnActivated();
	void ExecuteUbergraph_ConfirmationWindow(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FFortDialogDescription_NUI& CallFunc_GetConfirmationDescription_ReturnValue, class UCommonButton* K2Node_Event_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
