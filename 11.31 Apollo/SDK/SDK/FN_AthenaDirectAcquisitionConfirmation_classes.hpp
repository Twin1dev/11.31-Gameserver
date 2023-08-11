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

// 0xA8 (0x6D8 - 0x630)
// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C
class UAthenaDirectAcquisitionConfirmation_C : public UFortStoreFrontOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x630(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C* AthenaDirectAcquisitonDetails_BattlePassStarDetails; // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CancelButton;                                      // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x648(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Currency1ItemImage2;                               // 0x650(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CurrencyVB;                                        // 0x658(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ItemRewardsSB;                                     // 0x660(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x668(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMTXButton_C*                          MTXButton;                                         // 0x670(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* NonrefundableText;                                 // 0x678(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              O_Sale_PreviousPrice;                              // 0x680(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OfferName;                                         // 0x688(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PurchaseButton;                                    // 0x690(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOfferDisplayPrice1;                            // 0x698(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOriginalPrice1;                                // 0x6A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         CanPurchase;                                       // 0x6A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPurchasing;                                      // 0x6A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A77[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        NumberToPurchase;                                  // 0x6AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanPurchaseLeft;                                   // 0x6B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanPurchaseRight;                                  // 0x6B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanChangeQuantity;                                 // 0x6B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A78[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UMulticastInlineDelegateProperty_            Confirm;                                           // 0x6B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            Decline;                                           // 0x6C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaDirectAcquisitionConfirmation_C");
		return Clss;
	}

	void SetPurchaseNumber(int32 InNumToPurchse);
	void UpdateCatalogOfferName(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_GetName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void UpdateItemList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UAthenaStoreReward_C* CallFunc_Create_ReturnValue, TArray<class UFortAccountItemDefinition*>& CallFunc_GetGrantedItemDefinitions_GrantedItems, class UFortAccountItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetItemQuantity_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetupPrice(class UWidget* PriceContainer, class UTextBlock* NormalPriceText, class UWidget* SalePriceContainer, class UTextBlock* SalePriceText, class UImage* CurrencyImage, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateFromOffer(const TArray<class FString>& PlaceholderOneRecipient, TArray<class FString>& K2Node_MakeArray_Array, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsRefundable_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnOfferSet();
	void BP_OnActivated();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaDirectAcquisitionConfirmation(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void Decline__DelegateSignature();
	void Confirm__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
