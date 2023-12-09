#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2A8 - 0x270)
// WidgetBlueprintGeneratedClass StoreAlertToast.StoreAlertToast_C
class UStoreAlertToast_C : public UStoreAlertWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFancyToastWidget_C*                   StoreToastWidget;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          TryToShowToast;                                    // 0x280(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            AnimationStart;                                    // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            AnimationDone;                                     // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UStoreAlertToast_C* GetDefaultObj();

	void AttemptToShowToast();
	void BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature();
	void DisplayStoreUpdated(class UStoreToastRequest* NewStoreUpdatedRequest);
	void ExecuteUbergraph_StoreAlertToast(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UStoreToastRequest* K2Node_Event_NewStoreUpdatedRequest, bool CallFunc_IsRequestReady_ReturnValue, bool CallFunc_ShouldBeginRequest_ReturnValue, const struct FStoreCallout& CallFunc_GetToast_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void AnimationDone__DelegateSignature();
	void AnimationStart__DelegateSignature();
};

}


