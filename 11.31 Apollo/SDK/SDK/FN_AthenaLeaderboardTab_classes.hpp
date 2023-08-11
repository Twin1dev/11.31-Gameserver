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

// 0xF8 (0x768 - 0x670)
// WidgetBlueprintGeneratedClass AthenaLeaderboardTab.AthenaLeaderboardTab_C
class UAthenaLeaderboardTab_C : public UAthenaLeaderboardScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x670(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          Box_ProfileNoStats;                                // 0x678(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CloseIcon;                                         // 0x680(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CloseIcon2;                                        // 0x688(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       EnableWidgetSwitcher;                              // 0x690(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBContentMain;                                     // 0x698(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_109;                                         // 0x6A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardHeaderRowWidget_C*         LeaderboardHeaderRow;                              // 0x6A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardListView_C*                LeaderboardListView;                               // 0x6B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 LeaderboardSwitcher;                               // 0x6B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardThrobber_C*                LeaderboardThrobber;                               // 0x6C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardRowWidget_C*               LocalUserRow;                                      // 0x6C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        MobileCloseButton;                                 // 0x6D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        MobileCloseButton2;                                // 0x6D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoStatsText;                                       // 0x6E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayCloseButton;                                // 0x6E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayCloseButton2;                               // 0x6F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerRankEmblem_C*                   PlayerRankEmblem;                                  // 0x6F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              QueryError;                                        // 0x700(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QueryErrorMessageText;                             // 0x708(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ResetTimeBox;                                      // 0x710(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBFriendsOnly;                                     // 0x718(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBNoData;                                          // 0x720(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   PlaylistChange;                                    // 0x728(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   FriendTypeChange;                                  // 0x738(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          QueryTimerHandle;                                  // 0x748(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OnQueryFinishedSound;                              // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackAction;                                        // 0x758(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLeaderboardTab_C");
		return Clss;
	}

	void Init_Back_Action(class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HasInputActionHandler_ReturnValue);
	void HandleBackAction(bool* PassThrough);
	void ToggleDisabledTabVisuals(bool bShouldBeDisabled, bool CallFunc_Not_PreBool_ReturnValue);
	void OnShowQueryThrobber();
	void OnQueryStateChanged(bool bQueryInProgress, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnFriendTypeChangeGamepad(bool* bCommitted, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnPlaylistChangeGamepad(bool* bCommitted, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess);
	void BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void Construct();
	void BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnUpdateTabButtonText(class UCommonButton* Button, struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void OnUpdateLeaderboardListUI(bool bWasSuccessful, class UFortLeaderboardRowProxyInstance* LocalUserRow, class FText& QueryErrorStr);
	void OnUpdateListHeader(struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void BP_OnDeactivated();
	void OnQueryFinished();
	void OnQueryStarted();
	void BP_OnActivated();
	void OnInputMethodChanged_Event_0(enum class ECommonInputType bNewInputType);
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaLeaderboardTab(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_CanShowLeaderboards_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_CanShowGlobalLeaderboards_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_7, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool Temp_bool_Variable_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue_2, bool Temp_bool_Variable_5, bool CallFunc_CanShowStats_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, bool Temp_bool_Variable_6, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_14, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility K2Node_Select_Default_2, class FName K2Node_ComponentBoundEvent_TabId_1, class UCommonButton* K2Node_ComponentBoundEvent_TabButton_1, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 K2Node_ComponentBoundEvent_Value_1, int32 K2Node_ComponentBoundEvent_Value, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool CallFunc_Map_Remove_ReturnValue, class UCommonButton* K2Node_Event_Button, const struct FAthenaPlaylistLeaderboardData& K2Node_Event_PlaylistTabData_1, bool K2Node_Event_bWasSuccessful, class UFortLeaderboardRowProxyInstance* K2Node_Event_LocalUserRow, class FText K2Node_Event_QueryErrorStr, class FText CallFunc_TextToUpper_ReturnValue, class UAthenaLeaderboardTabButton_C* K2Node_DynamicCast_AsAthena_Leaderboard_Tab_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FAthenaPlaylistLeaderboardData& K2Node_Event_PlaylistTabData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable_7, enum class ESlateVisibility K2Node_Select_Default_3, bool CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_5, bool CallFunc_SelectTabByID_ReturnValue, bool Temp_bool_Variable_8, enum class ESlateVisibility K2Node_Select_Default_6, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility Temp_byte_Variable_18, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator_1, bool K2Node_DynamicCast_bSuccess_2, enum class ESlateVisibility Temp_byte_Variable_19, bool Temp_bool_Variable_9, bool CallFunc_HandleBackAction_PassThrough, bool CallFunc_IsMobileGame_ReturnValue, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_7, bool CallFunc_CanShowLeaderboards_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_8, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_4, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, int32 Temp_int_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, int32 Temp_int_Variable_1, enum class ESlateVisibility K2Node_Select_Default_9, bool Temp_bool_Variable_10, int32 K2Node_Select_Default_10);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
