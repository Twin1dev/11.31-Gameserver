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

// 0xE1 (0x639 - 0x558)
// WidgetBlueprintGeneratedClass AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C
class UAthenaLobbyMatchmakingPlay_C : public UFortAthenaMatchmakingWidgetLegacy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowMatchmakingDetails;                            // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NewModeViolation;                                  // 0x568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaGenericLobbyViolator_C*         AthenaGenericLobbyViolator;                        // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Border_BasePanel;                                  // 0x578(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Box_LimitedMatchmaking;                            // 0x580(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     DebugCreativeServerSelect;                         // 0x588(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MatchmakingSpinner;                                // 0x590(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NewModeBorder;                                     // 0x598(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownLobbyViolator_C*              ShowdownLobbyViolator;                             // 0x5A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_FillStatus;                                   // 0x5A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_ModeTitle;                                    // 0x5B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ViolatorContent;                                   // 0x5B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ViolatorSwitcher;                                  // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            PlaylistsUpdated;                                  // 0x5C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          ShowNewPlaylistTimer;                              // 0x5D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnPlaylistChanged;                                 // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                            MatchmakingSucceededSound;                         // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UUserWidget>             CreativeOptionsSoftClass;                          // 0x5F8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                CreativeOptionsClass;                              // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SquadFill;                                         // 0x628(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E2B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortPlaylistAthena*                   PlaylistData;                                      // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShowingMatchmakingDetails;                       // 0x638(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLobbyMatchmakingPlay_C");
		return Clss;
	}

	void SetBasePanelColor(const struct FLinearColor& NewColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void RefreshFillText(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetMatchmakingFillText_ReturnValue);
	void OnLoaded_7F9C59BE40E65C1C31B0EB98786CDA43(class UClass* Loaded);
	void Construct();
	void OnAvailablePlaylistsUpdated();
	void OnSetPlayButtonText(class FText& PlayButtonText);
	void OnSetCancelButtonText(class FText& CancelButtonText);
	void PlaylistChanged(struct FPlaylistFrontEndData& NewPlaylist, class FText& PlaylistCMSOverrideName, enum class EFortLobbyType LobbyType);
	void SetSquadFillText(bool InCurrentSquadFill);
	void OnNewModeViolatorUpdated(bool bShouldShow);
	void UpdateCustomViolatorText(class FText& ModeName, class FText& SubText);
	void Animate();
	void OnMatchmakingFinishedBlueprint(bool bSuccess, class UFortPlaylistAthena* Playlist);
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void OnCrossplayPreferencesChanged(bool IsCrossplayEnabled);
	void ShouldShowMatchmakingDetails(bool bShow);
	void ExecuteUbergraph_AthenaLobbyMatchmakingPlay(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_IsInZone_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class UCMSContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsNewPlaylistInformationAvailable_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAthenaMatchmakingPlayButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_Event_PlayButtonText, class FText K2Node_Event_CancelButtonText, const struct FPlaylistFrontEndData& K2Node_Event_NewPlaylist, class FText K2Node_Event_PlaylistCMSOverrideName, enum class EFortLobbyType K2Node_Event_LobbyType, bool K2Node_Event_InCurrentSquadFill, bool CallFunc_TextIsEmpty_ReturnValue, bool K2Node_Event_bShouldShow, class FText K2Node_Event_ModeName, class FText K2Node_Event_SubText, enum class ESlateVisibility Temp_byte_Variable_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_2, class UFortCrossplayPromptContext* CallFunc_GetContext_ReturnValue_1, class UFortCrossplayPromptContext* CallFunc_GetContext_ReturnValue_2, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_Select_Default, bool K2Node_Event_bSuccess, class UFortPlaylistAthena* K2Node_Event_Playlist, enum class ESlateVisibility K2Node_Select_Default_1, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_CustomEvent_IsCrossplayEnabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsPlaylistLimitedPoolMatchmakingEnabled_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, bool K2Node_Event_bShow, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_AreModalsActive_ReturnValue, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_CustomEvent_Loaded, enum class EFortMatchmakingViolatorStyle Temp_byte_Variable_6, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, class AActor* CallFunc_Array_Get_Item, class UWidget* K2Node_Select_Default_4, TScriptInterface<class II_FrontendBackplateMatchmakingInteraction_C> K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasMatcmakingInteraction_HasInteraction, TScriptInterface<class II_FrontendBackplateMatchmakingInteraction_C> K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class II_FrontendBackplateMatchmakingInteraction_C> K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void OnPlaylistChanged__DelegateSignature(const struct FPlaylistFrontEndData& Playlist_Data, class FText Playlist_CMS_Override, enum class EFortLobbyType Lobby_Type);
	void PlaylistsUpdated__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
