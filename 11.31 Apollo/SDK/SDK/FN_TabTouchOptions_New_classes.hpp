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

// 0x8 (0x338 - 0x330)
// WidgetBlueprintGeneratedClass TabTouchOptions_New.TabTouchOptions_New_C
class UTabTouchOptions_New_C : public UFortTabTouchOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabTouchOptions_New_C");
		return Clss;
	}

	void OnComplete_70DA8CBD478310A11CA48A9F568B15E0(class UUserWidget* UserWidget);
	void CenterOnTab();
	void SettingValueChanged(float Value);
	void BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature(class UFortSetting* Setting, class FName Action);
	void ExecuteUbergraph_TabTouchOptions_New(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_CustomEvent_UserWidget, class UUserWidget* Temp_object_Variable, class UHUDLayoutToolFireModePanel_C* K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_Value, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortSetting* K2Node_ComponentBoundEvent_Setting, class FName K2Node_ComponentBoundEvent_Action, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
