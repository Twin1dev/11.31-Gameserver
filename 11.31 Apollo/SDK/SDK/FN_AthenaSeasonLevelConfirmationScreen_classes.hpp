#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x688 - 0x560)
// WidgetBlueprintGeneratedClass AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C
class UAthenaSeasonLevelConfirmationScreen_C : public UFortSeasonLevelConfirmationScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x560(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* AthenaDirectAcquisitonDetails_RefundDisclaimer;    // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              BulkMessageAlertSB;                                // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BulkTierMessage;                                   // 0x578(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CloseIcon;                                         // 0x580(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ConfirmState;                                      // 0x588(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        DecreasePurchaseTier;                              // 0x590(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              FramingWidget;                                     // 0x598(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HeaderText;                                        // 0x5A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        IncreasePurchaseTier;                              // 0x5A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ItemRewardsSB;                                     // 0x5B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        MobileCloseButton;                                 // 0x5B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MobileCloseOverlay;                                // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PurchaseBtn;                                       // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PurchasingState;                                   // 0x5D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 StateSwitcher;                                     // 0x5D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TierTitle;                                         // 0x5E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VBuckIcon;                                         // 0x5E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      VBuckPurchasePrice;                                // 0x5F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int32, class UFortSeasonPassLevelInfo*> AllBattlePassLevels;                               // 0x5F8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortSeasonPassLevelInfo*              BaseLevel;                                         // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BuyExtraLevels;                                    // 0x650(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxBattlePassLevel;                                // 0x654(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                BuyTierOfferID;                                    // 0x658(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        MaxExtraLevelsYouCanBuyInOneGo;                    // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6593[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSeasonReward_C*                 FirstWidget;                                       // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Handle_BackAction;                                 // 0x678(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaSeasonLevelConfirmationScreen_C* GetDefaultObj();

	class UWidget* GetWidgetForFramingViewedItem();
	void SelectReward(int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAthenaSeasonReward_C* K2Node_DynamicCast_AsAthena_Season_Reward, bool K2Node_DynamicCast_bSuccess);
	void HandleBack(bool* bPassThrough);
	void ModifyNumberOfTiersToBuy(int32 Delta, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void GenerateItemWidgets(bool FirstItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UFortItem*>& CallFunc_GetRewards_Output_Get, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortItem* CallFunc_Array_Get_Item, class UAthenaSeasonReward_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	int32 GetNumberOfTiersBuying(int32 CallFunc_Add_IntInt_ReturnValue);
	class FText GetVBuckPrice(int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void GetRewards(TArray<class UFortItem*>* Output_Get, const TArray<class UFortItem*>& Rewards, int32 Temp_int_Variable, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UFortSeasonPassLevelInfo* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class UFortItem*>& CallFunc_GetRewardItems_ReturnValue, TArray<class UFortItem*>& CallFunc_GetRewardItems_ReturnValue_1);
	void GetHeaderText(class FText* Result, int32* TierPurchaseNumber, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_GetLevel_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default);
	void Setup(class UFortSeasonPassLevelInfo* Level, TMap<int32, class UFortSeasonPassLevelInfo*>& AllLevels, int32 MaxLevel, int32 PurchaseLevel, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetBattleBookPurchaseLimit_MaxNumLevelsPossibleToPurchase, int32 CallFunc_GetBattleBookPurchaseLimit_BonusLevelsGranted, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue);
	void InitWidgets(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_StoreHasStarsForSale_ReturnValue, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class FText CallFunc_GetVBuckPrice_ReturnValue, class FText CallFunc_GetHeaderText_Result, int32 CallFunc_GetHeaderText_TierPurchaseNumber, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnPurchaseFinished(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& OfferId);
	void BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_396_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_429_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BP_OnActivated();
	void BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaSeasonLevelConfirmationScreen(int32 EntryPoint, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetBattleBookPurchaseLimit_MaxNumLevelsPossibleToPurchase, int32 CallFunc_GetBattleBookPurchaseLimit_BonusLevelsGranted, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, bool K2Node_CustomEvent_bSuccess, TArray<struct FPurchasedItemInfo>& K2Node_CustomEvent_PurchasedItems, const class FString& K2Node_CustomEvent_OfferId, int32 CallFunc_GetNumberOfTiersBuying_ReturnValue, int32 CallFunc_GetNumberOfTiersBuying_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_2, enum class EOfferPurchaseError CallFunc_PurchaseOffer_ReturnValue, bool CallFunc_IsUsingTouch_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_HandleBack_bPassThrough, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_GetNumberOfTiersBuying_ReturnValue_2, int32 CallFunc_GetNumberOfTiersBuying_ReturnValue_3);
};

}


