#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x159 (0x411 - 0x2B8)
// WidgetBlueprintGeneratedClass Scoreboard_UI.Scoreboard_UI_C
class UScoreboard_UI_C : public UMinigameWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BackingFullOpacity;                                // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideShowDisplay;                                   // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      WinnerDisplayIntro;                                // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          All;                                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Backing;                                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BackingTris;                                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ColumnHolder;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CountdownHeaderlarge;                              // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CountdownHeaderSmall;                              // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CountdownText;                                     // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            DataScrollBox;                                     // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      GameStats;                                         // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Glow;                                              // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_110;                                         // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_900;                                         // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1007;                                        // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1009;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PlacementMarker;                                   // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RoundsCountTotal;                                  // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ScoreboardDisplay;                                 // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TransitionInfo;                                    // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      WinDescription;                                    // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               WinDescriptionColor;                               // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              WinnerDisplay;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      WinnerName;                                        // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               WinnerNameColor;                                   // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          WinnerVBox;                                        // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIgnoreDisplayMinigameEndUI;                       // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bShouldUpdateStats;                                // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7242[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  TeamColors;                                        // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bInGameScoreboard;                                 // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7243[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScoreboard_UI_ColumnLabels_C*         ScoreboardColumnWidget;                            // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UScoreboard_Team_Widget_C*>     TeamScoreDisplays;                                 // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UScoreboard_UI_Row_C*>          PlayerScoreDisplays;                               // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                          UpdateDisplayTimerHandle;                          // 0x3F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTeamGame;                                       // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsRoundsGame;                                      // 0x3F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7244[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StatUpdateRate;                                    // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMinigameScoreboardPlayerRow>  TestData;                                          // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	enum class EMinigameWinCondition             WinCondition;                                      // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UScoreboard_UI_C* GetDefaultObj();

	void GetTargetPlayerState(class APlayerState** PlayerState, class ASpectatorPawn* SpectatorPawn, class APlayerController* OwningPlayer, bool CallFunc_IsValid_ReturnValue, class ASpectatorPawn* CallFunc_GetSpectatorPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue);
	void GetTargetScoreRow(class APlayerState* TargetPlayerState, class UWidget** Widget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UScoreboard_Team_Widget_C* K2Node_DynamicCast_AsScoreboard_Team_Widget, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetWidgetForPlayerState_Widget, class UScoreboard_UI_Row_C* K2Node_DynamicCast_AsScoreboard_UI_Row, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ShowTargetPlayerStateInScrollBox(class APlayerState* TargetPlayerState, class APlayerState* CallFunc_GetTargetPlayerState_PlayerState, class UWidget* CallFunc_GetTargetScoreRow_Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void AnimateBacking(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HideWinnerDisplay();
	void ShowWinnerDisplay(class FText Winner_Name, class FText Win_Description, bool GameHasWinner, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetCountdownText(class FText Text);
	void UpdateRoundDisplay(bool GameEnd, enum class EMinigameScoreboardStates ScoreboardState, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, bool CallFunc_IsLastRound_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, enum class EMinigameScoreboardStates Temp_byte_Variable_2, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2);
	void SetStatsColumns(const TArray<class FText>& ScoreboardStatNames, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class FText>& CallFunc_GetScoreboardStateNames_OutNames);
	void IntroAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HideUnusedRows(bool bTeamGame, int32 NumBuckets, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, int32 Temp_int_Loop_Counter_Variable_1, class UScoreboard_UI_Row_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UScoreboard_Team_Widget_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_3);
	class UScoreboard_Team_Widget_C* MakeTeamScoreboardRow(struct FMinigameScoreboardBucketRow& MinigameScoreboardBucketRow, bool IsRoundsGame, float CallFunc_Conv_IntToFloat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UScoreboard_Team_Widget_C* CallFunc_Create_ReturnValue);
	void ResetScoreDisplays(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UScoreboard_Team_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleScoreboardColumnsData(TArray<class FText>& ScoreboardStatNames, bool bTeamGame, bool bDisplayingWins, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScoreboard_UI_ColumnLabels_C* CallFunc_Create_ReturnValue);
	void MakePlayerScoreboardRow(const struct FMinigameScoreboardPlayerRow& PlayerRow, int32 PlayerIndex, bool ShowWins, int32 NumPlayers, int32 Standing, class UScoreboard_UI_Row_C** ScoreboardRow, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_Array_IsValidIndex_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UScoreboard_UI_Row_C* CallFunc_Create_ReturnValue);
	void GetScoreboardStateNames(TArray<class FText>* OutNames, const TArray<class FText>& NamesArray, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void UpdateStats(bool ShowGameTotals, enum class EMinigameScoreboardStates ScoreboardState, int32 NumBuckets, const struct FMinigameScoreboardBucketRow& CurrentBucket, const TArray<struct FMinigameScoreboardBucketRow>& ScoreboardBucketRows, int32 CurrentIndex, bool bIsRoundsGame, const TArray<struct FMinigameStatRow>& StatRows, class UVerticalBox* CurrentPlayerBox, const TArray<class FText>& ScoreboardStatNames, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UScoreboard_Team_Widget_C* CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, class UScoreboard_UI_Row_C* CallFunc_Array_Get_Item_1, TArray<struct FMinigameScoreboardBucketRow>& CallFunc_GetScoreboardRows_OutScoreboardRows, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FMinigameScoreboardBucketRow& CallFunc_Array_Get_Item_2, const struct FMinigameScoreboardPlayerRow& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue, class UScoreboard_UI_Row_C* CallFunc_MakePlayerScoreboardRow_ScoreboardRow, int32 CallFunc_Array_Length_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, class UScoreboard_Team_Widget_C* CallFunc_MakeTeamScoreboardRow_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1);
	void DoHideUI();
	void PreConstruct(bool IsDesignTime);
	void ShowMinigameEndUI(bool ShowGameTotals, enum class EMinigameScoreboardStates ScoreboardState, float DisplayTime);
	void HideMinigameEndUI();
	void FullscreenMapToggle(bool bFullscreenMapVisible);
	void DoShowUI();
	void UpdateActiveStats();
	void ExecuteUbergraph_Scoreboard_UI(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_ShowGameTotals, enum class EMinigameScoreboardStates K2Node_CustomEvent_ScoreboardState, float K2Node_CustomEvent_DisplayTime, int32 CallFunc_Round_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_bFullscreenMapVisible, int32 Temp_int_Loop_Counter_Variable, enum class EMinigameFullscreenMapWidgetType CallFunc_GetMinigameMapPanelDisplayType_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const struct FMinigameScoreboardPlayerRow& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UScoreboard_UI_Row_C* CallFunc_MakePlayerScoreboardRow_ScoreboardRow, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}


