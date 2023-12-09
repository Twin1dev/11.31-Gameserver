#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA5 (0x2D5 - 0x230)
// WidgetBlueprintGeneratedClass AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C
class UAthenaSeasonItemRewardIcon_C : public UAthenaSeasonItemRewardIcon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AdjustRewardFillSize;                              // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Selected;                                          // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HoverState;                                        // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_BattlePassIcon;                              // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Image_RewardContainer;                             // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RewardContainer_Size;                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                        RewardTile;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_BattlePassIcon;                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Styles;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              StylesPlusCount;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Styles_Backing;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StylesLabel;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               StylesWrapper;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Count;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Width;                                             // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Height;                                            // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowStyle;                                         // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowCount;                                         // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_517A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BattlePassIconSize;                                // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BattlePassIconEnabled;                             // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_517B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BattlePassIconPositionOffsetMultiplier;            // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             RewardItem;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSelectedStateStylesText;                          // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bWidthOverride;                                    // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bHeightOverride;                                   // 0x2CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_517C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FillSize;                                          // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        DesiredPixelSize;                                  // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsEmoji;                                          // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaSeasonItemRewardIcon_C* GetDefaultObj();

	void SetRarityColors(const struct FLinearColor& Color1, const struct FLinearColor& Color2, const struct FLinearColor& Color3, const struct FLinearColor& Color4, const struct FLinearColor& Color5, class UMaterialInstanceDynamic* CallFunc_GetDynamicOutlineMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void HandleMultipleRewardSelctedAnim(bool bLeftRewardSelected, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void DeselectedAnim(class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void SelectedAnim(class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void SetupItemCardStyle(class UFortItem* RewardItem, float Temp_float_Variable, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaEmojiItemDefinition* K2Node_DynamicCast_AsAthena_Emoji_Item_Definition, bool K2Node_DynamicCast_bSuccess, enum class EFortItemType CallFunc_GetType_ReturnValue, float Temp_float_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, float Temp_float_Variable_2, float K2Node_Select_Default, float Temp_float_Variable_3, bool Temp_bool_Variable_1, float Temp_float_Variable_4, float Temp_float_Variable_5, bool Temp_bool_Variable_2, float Temp_float_Variable_6, float K2Node_Select_Default_1, float Temp_float_Variable_7, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool Temp_bool_Variable_3, float K2Node_Select_Default_2, float Temp_float_Variable_8, float K2Node_Select_Default_3, float Temp_float_Variable_9, bool Temp_bool_Variable_4, float K2Node_Select_Default_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Unhover(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void Hover(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void OnInitializeReward(class UFortItem* RewardItem, TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32 RewardLevel, bool bRequiresBattlePass);
	void OnInitializeSeriesReward(class UFortItemSeriesDefinition* SeriesData);
	void ExecuteUbergraph_AthenaSeasonItemRewardIcon(int32 EntryPoint, class UFortItemSeriesDefinition* K2Node_Event_SeriesData, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable_2, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, bool CallFunc_HasPurchasedSeasonBook_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_6, bool K2Node_Event_IsDesignTime, bool CallFunc_BooleanAND_ReturnValue, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable_7, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UFortItem* K2Node_Event_RewardItem, TSoftObjectPtr<class UTexture2D> K2Node_Event_RewardTexture, bool K2Node_Event_bHasAdditionalStylesToDisplay, int32 K2Node_Event_RewardLevel, bool K2Node_Event_bRequiresBattlePass, bool CallFunc_BooleanAND_ReturnValue_1, class UFortPersistableItem* K2Node_DynamicCast_AsFort_Persistable_Item, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility Temp_byte_Variable_11, bool CallFunc_BooleanAND_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_4, bool Temp_bool_Variable_5, enum class ESlateVisibility K2Node_Select_Default_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
};

}


