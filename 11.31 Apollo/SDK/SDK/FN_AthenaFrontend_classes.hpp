#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x449 - 0x3F8)
// WidgetBlueprintGeneratedClass AthenaFrontend.AthenaFrontend_C
class UAthenaFrontend_C : public UAthenaUIStateWidget_Frontend
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaFPS_C*                          AthenaFPS;                                         // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaTemperature_C*                  AthenaTemperature;                                 // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                     BuildWatermark;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_PTT;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortVoiceChannelSpeakerContainer_C*   FortVoiceChannelSpeakerContainer;                  // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PTT_Image;                                         // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_1;                                        // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_Bottom;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxPTT;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         StartedPlayingVideo;                               // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaFrontend_C* GetDefaultObj();

	void PlayTrailer(class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_NeedSeeTrailerMovie_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UActivatableMovieWidget_Monolithic_C* CallFunc_Create_ReturnValue, bool CallFunc_LoadStreamingVideo_NoAutoPlay, class UFortStreamMediaSource* CallFunc_LoadStreamingVideo_MediaSource);
	void InitChatVisibilityButton(bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdatePttVisibility(enum class EPTTState PTTState, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetCanPTT_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EPTTState Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue_1, const struct FSlateBrush& K2Node_Select_Default);
	void SetOverlayTitleBarVisibility(bool Visible);
	void SetChatWidgetVisibility(bool Visible, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Finished_414B507840B2E2E707360A8A2E361B46();
	void Finished_F2B6CDCF416F4AC924A94193DA4B100B();
	void Loading_Screen_Changed(bool IsVisible);
	void BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void On_Can_PTT();
	void Construct();
	void On_Social_Import_Closed();
	void OnMovieFinished();
	void BndEvt__Button_PTT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void RevisitStartupFlow();
	void BP_OnActivated();
	void OnCrossplayWidgetDismissed();
	void OnSetFrontendVisibilityMode(enum class EFrontendVisibilityMode InFrontendVisibilityMode);
	void ExecuteUbergraph_AthenaFrontend(int32 EntryPoint, enum class EPTTState Temp_byte_Variable, enum class EPTTState Temp_byte_Variable_1, enum class EPTTState Temp_byte_Variable_2, enum class EPTTState Temp_byte_Variable_3, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsCurrentlyShowingLoadingScreen_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_3, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_4, enum class EPTTState CallFunc_GetPTTState_ReturnValue, enum class EPTTState CallFunc_GetPTTState_ReturnValue_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_6, bool CallFunc_ShouldShowSocialImport_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_7, class UFortSocialImportPanel* CallFunc_ShowSocialImport_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAsyncAction_WaitForScriptedActions* CallFunc_WaitForScriptedAction_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_IsVisible, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_8, enum class EPTTState CallFunc_GetPTTState_ReturnValue_2, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, enum class EPTTState K2Node_Select_Default, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, bool Temp_bool_Variable, class UClass* K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class ESlateVisibility Temp_byte_Variable_5, bool CallFunc_CheckForGifts_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_9, bool CallFunc_ShowInitialCrossplayDialog_ReturnValue, class UFortPlayerSurveyDispatcher* CallFunc_GetPlayerSurveyDispatcher_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UAsyncAction_FortPlayerSurveyDispatcherDisplaySurveys* CallFunc_DisplaySurveys_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ShowInitialCrossplayDialog_ReturnValue_1, bool CallFunc_AttemptToOpenBattlePassTabForNewSeason_ReturnValue, bool CallFunc_ShouldSkipStartupFlow_ReturnValue, enum class EFrontendVisibilityMode K2Node_Event_InFrontendVisibilityMode, bool K2Node_SwitchEnum_CmpSuccess);
};

}


