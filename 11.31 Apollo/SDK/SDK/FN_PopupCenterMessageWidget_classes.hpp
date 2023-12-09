#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2E8 - 0x2D0)
// WidgetBlueprintGeneratedClass PopupCenterMessageWidget.PopupCenterMessageWidget_C
class UPopupCenterMessageWidget_C : public UFortHUDCenterPopupMessageWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPopupCenterMessageModalPanel_C*       CenterPopupModal;                                  // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UpdateStateTimer;                                  // 0x2E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPopupCenterMessageWidget_C* GetDefaultObj();

	void OnModalDisplayed(enum class ECenterPopupMessageStateEnum NewState, class UCommonActivatablePanel* ModalPopup);
	void Construct();
	void UpdateStateEvent();
	void Destruct();
	void ExecuteUbergraph_PopupCenterMessageWidget(int32 EntryPoint, enum class ECenterPopupMessageStateEnum K2Node_Event_NewState, class UCommonActivatablePanel* K2Node_Event_ModalPopup, class UPopupCenterMessageModalPanel_C* K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


