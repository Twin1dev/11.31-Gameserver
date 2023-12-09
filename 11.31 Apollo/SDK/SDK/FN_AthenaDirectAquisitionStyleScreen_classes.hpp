#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x6A8 - 0x630)
// WidgetBlueprintGeneratedClass AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C
class UAthenaDirectAquisitionStyleScreen_C : public UFortStoreFrontOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x630(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPanelButton_C*                        Button_Next;                                       // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        Button_Previous;                                   // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              CameraFramingWidget;                               // 0x648(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x650(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoHeaderWidget_C*               ItemInfoHeader;                                    // 0x658(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLockedStyleNotification_C*      LockedNotification;                                // 0x660(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        MobileCloseButton;                                 // 0x668(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_CloseButton;                               // 0x670(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StyleDisclaimer;                                   // 0x678(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         OfferSet;                                          // 0x680(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6F0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IndexIntoOffersWithVariantsList;                   // 0x684(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                OfferSubIndicesWithVariants;                       // 0x688(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortItemDefinition*                   InitialTriggeringItemDef;                          // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CharacterItem;                                     // 0x6A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaDirectAquisitionStyleScreen_C* GetDefaultObj();

	void ViewVaultItemWithBackpack(class UFortItemDefinition* ItemToRepresent, class UFortItem* StrongItemToRepresent, const TArray<class UFortItem*>& StrongItemsToRepresent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, class UAthenaCharacterItemDefinition* K2Node_DynamicCast_AsAthena_Character_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UAthenaCharacterItemDefinition* K2Node_DynamicCast_AsAthena_Character_Item_Definition_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, TArray<class UFortItem*>& CallFunc_GetGrantedItems_Items, class UFortItem* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1);
	void SetupCharacterItem(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, TArray<class UFortItem*>& CallFunc_GetGrantedItems_Items, const struct FFortItemQuantityPair& CallFunc_GetGrantedItemQuantityPair_ItemQuantity, bool CallFunc_GetGrantedItemQuantityPair_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionFromItemQuantityPair_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAthenaCharacterItemDefinition* K2Node_DynamicCast_AsAthena_Character_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue);
	class UFortAccountItemDefinition* GetOfferGrantedItemDef(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_Array_Get_Item, class UFortAccountItemDefinition* CallFunc_GetGrantedItemDefinition_ReturnValue);
	void RebuildStylesFromOffer(class UAthenaCosmeticItemDefinition* CosmeticDef, class UFortAccountItemDefinition* CallFunc_GetOfferGrantedItemDef_ReturnValue, TArray<struct FMcpVariantChannelInfo>& CallFunc_GetDefaultVariantChannels_OutDefaultVariantData, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasTag_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	void SwitchToNextItemInOffer(int32 Direction, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue);
	void ScanOfferForVariants(int32 Temp_int_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetGrantedItemDefinition_ReturnValue, int32 CallFunc_GetNumGrantedItems_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasModifiableVariants_ReturnValue);
	void UpdateFromVariant(const struct FGameplayTag& VariantChannelTag, const struct FGameplayTag& VariantTag, bool IsOwned, class UFortAccountItemDefinition* GrantedItemDef, class UFortAccountItemDefinition* CallFunc_GetOfferGrantedItemDef_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition_1, bool K2Node_DynamicCast_bSuccess_1, class UAthenaBackpackItemDefinition* K2Node_DynamicCast_AsAthena_Backpack_Item_Definition, bool K2Node_DynamicCast_bSuccess_2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	class UWidget* GetWidgetForFramingViewedItem();
	void HandleBack(bool* bPassThrough, bool CallFunc_BP_HasValidMOTDParent_ReturnValue);
	void Construct();
	void OnOfferSet();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag, bool IsOwned);
	void ExecuteUbergraph_AthenaDirectAquisitionStyleScreen(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsMobileGame_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_HandleBack_bPassThrough, enum class ESlateVisibility K2Node_Select_Default, const struct FGameplayTag& K2Node_Event_VariantChannel, const struct FGameplayTag& K2Node_Event_VariantTag, bool K2Node_Event_IsOwned, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


