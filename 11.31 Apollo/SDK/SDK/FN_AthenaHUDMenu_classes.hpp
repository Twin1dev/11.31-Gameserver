#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2F0 - 0x270)
// WidgetBlueprintGeneratedClass AthenaHUDMenu.AthenaHUDMenu_C
class UAthenaHUDMenu_C : public UAthenaHUDMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaInventoryPanel_C*               AthenaInventoryPanel;                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ClickCatcher;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                    HUDWidgetStack;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 NamedContentSwitcher;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               NoContent;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGameOverWidget_C*               DynamicGameOverScreen;                             // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowingGameOverScreen;                             // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowingWinnerScreen;                               // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_63AD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaPlayerViewModel*                ViewModel;                                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           InventoryPanelOverride;                            // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaPostGameScreenArray*            PostGameArray;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowingEndGameScreen;                              // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_63AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TagsToShow;                                        // 0x2D0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAthenaHUDMenu_C* GetDefaultObj();

	void IsPlaygroundsModePlaylist(bool* Result, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlaygroundModePlaylist_ReturnValue);
	void Set_Bottom_Bar_Visibility(enum class ESlateVisibility New_Vis);
	void SetInventoryPanelOverride(class UUserWidget* NewPanel, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_RemoveChild_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void IsCreativeLTMOrCreativeModePlaylist(bool* CreativeOrCreativeLTM, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCreativeLTMPlaylist_ReturnValue, bool CallFunc_IsCreativeModePlaylist_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Has_Player_Died(bool* bDied, struct FFortPlayerDeathReport* DeathReport, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsClientNotifiedOfPawnDied_ReturnValue);
	void Has_Player_Or_Team_Won(bool* bWon, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsClientNotifiedOfWin_ReturnValue, bool CallFunc_IsClientNotifiedOfTeamWin_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void CreateOrShowGameOverScreen(class UAthenaGameOverWidget_C** GameOverScreen, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Dismiss(class UCommonActivatablePanel* CallFunc_GetCurrentModal_ReturnValue, class UFeedback_C* K2Node_DynamicCast_AsFeedback, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void PushMenuContent(class UWidget* Widget, const struct FContentPushState& ContentPushState, enum class ESlateVisibility Temp_byte_Variable, class UFortActivatablePanel* K2Node_DynamicCast_AsFort_Activatable_Panel, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void SetCursorModeContent(class UUserWidget* CustomWidget, class FName ActionName, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_GetHasStartedShowing_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, class UUserWidget* K2Node_Select_Default);
	void HandleRevived();
	void Construct();
	void Clear_GameOver_Screen();
	void On_Player_Or_Team_Won();
	void PostBind_CheckConditions();
	void OnPlayerLost(enum class EEndOfMatchReason LostReason);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void FocusPlayerSwitcher();
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void StartPostGame();
	void RecoverFromPostGame();
	void On_Player_Died(struct FFortPlayerDeathReport& DeathReport);
	void OnWidgetStackCleared();
	void ExecuteUbergraph_AthenaHUDMenu(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaGameOverWidget_C* CallFunc_CreateOrShowGameOverScreen_GameOverScreen, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAthenaGameOverWidget_C* CallFunc_CreateOrShowGameOverScreen_GameOverScreen_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Has_Player_Or_Team_Won_bWon, bool CallFunc_Has_Player_Died_bDied, const struct FFortPlayerDeathReport& CallFunc_Has_Player_Died_DeathReport, class UFortHUDContext* CallFunc_GetContext_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_3, class UAthenaGameOverWidget_C* CallFunc_Create_ReturnValue, float CallFunc_GetGameOverDelayTime_ReturnValue, enum class EEndOfMatchReason K2Node_CustomEvent_LostReason, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UAthenaGameOverWidget_C* CallFunc_CreateOrShowGameOverScreen_GameOverScreen_2, const struct FFocusEvent& K2Node_Event_InFocusEvent, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, bool CallFunc_IsCreativeLTMOrCreativeModePlaylist_CreativeOrCreativeLTM, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool K2Node_Event_bCursorModeEnabled, class FName K2Node_Event_ActionName, class UUserWidget* K2Node_Event_CursorModeContentWidget, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_4, class UFortHUDContext* CallFunc_GetContext_ReturnValue_5, class UFortHUDContext* CallFunc_GetContext_ReturnValue_6, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class UPostGameScreenArray_C* CallFunc_Create_ReturnValue_1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_7, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess_3, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, class UFortHUDContext* CallFunc_GetContext_ReturnValue_8, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_6, class UPostGameScreenArray_C* CallFunc_Create_ReturnValue_2, const struct FContentPushState& K2Node_MakeStruct_ContentPushState, float Temp_float_Variable, float K2Node_Select_Default, bool CallFunc_IsMobileGame_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsPlaygroundsModePlaylist_Result, bool CallFunc_BooleanOR_ReturnValue_1);
};

}


