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

// 0xC8 (0x338 - 0x270)
// WidgetBlueprintGeneratedClass AthenaSeasonPageWidget.AthenaSeasonPageWidget_C
class UAthenaSeasonPageWidget_C : public USeasonPassPageWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Backing_Premium;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BGActiveSeasonNumberText;                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderGradFree;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderGradPurchasable;                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderPurchaseDarkenCB;                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_146;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Lock;                                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            MainGridPanel;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ColumnsForFull;                                    // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ColumnsForInsert;                                  // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinLevel;                                          // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxLevel;                                          // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            PageLeft;                                          // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            PageRight;                                         // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        MAX_COLUMNS;                                       // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5587[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               FirstFree;                                         // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               LastFree;                                          // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               FirstPaid;                                         // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               LastPaid;                                          // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SeasonPassMaxLevel;                                // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Full;                                              // 0x314(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5588[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<int32>                                DummyArray;                                        // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                            SoundOnBeginReveal;                                // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 LevelPageWidgetSwitcher;                           // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSeasonPageWidget_C");
		return Clss;
	}

	void GetLastLevel(int32* LastLevel);
	void UpdateDynamicData(enum class ESlateVisibility Temp_byte_Variable, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCurrentSeasonNumberAsText_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool CallFunc_OwnsSeasonPass_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void GetFirstLevel(int32* FirstLevel);
	class UAthenaSeasonLevelFreeRewardsWidget_C* AddFreeRewards(int32 InColumn, class UFortSeasonPassLevelInfo* LevelInfo, int32 CallFunc_GetNumRewardItems_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaSeasonLevelFreeRewardsWidget_C* CallFunc_Create_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue);
	void AddPaidRewards(int32 InColumn, class UFortSeasonPassLevelInfo* LevelInfo, class UAthenaSeasonLevelPaidRewardsWidget_C** OutputPin, int32 CallFunc_GetNumRewardItems_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaSeasonLevelPaidRewardsWidget_C* CallFunc_Create_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue);
	void PagePopulationComplete(class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot_1, bool K2Node_DynamicCast_bSuccess_1, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot_2, bool K2Node_DynamicCast_bSuccess_2);
	bool ContainsLevel(int32 Level, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void IsFull(bool* Full);
	void AddLevelWidgets(class UFortSeasonPassLevelInfo* LevelInfo, TArray<class USeasonPassLevelWidget*>* LevelWidgets, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_GetLevel_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_ContainsChaseReward_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_GetNumRewardItems_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UAthenaSeasonLevelPaidRewardsWidget_C* CallFunc_AddPaidRewards_OutputPin, class UAthenaSeasonLevelFreeRewardsWidget_C* CallFunc_AddFreeRewards_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaSeasonLevelHeaderWidget_C* CallFunc_Create_ReturnValue, TArray<class USeasonPassLevelWidget*>& K2Node_MakeArray_Array, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetSeasonPassMaxLevel_ReturnValue);
	void Construct();
	void Destruct();
	void NavigatePageRight();
	void NavigatePageLeft();
	void OnBattlePassChanged();
	void ScreenShown();
	void ExecuteUbergraph_AthenaSeasonPageWidget(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_ShouldPlayInto_ReturnValue, class USeasonPassLevelWidget* K2Node_DynamicCast_AsSeason_Pass_Level_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PageRight__DelegateSignature();
	void PageLeft__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
