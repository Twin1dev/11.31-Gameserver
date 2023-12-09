#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4E0 - 0x4C8)
// WidgetBlueprintGeneratedClass AthenaReplayBrowserTab.AthenaReplayBrowserTab_C
class UAthenaReplayBrowserTab_C : public UAthenaReplayBrowserScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULeaderboardThrobber_C*                LoadingThrobber;                                   // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          LoadingTimerHandle;                                // 0x4D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaReplayBrowserTab_C* GetDefaultObj();

	void ShowLoadingThrobber();
	void OnActionStateChanged(bool bHasAction);
	void BP_OnActivated();
	void ExecuteUbergraph_AthenaReplayBrowserTab(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, bool K2Node_Event_bHasAction, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
};

}


