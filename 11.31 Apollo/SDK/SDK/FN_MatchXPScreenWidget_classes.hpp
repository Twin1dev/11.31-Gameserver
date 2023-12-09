#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x438 - 0x308)
// WidgetBlueprintGeneratedClass MatchXPScreenWidget.MatchXPScreenWidget_C
class UMatchXPScreenWidget_C : public UAthenaMatchXPScreenWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaReadyUpTooltipWidget_C*         AthenaReadyUpTooltipWidget;                        // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaWinnerList_C*                   AthenaWinnerList;                                  // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              BottomBarOverlay;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputReflectorButton_C*               Button_Back;                                       // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputReflectorButton_C*               Button_Cancel;                                     // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkewButton_C*                         Button_ItemShop;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputReflectorButton_C*               Button_NextMatch;                                  // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputReflectorButton_C*               Button_NextTeam;                                   // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputReflectorButton_C*               Button_PrevTeam;                                   // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkewButton_C*                         Button_ReadyUp;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputReflectorButton_C*               Button_replay;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputReflectorButton_C*               Button_ReportPlayer;                               // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkewButton_C*                         Button_ReturnToLobby;                              // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkewButton_C*                         Button_Spectate;                                   // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputReflectorButton_C*               Button_StatToggle;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_DetailSwitch;                 // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_RecapStats;                   // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_StatIcon;                     // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_Stats;                                        // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_XP;                                           // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  ItemShopWrapper;                                   // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchXPTotalEntry_C*                  MatchXP_CombatBonus;                               // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchXPTotalEntry_C*                  MatchXP_MatchXp;                                   // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchXPTotalEntry_C*                  MatchXP_MedalEntry;                                // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchXPTotalEntry_C*                  MatchXP_SurvivalBonus;                             // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchXPTotalEntry_C*                  MatchXP_TotalEntry;                                // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchXPDetails_C*                     MatchXPDetails;                                    // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPostGameSpectatingPlayerName_C*       PostGameSpectatingPlayerName;                      // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RecapVertBox;                                      // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxNavigationOptions;                          // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_XPTotalList;                           // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         InSpectating;                                      // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        XpRecapShown;                                      // 0x40C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UUserWidget>             ReportPlayerWidgetClass;                           // 0x410(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMatchXPScreenWidget_C* GetDefaultObj();

	void Is_Showing_Match_Stats(bool* Is_Showing, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnComplete_5CAD590142B3D878B2EFDA880F8D43B2(class UUserWidget* UserWidget);
	void OnComplete_1F07F3BB4539F8ABF08580925D18D5DF(class UUserWidget* UserWidget);
	void BndEvt__SkewButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnGoToSpectating();
	void BndEvt__Button_ReturnToLobby_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void On_Ready_Up_Clicked();
	void Return_To_Lobby();
	void BndEvt__Button_ReturnToLobby_BottomBar_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_NextMatch_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Update_Ready_Up_Vis();
	void Update_Recap_Vis();
	void BndEvt__Button_Cancel_1_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void EventPresentTotals();
	void BndEvt__Button_Cancel_1_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetEndMatchXPValues(int32 CombatXp, int32 SurvivalXp, int32 BonusMedalXp, int32 MatchXp, int32 TotalXpGained);
	void AllMedalsPlaced();
	void SetInputEnabled(bool bNewInputEnabled);
	void OnMatchMakingButtonEnabled();
	void SetEndOfMatchXPValueData(const struct FGameplayTag& Tag, int32 XP, int32 BonusPct);
	void BndEvt__Button_ReportPlayer_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Report_Player_Pressed();
	void Update_PrevNext_Vis();
	void UpdateAllVisibility();
	void BndEvt__Button_PrevTeam_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_NextTeam_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_ItemShop_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Update_Item_Shop_Button_Viz();
	void BP_OnActivated();
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void On_Stat_Button_Pressed();
	void ExecuteUbergraph_MatchXPScreenWidget(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, enum class EAthenaGamePhase CallFunc_GetGamePhase_ReturnValue, class FText Temp_text_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText Temp_text_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UUserWidget* K2Node_CustomEvent_UserWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* Temp_object_Variable, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_2, enum class EPostGameHUDState Temp_byte_Variable_4, int32 Temp_int_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, enum class EPostGameHUDState Temp_byte_Variable_5, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_11, class UCommonButton* K2Node_ComponentBoundEvent_Button_10, class UCommonButton* K2Node_ComponentBoundEvent_Button_9, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue_3, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_8, class UUserWidget* Temp_object_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_7, class UCommonActivatablePanel* K2Node_DynamicCast_AsCommon_Activatable_Panel, bool K2Node_DynamicCast_bSuccess_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class UUserWidget* K2Node_CustomEvent_UserWidget_1, bool CallFunc_AllowInGameMatchmaking_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Not_PreBool_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_6, bool CallFunc_BooleanAND_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_5, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue_5, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_6, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UMatchXPTotalEntry_C* K2Node_DynamicCast_AsMatch_XPTotal_Entry, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 K2Node_Event_CombatXp, int32 K2Node_Event_SurvivalXp, int32 K2Node_Event_BonusMedalXp, int32 K2Node_Event_MatchXp, int32 K2Node_Event_TotalXpGained, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_bNewInputEnabled, bool CallFunc_IsMatchMakingButtonEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FGameplayTag& K2Node_Event_Tag, int32 K2Node_Event_Xp, int32 K2Node_Event_BonusPct, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_6, enum class EPostGameHUDState K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_7, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1, int32 K2Node_Select_Default_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText K2Node_Select_Default_3, class UWidget* CallFunc_FindParentWidgetOfType_ReturnValue, class UPostGameScreenArray_C* K2Node_DynamicCast_AsPost_Game_Screen_Array, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Variable_4, class UWidget* K2Node_Select_Default_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, bool CallFunc_CanFollowNextOrPreviousTeammate_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_8, bool CallFunc_BooleanAND_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_5, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class AFortPlayerControllerGameplay* K2Node_DynamicCast_AsFort_Player_Controller_Gameplay, bool K2Node_DynamicCast_bSuccess_5, class AFortPlayerControllerGameplay* K2Node_DynamicCast_AsFort_Player_Controller_Gameplay_1, bool K2Node_DynamicCast_bSuccess_6, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_ShouldShowItemShopButton_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_9, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_6, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1, bool K2Node_DynamicCast_bSuccess_7, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_Is_Showing_Match_Stats_Is_Showing, bool Temp_bool_Variable_5, enum class ESlateVisibility K2Node_Select_Default_7, bool CallFunc_IsMatchMakingButtonEnabled_ReturnValue_1);
};

}


