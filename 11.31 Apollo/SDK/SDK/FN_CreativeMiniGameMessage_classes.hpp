#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x2DC - 0x298)
// WidgetBlueprintGeneratedClass CreativeMiniGameMessage.CreativeMiniGameMessage_C
class UCreativeMiniGameMessage_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCreativeMiniGameInfoWidget_C*         CreativeMiniGameInfoWidget;                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bShouldShowMessage;                                // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bOnIsland;                                         // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BEC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          VolumeBindingHandler;                              // 0x2B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        TryAttempts;                                       // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               MobilePadding;                                     // 0x2BC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               DefaultPadding;                                    // 0x2CC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCreativeMiniGameMessage_C* GetDefaultObj();

	class AFortMinigame* GetMinigameHelper(class AFortVolume* VolumeToCheck, bool CallFunc_IsValid_ReturnValue, class AFortMinigame* CallFunc_GetMinigameForVolume_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortMinigame* CallFunc_GetMinigame_ReturnValue);
	void ShouldRetry(bool* bShouldRetry, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortMinigame* CallFunc_GetMinigame_ReturnValue, bool CallFunc_IsPlayerInPublishedVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void FinishVolumeBinding(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleLoadingScreenChanged(class AFortPlayerControllerAthena* PlayerController, bool bEnabled, class FText HUDReasonText, class AFortMinigame* CallFunc_GetMinigameHelper_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetVisibilityForPublishedIslands_bIsVisible, bool CallFunc_IsValid_ReturnValue);
	void SetVisibilityForPublishedIslands(class AFortMinigame* MinigameToCheck, bool* bIsVisible, bool CallFunc_ForceRefresh_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlayerInPublishedVolume_ReturnValue, bool CallFunc_IsPregame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Construct();
	void Destruct();
	void BindMiniGameEvents(class AFortVolume* MinigameVolume);
	void UnBindMiniGameEvents();
	void OnLeaveIsland(class AFortPlayerPawn* PlayerPawn);
	void OnEnterVolume(class APlayerState* Client, class AFortVolume* Volume);
	void DisableMessage();
	void UnbindGlobalEvents();
	void BindGlobalEvents();
	void OnMinigameStateChanged(class AFortMinigame* ChangedMinigame, enum class EFortMinigameState MinigameState);
	void OnStartingGame();
	void TrySetup();
	void UpdateVisibility(class AFortMinigame* MinigameToCheck);
	void ExecuteUbergraph_CreativeMiniGameMessage(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_1, class AFortMinigame* CallFunc_GetMinigameHelper_ReturnValue, bool CallFunc_IsPlaygroundModePlaylist_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsCreativeModePlaylist_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AFortMinigame* CallFunc_GetMinigameHelper_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1, bool K2Node_DynamicCast_bSuccess_2, class AFortVolume* CallFunc_GetCurrentVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, class AFortVolume* K2Node_CustomEvent_MinigameVolume, class AFortMinigame* CallFunc_GetMinigameHelper_ReturnValue_2, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AFortPlayerPawn* K2Node_CustomEvent_PlayerPawn, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager_1, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class APlayerState* K2Node_CustomEvent_Client, class AFortVolume* K2Node_CustomEvent_Volume, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortMinigame* CallFunc_GetMinigameHelper_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class AFortMinigame* CallFunc_GetMinigameHelper_ReturnValue_4, bool CallFunc_SetVisibilityForPublishedIslands_bIsVisible, bool CallFunc_IsValid_ReturnValue_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortMinigame* K2Node_CustomEvent_ChangedMinigame, enum class EFortMinigameState K2Node_CustomEvent_MinigameState, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_2, bool K2Node_DynamicCast_bSuccess_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_ShouldRetry_bShouldRetry, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue, class AFortMinigame* K2Node_CustomEvent_MinigameToCheck, bool CallFunc_SetVisibilityForPublishedIslands_bIsVisible_1, bool CallFunc_IsMobileGame_ReturnValue, class UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, const struct FMargin& K2Node_Select_Default, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_4, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsPlayerInReadOnlyVolume_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsCreativeModePlaylist_ReturnValue_1, bool CallFunc_IsPlaygroundModePlaylist_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1);
};

}


