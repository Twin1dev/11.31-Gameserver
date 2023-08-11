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

// 0xA9 (0x571 - 0x4C8)
// WidgetBlueprintGeneratedClass StoreMain_Root.StoreMain_Root_C
class UStoreMain_Root_C : public UFortMtxStoreRootBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x4D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_0;                                    // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_3;                                 // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CurrencyNotificationBorder;                        // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CurrencyNotificationText;                          // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_142;                                         // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            NewLTMGrid;                                        // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NEWLTMOfferSection;                                // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NewNoOffersBox;                                    // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NewPurchasingDisabledBox;                          // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NewSpinner;                                        // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 NewSwitcherItemsProgress;                          // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            NewVBuckGrid;                                      // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NewVbuckOffers;                                    // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NewVBuckSection;                                   // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             OfferScaleBoxRoot;                                 // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_0;                                         // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAudioComponent*                       Ambient_Sound;                                     // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               InitiallyFocusedOffer;                             // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowingCampaignUpsell;                            // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreMain_Root_C");
		return Clss;
	}

	class UWidget* BP_GetDesiredFocusTarget();
	void GetVisibilityByChildrenPresence(class UPanelWidget* Panel, enum class ESlateVisibility* NewParam, bool Temp_bool_Variable, bool CallFunc_HasAnyChildren_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void HandleAllOffersGenerated(enum class ESlateVisibility CallFunc_GetVisibilityByChildrenPresence_NewParam, enum class ESlateVisibility CallFunc_GetVisibilityByChildrenPresence_NewParam_1, bool CallFunc_IsActivated_ReturnValue);
	void HandleGenerateOffer(class UFortStoreFrontOfferInfo* OfferInfo, class UFortRealMoneyOffer* StoreOfferWidget, class FName CallFunc_GetStorefrontName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStoreMain_MTXOffer_C* CallFunc_Create_ReturnValue);
	void PlayEquippedLockerMusic(enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item);
	void HandleBack(bool* PassThrough);
	void HandleRedeem(bool* bPassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URedeemFriendCodeWindow_C* CallFunc_Create_ReturnValue);
	void SetupForCampaignUpsell(class UFortRuntimeOptions* NewLocalVar_0, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsDesktopPlatform_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, TArray<class FString>& K2Node_MakeArray_Array);
	void SetupFirstFocusableTile(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void LayoutVBuckTiles(class UWidget* Child, int32 Index, int32 CallFunc_Divide_IntInt_ReturnValue, class UStoreMain_MTXOffer_C* K2Node_DynamicCast_AsStore_Main_MTXOffer, bool K2Node_DynamicCast_bSuccess, class UGridSlot* CallFunc_SlotAsGridSlot_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	bool Get_Main_Tab_Reference(class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UMainTabsScreen_C* K2Node_DynamicCast_AsMain_Tabs_Screen, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void Start_Ambient_Sound(bool Condition, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateCurrencyNotification(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, const struct FMtxBreakdown& CallFunc_GetMtxBreakdown_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Focus();
	void NoOffersAvailable();
	void OnOffersGenerated();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ClearOfferWidgets();
	void OnAddedToActivationStack();
	void OnRemovedFromActivationStack();
	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, class FText& CurrencyMessageLocText);
	void GenerateOfferWidget(class UFortStoreFrontOfferInfo* OfferData);
	void OnPurchasingDisabled();
	void OnStartReadingOffers();
	void OnTransitionedBySwitcher();
	void ExecuteUbergraph_StoreMain_Root(int32 EntryPoint, bool Temp_bool_Variable, enum class EFrontEndCamera Temp_byte_Variable, enum class EFrontEndCamera Temp_byte_Variable_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Get_Main_Tab_Reference_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue_1, class UFortStoreContext* CallFunc_GetContext_ReturnValue_2, bool K2Node_Event_HasOtherPlatformCurrency, class FText K2Node_Event_CurrencyMessageLocText, class UFortStoreFrontOfferInfo* K2Node_Event_OfferData, enum class EFrontEndCamera K2Node_Select_Default, bool CallFunc_IsActivated_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
