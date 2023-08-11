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

// 0xA8 (0x600 - 0x558)
// WidgetBlueprintGeneratedClass AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C
class UAthenaMatchmakingPlayLegacy_C : public UFortAthenaMatchmakingWidgetLegacy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NewModeViolation;                                  // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaGenericLobbyViolator_C*         AthenaGenericLobbyViolator;                        // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     DebugCreativeServerSelect;                         // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MatchmakingSpinner;                                // 0x578(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NewModeBorder;                                     // 0x580(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownLobbyViolator_C*              ShowdownLobbyViolator;                             // 0x588(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ViolatorContent;                                   // 0x590(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ViolatorSwitcher;                                  // 0x598(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            PlaylistsUpdated;                                  // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          ShowNewPlaylistTimer;                              // 0x5B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnPlaylistChanged;                                 // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                            MatchmakingSucceededSound;                         // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UUserWidget>             CreativeOptionsSoftClass;                          // 0x5D0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                CreativeOptionsClass;                              // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchmakingPlayLegacy_C");
		return Clss;
	}

	void OnLoaded_624287AB42851447B4164286AAD2D464(class UClass* Loaded);
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
	void ExecuteUbergraph_AthenaMatchmakingPlayLegacy(int32 EntryPoint, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Event_PlayButtonText, class FText K2Node_Event_CancelButtonText, const struct FPlaylistFrontEndData& K2Node_Event_NewPlaylist, class FText K2Node_Event_PlaylistCMSOverrideName, enum class EFortLobbyType K2Node_Event_LobbyType, bool K2Node_Event_InCurrentSquadFill, bool K2Node_Event_bShouldShow, class UAthenaMatchmakingPlayButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button, bool K2Node_DynamicCast_bSuccess_1, class UAthenaMatchmakingModeButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button, bool K2Node_DynamicCast_bSuccess_2, class UAthenaMatchmakingModeButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button_1, bool K2Node_DynamicCast_bSuccess_3, class FText K2Node_Event_ModeName, class FText K2Node_Event_SubText, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UClass* K2Node_CustomEvent_Loaded, enum class EFortMatchmakingViolatorStyle Temp_byte_Variable, class UCMSContext* CallFunc_GetContext_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_IsNewPlaylistInformationAvailable_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_bSuccess, class UFortPlaylistAthena* K2Node_Event_Playlist, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void OnPlaylistChanged__DelegateSignature(const struct FPlaylistFrontEndData& Playlist_Data, class FText Playlist_CMS_Override, enum class EFortLobbyType Lobby_Type);
	void PlaylistsUpdated__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
