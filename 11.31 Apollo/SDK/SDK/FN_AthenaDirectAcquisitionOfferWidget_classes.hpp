#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C0 (0xDC8 - 0xC08)
// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C
class UAthenaDirectAcquisitionOfferWidget_C : public UFortDirectAcquisitionOfferWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CarouselTransition;                                // 0xC10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0xC18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USpacer*                               AnimatedBarSpacer;                                 // 0xC20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         AnimatedTimerBox;                                  // 0xC28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaDirectAcquisitionOffer_SalesTextBanner_C* AthenaDirectAcquisitionOffer_PercentageOffBanner;  // 0xC30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaDirectAcquisitionOffer_SpecialBanner_C* AthenaDirectAcquisitionOffer_SpecialBanner;        // 0xC38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BattlePassGlow;                                    // 0xC40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderRarityColored;                               // 0xC48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BottomBorder;                                      // 0xC50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Check;                                             // 0xC58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlockOfferRemainingText;                 // 0xC60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Currency1ItemImage;                                // 0xC68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CustomBadge;                                       // 0xC70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              CustomBadgeOverlay;                                // 0xC78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HighlightGlow;                                     // 0xC80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                I_StrikeThrough;                                   // 0xC88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemSeriesOrRarity_C*                 ItemSeriesOrRarity;                                // 0xC90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LockImage;                                         // 0xC98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MainImage;                                         // 0xCA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NameText;                                          // 0xCA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              O_Sale_PreviousPrice;                              // 0xCB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       OwnedSwitcher;                                     // 0xCB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OwnedText;                                         // 0xCC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Sale_PreviousPrice;                                // 0xCC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SBPriceBox;                                        // 0xCD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SBScaleDownArt;                                    // 0xCD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SBTileSize;                                        // 0xCE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                        SeriesOverrideTexture;                             // 0xCE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ShortDescriptionText;                              // 0xCF0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOfferDisplayPrice;                             // 0xCF8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBHeaderAndDescription;                            // 0xD00(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcherVIOLATOR;                            // 0xD08(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         LargeTile;                                         // 0xD10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5E24[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_StrikeThrough;                                 // 0xD18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MTXStyle;                                          // 0xD20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5E25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_CarouselTimerProgressBar;                      // 0xD28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           Carousel_NextItemImage;                            // 0xD30(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        CarouselLoopTimeRemaining;                         // 0xDB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CarouselLoopTimer;                                 // 0xDBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   BattleStarTemplate;                                // 0xDC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaDirectAcquisitionOfferWidget_C* GetDefaultObj();

	void UpdateSeriesBlock(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue);
	void Bundle_Short_Text(class FText* Text, int32 Not_owned_bundle_items__local_, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, TArray<struct FBundledItemInfo>& CallFunc_GetDynamicBundleItems_Items, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void TryToResetCarouselTimer(bool CallFunc_Greater_FloatFloat_ReturnValue);
	bool HasGroupedOffers(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void GetOfferIndexAndCountText(int32* OfferIndex, class FText* OfferDisplayCount, int32* NextOfferIndex, class FText* NextOfferDisplayCount, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Percent_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	void UpdateBadge(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortMtxOfferData* CallFunc_GetOfferDisplayAsset_ReturnValue, bool CallFunc_HasDisplayAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateStyle_Sizing(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot_1, bool K2Node_DynamicCast_bSuccess_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void UpdateStyle_Border(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortMtxOfferData* CallFunc_GetOfferDisplayAsset_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, const struct FFortColorPalette& CallFunc_GetRarityOrSeriesColors_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2);
	void UpdateStyle_MainText(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, const struct FFortColorPalette& CallFunc_GetRarityOrSeriesColors_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, bool CallFunc_IsUnique_ReturnValue);
	void SetupSaleInfo(class FText SaleText, class FText NormalPrice, const class FString& BannerOverrideTag, bool bHasSale, bool bHasBattlePassStars, int32 INumOfBattlePassStars, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateSaleStatus(const class FString& CallFunc_GetPersistentName_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, enum class ECatalogSaleType Temp_byte_Variable, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const class FString& CallFunc_GetBannerOverrideTag_ReturnValue, bool CallFunc_GetMetaAsBool_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, int32 CallFunc_GetItemQuantity_ReturnValue, int32 CallFunc_GetItemOfferCount_ReturnValue, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ECatalogSaleType CallFunc_GetSaleType_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, class FText CallFunc_GetNormalPrice_ReturnValue, class FText CallFunc_GetSaleText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class FText K2Node_Select_Default);
	void Setup_Price(bool Temp_bool_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_GetOfferId_ReturnValue, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_Select_Default);
	void UpdateShortDescription(class FText CallFunc_Bundle_Short_Text_Text, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_GetFirstGrantQuantity_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue, class FText CallFunc_GetName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsUnique_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_HasRequirement_RequirementText, bool CallFunc_HasRequirement_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateName(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_HasCatalogOfferName_CatalogOfferName, bool CallFunc_HasCatalogOfferName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetShortName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_GetItemTypeText_ReturnValue, bool CallFunc_IsUnique_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetupPrice(int32 PriceIndex, class UItemCount_C* PriceWidget, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateStyle(TSoftObjectPtr<class UTexture2D> CallFunc_GetFirstOfferSeriesBackgroundTexture_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void UpdateAvailability(bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const class FString& CallFunc_GetOfferId_ReturnValue, bool CallFunc_IsOwned_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, const class FString& CallFunc_GetOfferId_ReturnValue_1, bool CallFunc_IsUnique_ReturnValue, bool CallFunc_IsOwned_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Select_Default_2, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool Temp_bool_Variable_3, enum class ESlateVisibility K2Node_Select_Default_3);
	void OfferSet();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnOfferSet();
	void HandleOfferPurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void OnUpdateStatus();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Construct();
	void OnOfferAdded();
	void AnimEvent_Carousel_ImageSwap();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void PlayAnim_CarouselTransition();
	void BP_OnEntryReleased();
	void OnOfferTileBrushLoaded(struct FSlateBrush& OfferBrush);
	void SetupThumbnailRenderer(class UFortItemThumbnailRenderer* InThumbnailRenderer);
	void UpdateCarousel(float InDeltaTime);
	void ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget(int32 EntryPoint, int32 Temp_int_Variable, bool K2Node_Event_bIsSelected, int32 Temp_int_Variable_1, bool K2Node_CustomEvent_bSuccess, TArray<struct FPurchasedItemInfo>& K2Node_CustomEvent_PurchasedItems, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UObject* K2Node_Event_ListItemObject, class UFortStoreFrontOfferInfo* K2Node_DynamicCast_AsFort_Store_Front_Offer_Info, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool K2Node_Event_bIsExpanded, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_GetOfferIndexAndCountText_OfferIndex, class FText CallFunc_GetOfferIndexAndCountText_OfferDisplayCount, int32 CallFunc_GetOfferIndexAndCountText_NextOfferIndex, class FText CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount, int32 CallFunc_GetOfferIndexAndCountText_OfferIndex_1, class FText CallFunc_GetOfferIndexAndCountText_OfferDisplayCount_1, int32 CallFunc_GetOfferIndexAndCountText_NextOfferIndex_1, class FText CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount_1, bool CallFunc_HasGroupedOffers_ReturnValue, bool CallFunc_HasGroupedOffers_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSlateBrush& K2Node_Event_OfferBrush, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue_2, class UFortItemThumbnailRenderer* K2Node_Event_InThumbnailRenderer, int32 CallFunc_GetRendererIndex_ReturnValue, class ABP_CaptureItem_C* CallFunc_GetOrCreateCaptureActor_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, int32 K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetOfferIndexAndCountText_OfferIndex_2, class FText CallFunc_GetOfferIndexAndCountText_OfferDisplayCount_2, int32 CallFunc_GetOfferIndexAndCountText_NextOfferIndex_2, class FText CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount_2, class UFortStoreFrontOfferInfo* CallFunc_Array_Get_Item, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float K2Node_Event_InDeltaTime, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue);
};

}


