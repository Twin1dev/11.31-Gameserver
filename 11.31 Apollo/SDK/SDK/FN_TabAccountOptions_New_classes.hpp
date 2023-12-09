#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x338 - 0x330)
// WidgetBlueprintGeneratedClass TabAccountOptions_New.TabAccountOptions_New_C
class UTabAccountOptions_New_C : public UFortTabAccountOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UTabAccountOptions_New_C* GetDefaultObj();

	void OnComplete_DB10A9674F5CF800B883C79A4229D87C(class UUserWidget* UserWidget);
	void OnComplete_1192BA0E41F4707FF3E3A4A4C72B2024(class UUserWidget* UserWidget);
	void OnComplete_E454F9624DC58E051C39D9813595C807(class UUserWidget* UserWidget);
	void CenterOnTab();
	void SettingValueChanged(float Value);
	void BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature(class UFortSetting* Setting, class FName Action);
	void ExecuteUbergraph_TabAccountOptions_New(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_CustomEvent_UserWidget_2, class UUserWidget* Temp_object_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUserWidget* K2Node_CustomEvent_UserWidget_1, class UUserWidget* Temp_object_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUserWidget* K2Node_CustomEvent_UserWidget, class UUserWidget* Temp_object_Variable_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_CustomEvent_Value, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UFortSetting* K2Node_ComponentBoundEvent_Setting, class FName K2Node_ComponentBoundEvent_Action, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue_2, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2);
};

}


