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

// 0xB8 (0x4F0 - 0x438)
// WidgetBlueprintGeneratedClass GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C
class UGamepadCustomActionSelectorPanel_v3_C : public UFortGamePadCustomActionSelectorPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Clear;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_Clear;                                // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                       CommonListView_GamepadActions;                     // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                    FortRichTextBlock_Clear1;                          // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                    FortRichTextBlock_Clear2;                          // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget_Clear;                               // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuHeader_C*                  OptionsMenuHeader;                                 // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Back;                                              // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	UMulticastInlineDelegateProperty_            CustomActionSelected;                              // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UFortOptionsMenuInputData*>     CurrentInputData;                                  // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastInlineDelegateProperty_            CustomClosedUsingBack;                             // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            CustomClearButton;                                 // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FKey                                  KeyNone;                                           // 0x4C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Clear;                                             // 0x4E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GamepadCustomActionSelectorPanel_v3_C");
		return Clss;
	}

	void HandleClear(bool* PassThrough);
	void CreateCustomListItem(class FName ActionName, enum class EFortInputActionGroup InputActionGroup, class UGamepadKeyTextButton_C** ReturnItem, class FName ActionName_Local, enum class EFortInputActionGroup InputActionGroup_Local, class FName CustomPresetName_Local, class UGamepadKeyTextButton_C* ReturnItem_Local, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetCustomGamepadInputPresetName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class UGamepadKeyTextButton_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetScreenLabel_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, const struct FKey& CallFunc_GetKeyForAction_ReturnValue);
	void HandleBack(bool* PassThrough);
	void Construct();
	void UpdatePanel(TArray<class UFortOptionsMenuInputData*>& InputData);
	void BP_OnItemClicked_Bind(class UObject* Item);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, TArray<class UFortOptionsMenuInputData*>& K2Node_CustomEvent_InputData, class UObject* K2Node_CustomEvent_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGamepadKeyTextButton_C* K2Node_DynamicCast_AsGamepad_Key_Text_Button, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortOptionsMenuInputData* CallFunc_Array_Get_Item, int32 CallFunc_GetIndexForItem_ReturnValue, enum class EFortInputActionGroup CallFunc_GetInputActionGroup_ReturnValue, class UGamepadKeyTextButton_C* CallFunc_CreateCustomListItem_ReturnItem, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void CustomClearButton__DelegateSignature();
	void CustomClosedUsingBack__DelegateSignature();
	void CustomActionSelected__DelegateSignature(int32 SelectedIndex, class FName ActionName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
