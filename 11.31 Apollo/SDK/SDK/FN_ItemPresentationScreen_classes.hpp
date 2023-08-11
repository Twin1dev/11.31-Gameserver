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

// 0xD1 (0x709 - 0x638)
// WidgetBlueprintGeneratedClass ItemPresentationScreen.ItemPresentationScreen_C
class UItemPresentationScreen_C : public UFortItemPresentationScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x638(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      PaidItemFadeInAll;                                 // 0x640(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PaidItemFadeIn;                                    // 0x648(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ButtonScrollIn;                                    // 0x650(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Fade;                                              // 0x658(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Equipped;                                          // 0x660(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      InitialStateSet;                                   // 0x668(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      UnOwnedMessage;                                    // 0x670(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Collected;                                         // 0x678(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x680(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      ClaimMoreRewards;                                  // 0x688(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              DefaultContent;                                    // 0x690(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               EntryBoxDummy_PaidItems;                           // 0x698(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FakeHackGradient;                                  // 0x6A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LeftsideContentSwitcher;                           // 0x6A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PaidItemBacking;                                   // 0x6B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RegularButtons;                                    // 0x6B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_ListView;                                  // 0x6C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_Buttons;                                  // 0x6C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_FreeVsPaidItemsEntryBox;                  // 0x6D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_FreeVsPaidItemsListView;                  // 0x6D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWinterfest_CabinLogo_C*               Winterfest_CabinLogo;                              // 0x6E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          WinterfestAnimBoundVB;                             // 0x6E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        WinterfestButtons;                                 // 0x6F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              WinterfestContent;                                 // 0x6F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bDelayIntro;                                       // 0x700(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4588[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        TimeFloat;                                         // 0x704(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bSwitchingPhases;                                  // 0x708(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemPresentationScreen_C");
		return Clss;
	}

	void Handle_PaidItem_Intro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Handle_Fade(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Handle_Intro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Handle_Animation_InitialState(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void BP_OnActivated();
	void OnUpdateHeaderInformation(struct FFortItemHeaderInformation& HeaderInformation);
	void OnUpdateItemInformation(class UFortItem* FortItem);
	void OnUpdateOwnedItemText(bool bShowText);
	void OnUpdateItemEquipped();
	void OnInitialIconAnimation(bool bUsingListView);
	void OnDisplayEquipButton(bool bCanEquip);
	void OnCloseScreen();
	void OnUpdateNextButtonText(bool bShowNext);
	void OnFinishDisplayingHotItems(bool bShowOtherRewards);
	void OnDisplayItemsCollectedText(bool bCloseScreen);
	void SwitchToPaidItems();
	void OnUpdateVaultWorld(class AFortItemPreviewVaultWorld* FortItemPreviewVaultWorld, bool bIsSpecialEventRewards);
	void OnUpdateGradientColor(bool bIsWinterfestReward, struct FLinearColor& PresentColor);
	void ExecuteUbergraph_ItemPresentationScreen(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UItemInfoPresentationWidget_C* K2Node_DynamicCast_AsItem_Info_Presentation_Widget, bool K2Node_DynamicCast_bSuccess, class UItemInfoPresentationWidget_C* K2Node_DynamicCast_AsItem_Info_Presentation_Widget_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllEntries_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UItemPresentationGenericRewardHeader_C* K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header, bool K2Node_DynamicCast_bSuccess_2, class UItemPresentationGenericRewardHeader_C* K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header_1, bool K2Node_DynamicCast_bSuccess_3, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FFortItemHeaderInformation& K2Node_Event_HeaderInformation, class UFortItem* K2Node_Event_FortItem, bool K2Node_Event_bShowText, bool K2Node_Event_bUsingListView, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_Array_Get_Item_1, class UItemPresentationEntry_C* K2Node_DynamicCast_AsItem_Presentation_Entry, bool K2Node_DynamicCast_bSuccess_4, class UItemPresentationEntry_C* K2Node_DynamicCast_AsItem_Presentation_Entry_1, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_Multiply_IntFloat_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllEntries_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item_2, class UItemPresentationEntry_C* K2Node_DynamicCast_AsItem_Presentation_Entry_2, bool K2Node_DynamicCast_bSuccess_6, int32 Temp_int_Array_Index_Variable_2, bool K2Node_Event_bCanEquip, int32 Temp_int_Array_Index_Variable_3, class UObject* CallFunc_Array_Get_Item_3, float CallFunc_Multiply_IntFloat_ReturnValue_1, class UItemPresentationEntry_C* K2Node_DynamicCast_AsItem_Presentation_Entry_3, bool K2Node_DynamicCast_bSuccess_7, bool K2Node_Event_bShowNext, class USoloButton_C* K2Node_DynamicCast_AsSolo_Button, bool K2Node_DynamicCast_bSuccess_8, bool K2Node_Event_bShowOtherRewards, bool K2Node_Event_bCloseScreen, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class USoloButton_C* K2Node_DynamicCast_AsSolo_Button_1, bool K2Node_DynamicCast_bSuccess_9, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UItemInfoPresentationWidget_C* K2Node_DynamicCast_AsItem_Info_Presentation_Widget_2, bool K2Node_DynamicCast_bSuccess_10, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker, bool K2Node_DynamicCast_bSuccess_11, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker_1, bool K2Node_DynamicCast_bSuccess_12, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker, bool K2Node_DynamicCast_bSuccess_13, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1, bool K2Node_DynamicCast_bSuccess_14, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2, bool K2Node_DynamicCast_bSuccess_15, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker_2, bool K2Node_DynamicCast_bSuccess_16, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker_3, bool K2Node_DynamicCast_bSuccess_17, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3, bool K2Node_DynamicCast_bSuccess_18, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class AFortItemPreviewVaultWorld* K2Node_Event_FortItemPreviewVaultWorld, bool K2Node_Event_bIsSpecialEventRewards, TArray<class AFrontendCamera_VaultRotator_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFrontendCamera_VaultRotator_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue, class AVaultWorld_C* K2Node_DynamicCast_AsVault_World, bool K2Node_DynamicCast_bSuccess_19, class AVaultRotator_C* CallFunc_GetVaultRotator_VaultRotator, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TArray<class AFrontendCamera_VaultRotator_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AFrontendCamera_VaultRotator_C* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_Event_bIsWinterfestReward, const struct FLinearColor& K2Node_Event_PresentColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class USoloButton_WinterFest_C* K2Node_DynamicCast_AsSolo_Button_Winter_Fest, bool K2Node_DynamicCast_bSuccess_20);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
