#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x488 - 0x440)
// WidgetBlueprintGeneratedClass PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C
class UPopupCenterMessageModalPanel_C : public UFortPopUpCenterMessageModalPanel
{
public:
	class UCommonTextBlock*                      CenterMessageText;                                 // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MessageOverlay;                                    // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  WaitingForPlayersText;                             // 0x450(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  WaitingForOutpostOwnerText;                        // 0x468(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          MatchTimerHandle;                                  // 0x480(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPopupCenterMessageModalPanel_C* GetDefaultObj();

	void LeaveZone(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue_1);
	void UpdateState(enum class ECenterPopupMessageStateEnum NewState, class FText CurrentMessage, bool K2Node_SwitchEnum_CmpSuccess);
};

}


