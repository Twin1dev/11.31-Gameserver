#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x528 - 0x3C8)
// WidgetBlueprintGeneratedClass BattlePassPreview.BattlePassPreview_C
class UBattlePassPreview_C : public UBattlePassScreenPreview
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      DisplaySpecialLockString;                          // 0x3D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ScreenIntro;                                       // 0x3D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ScreenIntro_OLD;                                   // 0x3E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RevealSeasonItemRewardIcon;                        // 0x3E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideSeasonItemRewardIcon;                          // 0x3F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CycleSeasonItemRewardIcon;                         // 0x3F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          AdditionalRewardsListContainer;                    // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       AlsoEarnedSwitcher;                                // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  AlterEgoUnlockRichText;                            // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnnualPassAccountFlair_C*             AnnualPassAccountFlair;                            // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSeasonItemRewardIcon_C*         AthenaSeasonItemRewardIcon;                        // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BottomAreaBacking;                                 // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BottomAreaTris;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             BottomContentArea;                                 // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BottomLine;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BpIcon;                                            // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_PurchaseBattlePass_OLD;                     // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        CharacterSlices;                                   // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_74;                                          // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Past100Text;                                       // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RotatingRewardVBox;                                // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_2;                                        // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Chapter;                                      // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Characters_Earned;                            // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Other_Earned;                                 // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_PaysForSelf;                                  // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_RotatingItemName;                             // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_RotatingLevel;                                // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Season;                                       // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_VBucks_Earned;                                // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TopLine;                                           // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Underline;                                         // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               UpsellTag;                                         // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    HBMinusSlotMinus2;                                 // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    HBMinusSlotMinus1;                                 // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    HBMinusSlotMinus3;                                 // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    HBMinusSLOTMinus4;                                 // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    HBMinusSlotMinus5;                                 // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    HBMinusSlotMinus6;                                 // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    HBMinusSlotMinus7;                                 // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    HBMinusSlotMinus8;                                 // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             NextCycleUpsellReward;                             // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UpsellIconVisible;                                 // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NextCycle_ReadyToUnlock;                           // 0x521(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NextCycle_LevelUnlocked;                           // 0x524(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBattlePassPreview_C* GetDefaultObj();

	void CallRenderSwapOnBlade(class UObject* Object, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget, bool K2Node_DynamicCast_bSuccess);
	void SetRotatingPreviewData(class UFortItem* ItemToDisplay, bool ReadyToUnlock, int32 LevelUnlocked, class FText Temp_text_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default);
	void HandleUnhovered(class UBattlePassScreenPreviewRewardWidget* Button, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget, bool K2Node_DynamicCast_bSuccess, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_5, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_6, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_7, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_7, bool K2Node_DynamicCast_bSuccess_7);
	void ReplaceUpsellIcon();
	void SetOtherRewardsEarned(class UTextBlock* TextOtherRewards, struct FPreviewUnlockRewardData& UpsellUnlockRewardData, enum class ESlateVisibility Temp_byte_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void SetVbucksEarned(class UTextBlock* TextVbucks, struct FPreviewUnlockRewardData& UpsellUnlockRewardData, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetCharactersEarned(class UTextBlock* TextCharacters, struct FPreviewUnlockRewardData& UpsellUnlockRewardData, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_GetRewardCharacterCount_CharacterCount, bool CallFunc_GetRewardCharacterCount_HasCharacters, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility Temp_byte_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility GetAdditionalRewardsVisibility(struct FPreviewUnlockRewardData& UpsellUnlockRewardData, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default);
	void GetRewardCharacterCount(struct FPreviewUnlockRewardData& UpsellUnlockRewardData, int32* CharacterCount, bool* HasCharacters, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleInitData(struct FPreviewUnlockData& UpsellUnlockData, class UFortItem* SinglePreviewReward, bool SingleRewardReadyToUnlock, int32 SingleRewardUnlockLevel, int32 RewardUnlockLevel, bool bRewardReadyToUnlock, class UFortItem* SinglePreviewRewardData, bool bEarnedRewardsHasCharacters, const struct FPreviewUnlockRewardData& EarnedRewards, const struct FPreviewUnlockRewardData& InstantRewards, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility CallFunc_GetAdditionalRewardsVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitData(struct FPreviewUnlockData& Data, class UFortItem* SinglePreviewCycleReward, bool bReadyToUnlock, int32 LevelUnlocked, bool bPurchasedAnnualPass);
	void BndEvt__Button_ViewAllRewards_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleOnGainedFocus();
	void OnCyclePreviewReward(class UFortItem* NextReward, bool bReadyToUnlock, int32 LevelUnlocked);
	void BndEvt__Currency_Widget_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Character_Widget2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Character_Widget3_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Character_Widget4_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Character_Widget5_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Character_Widget6_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Character_Widget7_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Character_Widget1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_BattlePassPreview(int32 EntryPoint, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_1, bool K2Node_DynamicCast_bSuccess_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_2, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_2, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_2, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_3, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue_3, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_4, bool K2Node_DynamicCast_bSuccess_4, const struct FPreviewUnlockData& K2Node_Event_Data, class UFortItem* K2Node_Event_SinglePreviewCycleReward, bool K2Node_Event_bReadyToUnlock_1, int32 K2Node_Event_LevelUnlocked_1, bool K2Node_Event_bPurchasedAnnualPass, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_8, class UBattlePassViewRewardsScreen_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_3, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_5, bool K2Node_DynamicCast_bSuccess_5, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_6, bool K2Node_DynamicCast_bSuccess_6, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_5, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_6, bool CallFunc_IsValid_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UFortItem* K2Node_Event_NextReward, bool K2Node_Event_bReadyToUnlock, int32 K2Node_Event_LevelUnlocked, class UCommonButton* K2Node_ComponentBoundEvent_Button_7, bool CallFunc_IsValid_ReturnValue_6, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_7, bool K2Node_DynamicCast_bSuccess_7, class UCommonButton* K2Node_ComponentBoundEvent_Button_6, class UCommonButton* K2Node_ComponentBoundEvent_Button_5, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_8, bool K2Node_DynamicCast_bSuccess_8, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_9, bool K2Node_DynamicCast_bSuccess_9, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_7, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsValid_ReturnValue_7, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_10, bool K2Node_DynamicCast_bSuccess_10, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_5, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_11, bool K2Node_DynamicCast_bSuccess_11, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_6, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_12, bool K2Node_DynamicCast_bSuccess_12, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_13, bool K2Node_DynamicCast_bSuccess_13, bool K2Node_Event_IsDesignTime, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_14, bool K2Node_DynamicCast_bSuccess_14, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_15, bool K2Node_DynamicCast_bSuccess_15, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_8, enum class ESlateVisibility K2Node_Select_Default);
};

}


