#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x360 - 0x258)
// WidgetBlueprintGeneratedClass LeaveButton.LeaveButton_C
class ULeaveButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                     Leave;                                             // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnClicked;                                         // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            Update_Visibility;                                 // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                ButtonStyleOverride;                               // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ControllerStyleOverride;                           // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseButtoneStyleOverride;                           // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OverrideButtonText;                                // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5BEC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonTextOverride;                                // 0x2A0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  HordModeLeaveDescription;                          // 0x2B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  MissionLeaveDescriptionAlone;                      // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  MissionLeaveDescriptionParty;                      // 0x2E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  StormshieldLeaveDescriptionAlone;                  // 0x300(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  StormshieldLeaveDescriptionParty;                  // 0x318(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  StormshieldLeaveTitle;                             // 0x330(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ULeaveDialog_C*                        LeaveDialog;                                       // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            LeaveDialogCancelled;                              // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ULeaveButton_C* GetDefaultObj();

	void ClearLeaveDialogDelegate(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void ShowLeaveScreen(class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class ULeaveDialog_C* K2Node_DynamicCast_AsLeave_Dialog, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsInNeighborhood_bIsInNeighborhood, class FText CallFunc_GetSTWConfirmationDialogText_OutTitle, class FText CallFunc_GetSTWConfirmationDialogText_OutDescription, bool CallFunc_GetSTWConfirmationDialogText_bOutIsInParty);
	void UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_2);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UFortPartyContext* CallFunc_GetContext_ReturnValue_1, class UFortPartyContext* CallFunc_GetContext_ReturnValue_2, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue);
	void GetSTWOutpostConfirmationDialogText(class FText* OutTitle, class FText* OutDescription, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText K2Node_Select_Default);
	void GetSTWConfirmationDialogText(bool bIsInNeighborhood, class FText* OutTitle, class FText* OutDescription, bool* bOutIsInParty, bool bIsInParty, class FText Title, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_IsInOutpostZone_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default, bool Temp_bool_Variable_4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsInOutpostZone_ReturnValue_1, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3, class UFortPartyContext* CallFunc_GetContext_ReturnValue_2, class FText K2Node_Select_Default_4, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_3, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetBRConfirmationDialogText(class FText* TitleText, class FText* MessagText, bool IsInParty, class FText Temp_text_Variable, enum class EFortPlaylistType Temp_byte_Variable, class FText Temp_text_Variable_1, enum class EFortPlaylistType Temp_byte_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, bool Temp_bool_Variable, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, bool Temp_bool_Variable_1, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable_2, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, class FText Temp_text_Variable_11, bool CallFunc_Greater_IntInt_ReturnValue, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select_Default, enum class EFortPlaylistType CallFunc_GetPlaylistType_ReturnValue, bool Temp_bool_Variable_3, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, bool CallFunc_IsPartyInProgressEnabled_ReturnValue, class FText K2Node_Select_Default_5, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Change_Main_Menu_Music_State(bool Set_Lobby_Music_State, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item);
	void GetDescriptionText(class FText* DescriptionText, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void IsInNeighborhood(bool* bIsInNeighborhood, class AFortDeployableBaseManager* DeployableBaseManager, enum class EDeployableBaseUseType CallFunc_GetDeployableBaseUseType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class AFortDeployableBaseManager* CallFunc_GetCurrent_ReturnValue);
	void Update_Style_State();
	void SetText(class FText TextOverride);
	void GetButton(class UIconTextButton_C** Leave);
	void HasUnsavedQuestProgress(bool* HasUnsavedQuestProgress, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_HasUnsavedPrimaryMissionProgress_ReturnValue);
	void LeaveParty(class UFortPartyContext* CallFunc_GetContext_ReturnValue);
	void UpdateState(class FText CallFunc_GetLeaveActionText_Text, bool CallFunc_IsConsideredInGame_InGame, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void IsConsideredInGame(bool* InGame, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void GetLeaveActionText(class FText* Text, class FText Temp_text_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, enum class EFortPlaylistType Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsInOutpostZone_ReturnValue, bool Temp_bool_Variable_1, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, bool Temp_bool_Variable_2, class FText Temp_text_Variable_9, class FText K2Node_Select_Default, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsConsideredInGame_InGame, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsConsideredInGame_InGame_1, enum class EFortPlaylistType CallFunc_GetPlaylistType_ReturnValue, class FText Temp_text_Variable_10, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, bool Temp_bool_Variable_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_Select_Default_3, bool CallFunc_IsOutpostOwner_ReturnValue, bool CallFunc_IsConsideredInGame_InGame_2, class FText K2Node_Select_Default_4);
	void DialogResult_F5AF58094777CFEEC0BF28BEA620800C(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void HandleTeamMemberRemoved(int32 PlayerIndex);
	void HandlePlayerStateChanged(struct FFortTeamMemberInfo& TeamMemberInfo);
	void HandleLeft();
	void Construct();
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void HandleCanceled();
	void HandleLobbyEvents();
	void PerformLeave();
	void ExecuteUbergraph_LeaveButton(int32 EntryPoint, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortOutpostContext* CallFunc_GetContext_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsConsideredInGame_InGame, bool CallFunc_IsOutpostOwner_ReturnValue, bool CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool K2Node_Event_IsDesignTime, class ULeaveWarningInfo_C* CallFunc_Create_ReturnValue, enum class EFortDialogResult Temp_byte_Variable_1, class FName Temp_name_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1, int32 K2Node_CustomEvent_PlayerIndex, bool CallFunc_IsConsideredInGame_InGame_1, enum class EFortDialogResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ResultName_1, const struct FFortTeamMemberInfo& K2Node_CustomEvent_TeamMemberInfo, class FText CallFunc_GetBRConfirmationDialogText_TitleText, class FText CallFunc_GetBRConfirmationDialogText_MessagText, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetSTWOutpostConfirmationDialogText_OutTitle, class FText CallFunc_GetSTWOutpostConfirmationDialogText_OutDescription, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, const struct FFortTeamMemberInfo& K2Node_CustomEvent_NewTeamMemberInfo);
	void LeaveDialogCancelled__DelegateSignature();
	void Update_Visibility__DelegateSignature(bool Visibility);
	void OnClicked__DelegateSignature();
};

}


