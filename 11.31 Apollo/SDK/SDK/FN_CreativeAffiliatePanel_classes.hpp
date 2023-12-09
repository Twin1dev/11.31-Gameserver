#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x478 - 0x438)
// WidgetBlueprintGeneratedClass CreativeAffiliatePanel.CreativeAffiliatePanel_C
class UCreativeAffiliatePanel_C : public UFortCreativeAffiliatePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAffiliateKeyModal_C*                  AffiliateKeyModal;                                 // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundBase*                            OpenMenuSound;                                     // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CloseMenuSound;                                    // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnPanelClose;                                      // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UCreativeAffiliatePanel_C* GetDefaultObj();

	void SetAffiliateName(class FText AffiliateName, bool CallFunc_IsValid_ReturnValue);
	void Close();
	void BP_OnDeactivated();
	void ButtonClicked(class UCommonButton* Button);
	void PopupClosed();
	void BP_OnActivated();
	void InitFromObject(class UObject* InitObject);
	void On_Success();
	void ExecuteUbergraph_CreativeAffiliatePanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_CustomEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* K2Node_Event_InitObject, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void OnSuccess__DelegateSignature();
	void OnPanelClose__DelegateSignature();
};

}


