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

// 0x58 (0x690 - 0x638)
// WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C
class UAthenaLobby_C : public UAthenaLobbyBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x638(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFeaturedCreativeContent_C*            FeaturedCreativeContent;                           // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchmakingRegionAndPool_C*           MatchmakingRegion;                                 // 0x648(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMinimalTeamDisplay_C*                 MinimalTeamDisplay;                                // 0x650(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Main;                                      // 0x658(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPunchCard_C*                          PunchCard;                                         // 0x660(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFancyToastWidget_C*                   StoreToastWidget;                                  // 0x668(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreToastRequest*                    StoreToastRequest;                                 // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TryShowToast;                                      // 0x678(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputAction_InspectChallenges;                     // 0x680(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLobby_C");
		return Clss;
	}

	void HandleLobbyColorSchemeChange(const struct FLinearColor& NewColorScheme, bool UseDefaultScheme, const struct FLinearColor& Temp_struct_Variable, class UAthenaLobbyMatchmakingPlay_C* K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	void ConfigureGenericLinkButton(bool Temp_bool_Variable, class FText Temp_text_Variable, TScriptInterface<class IFortClientAnnouncement_TutorialInterface> K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface, bool K2Node_DynamicCast_bSuccess, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class FText CallFunc_GetLobbyGenericLinkButtonOverrideText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default);
	void ShowPicker(enum class EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UAthenaFrontEndRadialPicker_C* K2Node_DynamicCast_AsAthena_Front_End_Radial_Picker, bool K2Node_DynamicCast_bSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void StartAthenaLobbyMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void OnFailure_DA5E62624D068772EA890193344BA4AE();
	void OnSuccess_DA5E62624D068772EA890193344BA4AE();
	void OnComplete_CDEE9407403C60D364D45989D2D2A8CE(class UUserWidget* UserWidget);
	void BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void Construct();
	void ShowMobileAutoFireScreen();
	void BP_OnDeactivated();
	void DisplayStoreUpdated(class UStoreToastRequest* StoreUpdatedRequest);
	void BP_OnActivated();
	void AttemptToShowToast();
	void TryToastAgainNextFrame();
	void BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature();
	void OnPlaylistChanged(enum class EFortLobbyType LobbyType, class UFortPlaylistAthena* PlaylistData);
	void DisplayGlyphQuestUpdated(int32 NewGlyphs);
	void ExecuteUbergraph_AthenaLobby(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPickerContext* CallFunc_GetContext_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, enum class EFortLobbyType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class EFortLobbyType Temp_byte_Variable_5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, class UUserWidget* K2Node_CustomEvent_UserWidget, bool CallFunc_IsValid_ReturnValue, class UUserWidget* Temp_object_Variable, class UHUDLayoutToolFireModePanel_C* K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel, bool K2Node_DynamicCast_bSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsBROnly_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_BooleanAND_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_3, bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UStoreToastRequest* K2Node_Event_StoreUpdatedRequest, bool CallFunc_ShouldBeginRequest_ReturnValue, const struct FStoreCallout& CallFunc_GetToast_ReturnValue, bool CallFunc_IsRequestReady_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsActivated_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EFortLobbyType K2Node_Event_LobbyType, class UFortPlaylistAthena* K2Node_Event_PlaylistData, enum class ESlateVisibility K2Node_Select_Default_1, bool K2Node_SwitchEnum_CmpSuccess, class UAthenaMatchmakingPlayLegacy_C* K2Node_DynamicCast_AsAthena_Matchmaking_Play_Legacy, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 K2Node_Event_NewGlyphs, class UWidget* K2Node_Select_Default_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
