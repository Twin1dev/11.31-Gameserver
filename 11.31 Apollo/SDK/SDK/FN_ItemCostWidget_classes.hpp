#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x278 - 0x230)
// WidgetBlueprintGeneratedClass ItemCostWidget.ItemCostWidget_C
class UItemCostWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               RarityBorder;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ResourceWidgetsContainer;                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UResourceCountWidget_C*>        ResourceWidgets;                                   // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class UMaterialInstanceDynamic*              RarityMID;                                         // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowRarityData;                                    // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseBackgroundForAffordabilityFeedback;             // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_696F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                NewVar_0;                                          // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NewVar_1;                                          // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemCostWidget_C* GetDefaultObj();

	void SetRarityData(const struct FFortRarityItemData& RarityData, bool Temp_bool_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void FindWidget(enum class EFortResourceType Resource, class UResourceCountWidget_C** Widget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UResourceCountWidget_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PopulateWidgets(int32 EnumCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable, class UResourceCountWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UResourceCountWidget_C* CallFunc_FindWidget_Widget, int32 Temp_int_Variable_2, bool CallFunc_IsValid_ReturnValue_1, class UResourceCountWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void GetValidatedCost(TMap<enum class EFortResourceType, int32>& Costs, enum class EFortResourceType& Resource, bool* CostIsValid, int32* Cost, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateResource(TMap<enum class EFortResourceType, int32> Costs, class UResourceCountWidget_C* ResourceWidget, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_GetValidatedCost_CostIsValid, int32 CallFunc_GetValidatedCost_Cost, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void AreCostsValid(TMap<enum class EFortResourceType, int32> Costs, bool* CostsAreValid, bool bCostsAreValid, int32 CallFunc_Map_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetValidatedCost_CostIsValid, int32 CallFunc_GetValidatedCost_Cost);
	void SetItemCost(class AActor* Actor, class UClass* SpecifiedItemCostComponent, int32 NewLocalVar_0, TMap<enum class EFortResourceType, int32> Cost, enum class ESlateVisibility Temp_byte_Variable, TMap<enum class EFortResourceType, int32> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_AreCostsValid_CostsAreValid, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class UResourceCountWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UItemCostComponent_C* CallFunc_GetComponentByClass_ReturnValue, TMap<enum class EFortResourceType, int32> CallFunc_GetCost_Cost, bool CallFunc_IsValid_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ItemCostWidget(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime);
};

}


