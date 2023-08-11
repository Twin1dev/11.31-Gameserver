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

// 0xAC (0xC24 - 0xB78)
// WidgetBlueprintGeneratedClass AthenaSeasonReward.AthenaSeasonReward_C
class UAthenaSeasonReward_C : public UFortAthenaReward
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB78(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Fade;                                              // 0xB80(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0xB88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         BorderOwned;                                       // 0xB90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Check;                                             // 0xB98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ClaimedImage;                                      // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCosmeticItemCard_C*               ItemCard;                                          // 0xBA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LockedImage;                                       // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OwnedText;                                         // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RarityFlare;                                       // 0xBC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RevealOverlay;                                     // 0xBC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SBoxOwned;                                         // 0xBD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UnEarned_OverlayTint;                              // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             StrongItemToRepresent;                             // 0xBE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnReveal;                                     // 0xBE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ViewOnHover;                                       // 0xBF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6189[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortItem*                             SecondaryItem;                                     // 0xBF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ShowVariantTimer;                                  // 0xC00(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ResetVariantTimer;                                 // 0xC08(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        VariantIndex;                                      // 0xC10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WaitingForVaultToChange;                           // 0xC14(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_618A[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        TimeBetweenVariants;                               // 0xC18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenVariantsRestart;                        // 0xC1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        VariantTimerIndex;                                 // 0xC20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSeasonReward_C");
		return Clss;
	}

	void GetItem(class UFortItem** Result);
	void ResetVariantToDefault(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void GetTemporaryItems(TArray<struct FFortCosmeticVariantPreviewElement>& Cosmetics, TArray<class UFortItem*>* Temporary_Items, const TArray<class UFortItem*>& TemporaryItems, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFortCosmeticVariantPreviewElement& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void CancelVariantTimer();
	void StartVariantTimer(float OverrideTimer, float TimerToUse, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1);
	void GetAthenaCosmeticItemDefinition(class UAthenaCosmeticItemDefinition** AsAthena_Cosmetic_Item_Definition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void OnVaultItemsChanged(TArray<class UFortItem*>& Items, float TimeToPreview, class UFortItem* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, TArray<struct FFortCosmeticVariantPreview>& CallFunc_GetItemVariantPreviews_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void ShowNextVariant(const TArray<struct FFortCosmeticVariantPreviewElement>& Temp, int32 VariantPreviewLength, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UFortItem*>& CallFunc_GetTemporaryItems_Temporary_Items, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_2, int32 Temp_int_Variable_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, class UAthenaCosmeticItemDefinition* CallFunc_GetAthenaCosmeticItemDefinition_AsAthena_Cosmetic_Item_Definition, TArray<struct FFortCosmeticVariantPreview>& CallFunc_GetItemVariantPreviews_ReturnValue, TArray<struct FFortCosmeticVariantPreview>& CallFunc_GetItemVariantPreviews_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FMcpVariantChannelInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FUnlockableVariantPreviewInfo& K2Node_MakeStruct_UnlockableVariantPreviewInfo);
	void StopCyclingVariants(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void BeginCyclingVariants(TArray<class UFortItem*>& K2Node_MakeArray_Array, const struct FUnlockableVariantPreviewInfo& K2Node_MakeStruct_UnlockableVariantPreviewInfo, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UAthenaCosmeticItemDefinition* CallFunc_GetAthenaCosmeticItemDefinition_AsAthena_Cosmetic_Item_Definition, bool CallFunc_IsValid_ReturnValue, TArray<struct FFortCosmeticVariantPreview>& CallFunc_GetItemVariantPreviews_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FUnlockableVariantPreviewInfo& K2Node_MakeStruct_UnlockableVariantPreviewInfo_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_2);
	void ViewInVaultByUser();
	void ViewInVault(TArray<class UFortItem*>& Additional_Items, const TArray<class UFortItem*>& Mutable_Additional_Items, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaCharacterItemDefinition* K2Node_DynamicCast_AsAthena_Character_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void SetSecondaryItem(class UFortItem* SecondaryItem);
	void EnableRarityFlare();
	void SetViewOnHover(bool ShouldViewOnHover);
	void SetState(bool Claimed, bool Locked, bool LevelAchieved, bool bOwned, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility K2Node_Select_Default_2, bool Temp_bool_Variable_3, float Temp_float_Variable, enum class ESlateVisibility K2Node_Select_Default_3, float Temp_float_Variable_1, bool Temp_bool_Variable_4, float K2Node_Select_Default_4);
	void Setup(class UFortItem* InItemToRepresent, bool Claimed, bool Locked, bool LevelAchieved, bool bOwned, enum class EFortItemCardSize ItemCardSize, int32 Quantity, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void BP_OnHovered();
	void PlayIntro();
	void ViewItem();
	void BP_OnClicked();
	void ExecuteUbergraph_AthenaSeasonReward(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
