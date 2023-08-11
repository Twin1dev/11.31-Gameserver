#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.UpdateSeriesBlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetFirstGrantItemDefinition_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::UpdateSeriesBlock(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "UpdateSeriesBlock");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_UpdateSeriesBlock_Params Parms;

	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetFirstGrantItemDefinition_ReturnValue = CallFunc_GetFirstGrantItemDefinition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.Bundle Short Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// int32                              Not_owned_bundle_items__local_                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBundledItemInfo>    CallFunc_GetDynamicBundleItems_Items                             (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UAthenaDirectAcquisitionOfferWidgetResizable_C::Bundle_Short_Text(class FText* Text, int32 Not_owned_bundle_items__local_, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, TArray<struct FBundledItemInfo>& CallFunc_GetDynamicBundleItems_Items, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "Bundle Short Text");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_Bundle_Short_Text_Params Parms;

	Parms.Not_owned_bundle_items__local_ = Not_owned_bundle_items__local_;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetDynamicBundleItems_Items = CallFunc_GetDynamicBundleItems_Items;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.TryToResetCarouselTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::TryToResetCarouselTimer(bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "TryToResetCarouselTimer");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_TryToResetCarouselTimer_Params Parms;

	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.HasGroupedOffers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAthenaDirectAcquisitionOfferWidgetResizable_C::HasGroupedOffers(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "HasGroupedOffers");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_HasGroupedOffers_Params Parms;

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.GetOfferIndexAndCountText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OfferIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OfferDisplayCount                                                (Parm, OutParm)
// int32                              NextOfferIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NextOfferDisplayCount                                            (Parm, OutParm)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    ()

void UAthenaDirectAcquisitionOfferWidgetResizable_C::GetOfferIndexAndCountText(int32* OfferIndex, class FText* OfferDisplayCount, int32* NextOfferIndex, class FText* NextOfferDisplayCount, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Percent_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "GetOfferIndexAndCountText");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_GetOfferIndexAndCountText_Params Parms;

	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OfferIndex != nullptr)
		*OfferIndex = Parms.OfferIndex;

	if (OfferDisplayCount != nullptr)
		*OfferDisplayCount = Parms.OfferDisplayCount;

	if (NextOfferIndex != nullptr)
		*NextOfferIndex = Parms.NextOfferIndex;

	if (NextOfferDisplayCount != nullptr)
		*NextOfferDisplayCount = Parms.NextOfferDisplayCount;

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.UpdateBadge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMtxOfferData*           CallFunc_GetOfferDisplayAsset_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasDisplayAsset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::UpdateBadge(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortMtxOfferData* CallFunc_GetOfferDisplayAsset_ReturnValue, bool CallFunc_HasDisplayAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "UpdateBadge");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_UpdateBadge_Params Parms;

	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetOfferDisplayAsset_ReturnValue = CallFunc_GetOfferDisplayAsset_ReturnValue;
	Parms.CallFunc_HasDisplayAsset_ReturnValue = CallFunc_HasDisplayAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.UpdateStyle_Sizing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMtxOfferDisplaySizeCallFunc_GetOfferDisplaySize_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBorderSlot*                 K2Node_DynamicCast_AsBorder_Slot                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBorderSlot*                 K2Node_DynamicCast_AsBorder_Slot_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::UpdateStyle_Sizing(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, enum class EFortMtxOfferDisplaySize CallFunc_GetOfferDisplaySize_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot_1, bool K2Node_DynamicCast_bSuccess_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "UpdateStyle_Sizing");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_UpdateStyle_Sizing_Params Parms;

	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetOfferDisplaySize_ReturnValue = CallFunc_GetOfferDisplaySize_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_DynamicCast_AsBorder_Slot = K2Node_DynamicCast_AsBorder_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBorder_Slot_1 = K2Node_DynamicCast_AsBorder_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.UpdateStyle_Border
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMtxOfferData*           CallFunc_GetOfferDisplayAsset_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetFirstGrantItemDefinition_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortColorPalette           CallFunc_GetRarityOrSeriesColors_ReturnValue                     (NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::UpdateStyle_Border(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortMtxOfferData* CallFunc_GetOfferDisplayAsset_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, const struct FFortColorPalette& CallFunc_GetRarityOrSeriesColors_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "UpdateStyle_Border");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_UpdateStyle_Border_Params Parms;

	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetOfferDisplayAsset_ReturnValue = CallFunc_GetOfferDisplayAsset_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetOfferInfo_ReturnValue_1 = CallFunc_GetOfferInfo_ReturnValue_1;
	Parms.CallFunc_GetFirstGrantItemDefinition_ReturnValue = CallFunc_GetFirstGrantItemDefinition_ReturnValue;
	Parms.CallFunc_GetRarityOrSeriesColors_ReturnValue = CallFunc_GetRarityOrSeriesColors_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.UpdateStyle_MainText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetFirstGrantItemDefinition_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortColorPalette           CallFunc_GetRarityOrSeriesColors_ReturnValue                     (NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnique_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::UpdateStyle_MainText(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, const struct FFortColorPalette& CallFunc_GetRarityOrSeriesColors_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, bool CallFunc_IsUnique_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "UpdateStyle_MainText");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_UpdateStyle_MainText_Params Parms;

	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetFirstGrantItemDefinition_ReturnValue = CallFunc_GetFirstGrantItemDefinition_ReturnValue;
	Parms.CallFunc_GetRarityOrSeriesColors_ReturnValue = CallFunc_GetRarityOrSeriesColors_ReturnValue;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue_1 = CallFunc_GetOfferInfo_ReturnValue_1;
	Parms.CallFunc_IsUnique_ReturnValue = CallFunc_IsUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.SetupSaleInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SaleText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NormalPrice                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      BannerOverrideTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bHasSale                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bHasBattlePassStars                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              INumOfBattlePassStars                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::SetupSaleInfo(class FText SaleText, class FText NormalPrice, const class FString& BannerOverrideTag, bool bHasSale, bool bHasBattlePassStars, int32 INumOfBattlePassStars, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "SetupSaleInfo");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_SetupSaleInfo_Params Parms;

	Parms.SaleText = SaleText;
	Parms.NormalPrice = NormalPrice;
	Parms.BannerOverrideTag = BannerOverrideTag;
	Parms.bHasSale = bHasSale;
	Parms.bHasBattlePassStars = bHasBattlePassStars;
	Parms.INumOfBattlePassStars = INumOfBattlePassStars;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.UpdateSaleStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetPersistentName_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// enum class ECatalogSaleType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECatalogOfferType       CallFunc_GetOfferType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuantityRemaining_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetBannerOverrideTag_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMetaAsBool_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemQuantity_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemOfferCount_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSalePrice_SalePrice                                  ()
// bool                               CallFunc_GetSalePrice_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECatalogSaleType        CallFunc_GetSaleType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetNormalPrice_ReturnValue                              ()
// class FText                        CallFunc_GetSaleText_ReturnValue                                 ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue_1                                    ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    ()
// class FText                        K2Node_Select_Default                                            ()

void UAthenaDirectAcquisitionOfferWidgetResizable_C::UpdateSaleStatus(const class FString& CallFunc_GetPersistentName_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, enum class ECatalogSaleType Temp_byte_Variable, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const class FString& CallFunc_GetBannerOverrideTag_ReturnValue, bool CallFunc_GetMetaAsBool_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, int32 CallFunc_GetItemQuantity_ReturnValue, int32 CallFunc_GetItemOfferCount_ReturnValue, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ECatalogSaleType CallFunc_GetSaleType_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, class FText CallFunc_GetNormalPrice_ReturnValue, class FText CallFunc_GetSaleText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "UpdateSaleStatus");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_UpdateSaleStatus_Params Parms;

	Parms.CallFunc_GetPersistentName_ReturnValue = CallFunc_GetPersistentName_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue_1 = CallFunc_GetOfferInfo_ReturnValue_1;
	Parms.CallFunc_GetOfferType_ReturnValue = CallFunc_GetOfferType_ReturnValue;
	Parms.CallFunc_GetQuantityRemaining_ReturnValue = CallFunc_GetQuantityRemaining_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetBannerOverrideTag_ReturnValue = CallFunc_GetBannerOverrideTag_ReturnValue;
	Parms.CallFunc_GetMetaAsBool_ReturnValue = CallFunc_GetMetaAsBool_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetItemQuantity_ReturnValue = CallFunc_GetItemQuantity_ReturnValue;
	Parms.CallFunc_GetItemOfferCount_ReturnValue = CallFunc_GetItemOfferCount_ReturnValue;
	Parms.CallFunc_GetSalePrice_SalePrice = CallFunc_GetSalePrice_SalePrice;
	Parms.CallFunc_GetSalePrice_ReturnValue = CallFunc_GetSalePrice_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetSaleType_ReturnValue = CallFunc_GetSaleType_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetNormalPrice_ReturnValue = CallFunc_GetNormalPrice_ReturnValue;
	Parms.CallFunc_GetSaleText_ReturnValue = CallFunc_GetSaleText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.Setup Price
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSalePrice_SalePrice                                  ()
// bool                               CallFunc_GetSalePrice_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPriceItem_RequiredItemCount                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetPriceItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetSmallPreviewImageBrush_ReturnValue                   ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue_1                                    ()
// class FString                      CallFunc_GetOfferId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// enum class EOfferPurchaseError     CallFunc_CanPurchaseOffer_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()

void UAthenaDirectAcquisitionOfferWidgetResizable_C::Setup_Price(bool Temp_bool_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_GetOfferId_ReturnValue, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "Setup Price");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_Setup_Price_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetSalePrice_SalePrice = CallFunc_GetSalePrice_SalePrice;
	Parms.CallFunc_GetSalePrice_ReturnValue = CallFunc_GetSalePrice_ReturnValue;
	Parms.CallFunc_GetPriceItem_RequiredItemCount = CallFunc_GetPriceItem_RequiredItemCount;
	Parms.CallFunc_GetPriceItem_ReturnValue = CallFunc_GetPriceItem_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.CallFunc_GetSmallPreviewImageBrush_ReturnValue = CallFunc_GetSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetOfferId_ReturnValue = CallFunc_GetOfferId_ReturnValue;
	Parms.CallFunc_CanPurchaseOffer_ReturnValue = CallFunc_CanPurchaseOffer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.UpdateShortDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Bundle_Short_Text_Text                                  ()
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFirstGrantQuantity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECatalogOfferType       CallFunc_GetOfferType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetName_ReturnValue                                     ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUnique_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetShortDescription_ReturnValue                         ()
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_HasRequirement_RequirementText                          ()
// bool                               CallFunc_HasRequirement_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLockedByRequirement_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::UpdateShortDescription(class FText CallFunc_Bundle_Short_Text_Text, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_GetFirstGrantQuantity_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue, class FText CallFunc_GetName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsUnique_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_HasRequirement_RequirementText, bool CallFunc_HasRequirement_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "UpdateShortDescription");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_UpdateShortDescription_Params Parms;

	Parms.CallFunc_Bundle_Short_Text_Text = CallFunc_Bundle_Short_Text_Text;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetFirstGrantQuantity_ReturnValue = CallFunc_GetFirstGrantQuantity_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue_1 = CallFunc_GetOfferInfo_ReturnValue_1;
	Parms.CallFunc_GetOfferType_ReturnValue = CallFunc_GetOfferType_ReturnValue;
	Parms.CallFunc_GetName_ReturnValue = CallFunc_GetName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_IsUnique_ReturnValue = CallFunc_IsUnique_ReturnValue;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_HasRequirement_RequirementText = CallFunc_HasRequirement_RequirementText;
	Parms.CallFunc_HasRequirement_ReturnValue = CallFunc_HasRequirement_ReturnValue;
	Parms.CallFunc_IsLockedByRequirement_ReturnValue = CallFunc_IsLockedByRequirement_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.UpdateName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_HasCatalogOfferName_CatalogOfferName                    ()
// bool                               CallFunc_HasCatalogOfferName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// enum class ECatalogOfferType       CallFunc_GetOfferType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetShortName_ReturnValue                                ()
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               ()
// class FText                        CallFunc_GetItemTypeText_ReturnValue                             ()
// bool                               CallFunc_IsUnique_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLockedByRequirement_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::UpdateName(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_HasCatalogOfferName_CatalogOfferName, bool CallFunc_HasCatalogOfferName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetShortName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_GetItemTypeText_ReturnValue, bool CallFunc_IsUnique_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "UpdateName");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_UpdateName_Params Parms;

	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_HasCatalogOfferName_CatalogOfferName = CallFunc_HasCatalogOfferName_CatalogOfferName;
	Parms.CallFunc_HasCatalogOfferName_ReturnValue = CallFunc_HasCatalogOfferName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetOfferType_ReturnValue = CallFunc_GetOfferType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetShortName_ReturnValue = CallFunc_GetShortName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_GetItemTypeText_ReturnValue = CallFunc_GetItemTypeText_ReturnValue;
	Parms.CallFunc_IsUnique_ReturnValue = CallFunc_IsUnique_ReturnValue;
	Parms.CallFunc_IsLockedByRequirement_ReturnValue = CallFunc_IsLockedByRequirement_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.SetupPrice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PriceIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemCount_C*                PriceWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPriceItem_RequiredItemCount                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetPriceItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::SetupPrice(int32 PriceIndex, class UItemCount_C* PriceWidget, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "SetupPrice");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_SetupPrice_Params Parms;

	Parms.PriceIndex = PriceIndex;
	Parms.PriceWidget = PriceWidget;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetPriceItem_RequiredItemCount = CallFunc_GetPriceItem_RequiredItemCount;
	Parms.CallFunc_GetPriceItem_ReturnValue = CallFunc_GetPriceItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.UpdateStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetFirstOfferSeriesBackgroundTexture_ReturnValue        (HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::UpdateStyle(TSoftObjectPtr<class UTexture2D> CallFunc_GetFirstOfferSeriesBackgroundTexture_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "UpdateStyle");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_UpdateStyle_Params Parms;

	Parms.CallFunc_GetFirstOfferSeriesBackgroundTexture_ReturnValue = CallFunc_GetFirstOfferSeriesBackgroundTexture_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.UpdateAvailability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOfferId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOwned_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    CallFunc_GetOfferInfo_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOfferId_ReturnValue_1                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnique_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOwned_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuantityRemaining_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        K2Node_Select_Default_2                                          ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           ()
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::UpdateAvailability(bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const class FString& CallFunc_GetOfferId_ReturnValue, bool CallFunc_IsOwned_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, const class FString& CallFunc_GetOfferId_ReturnValue_1, bool CallFunc_IsUnique_ReturnValue, bool CallFunc_IsOwned_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Select_Default_2, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool Temp_bool_Variable_3, enum class ESlateVisibility K2Node_Select_Default_3)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "UpdateAvailability");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_UpdateAvailability_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOfferId_ReturnValue = CallFunc_GetOfferId_ReturnValue;
	Parms.CallFunc_IsOwned_ReturnValue = CallFunc_IsOwned_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetOfferInfo_ReturnValue_1 = CallFunc_GetOfferInfo_ReturnValue_1;
	Parms.CallFunc_GetOfferInfo_ReturnValue_2 = CallFunc_GetOfferInfo_ReturnValue_2;
	Parms.CallFunc_GetOfferId_ReturnValue_1 = CallFunc_GetOfferId_ReturnValue_1;
	Parms.CallFunc_IsUnique_ReturnValue = CallFunc_IsUnique_ReturnValue;
	Parms.CallFunc_IsOwned_ReturnValue_1 = CallFunc_IsOwned_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetQuantityRemaining_ReturnValue = CallFunc_GetQuantityRemaining_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.OfferSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidgetResizable_C::OfferSet()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "OfferSet");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_OfferSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "BP_OnItemSelectionChanged");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_BP_OnItemSelectionChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.OnOfferSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidgetResizable_C::OnOfferSet()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "OnOfferSet");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_OnOfferSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.HandleOfferPurchaseComplete
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FPurchasedItemInfo>  PurchasedItems                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::HandleOfferPurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "HandleOfferPurchaseComplete");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_HandleOfferPurchaseComplete_Params Parms;

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = PurchasedItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidgetResizable_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "BP_OnHovered");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidgetResizable_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "BP_OnUnhovered");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.OnUpdateStatus
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidgetResizable_C::OnUpdateStatus()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "OnUpdateStatus");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_OnUpdateStatus_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "OnListItemObjectSet");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_OnListItemObjectSet_Params Parms;

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidgetResizable_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "Construct");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.OnOfferAdded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidgetResizable_C::OnOfferAdded()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "OnOfferAdded");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_OnOfferAdded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.AnimEvent_Carousel_ImageSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidgetResizable_C::AnimEvent_Carousel_ImageSwap()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "AnimEvent_Carousel_ImageSwap");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_AnimEvent_Carousel_ImageSwap_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "BP_OnItemExpansionChanged");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_BP_OnItemExpansionChanged_Params Parms;

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.PlayAnim_CarouselTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidgetResizable_C::PlayAnim_CarouselTransition()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "PlayAnim_CarouselTransition");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_PlayAnim_CarouselTransition_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidgetResizable_C::BP_OnEntryReleased()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "BP_OnEntryReleased");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_BP_OnEntryReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.OnOfferTileBrushLoaded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 OfferBrush                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::OnOfferTileBrushLoaded(struct FSlateBrush& OfferBrush)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "OnOfferTileBrushLoaded");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_OnOfferTileBrushLoaded_Params Parms;

	Parms.OfferBrush = OfferBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.SetupThumbnailRenderer
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemThumbnailRenderer*  InThumbnailRenderer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::SetupThumbnailRenderer(class UFortItemThumbnailRenderer* InThumbnailRenderer)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "SetupThumbnailRenderer");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_SetupThumbnailRenderer_Params Parms;

	Parms.InThumbnailRenderer = InThumbnailRenderer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.UpdateCarousel
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::UpdateCarousel(float InDeltaTime)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "UpdateCarousel");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_UpdateCarousel_Params Parms;

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidgetResizable.AthenaDirectAcquisitionOfferWidgetResizable_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferWidgetResizable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FPurchasedItemInfo>  K2Node_CustomEvent_PurchasedItems                                (ConstParm, ZeroConstructor, ReferenceParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreFrontOfferInfo*    K2Node_DynamicCast_AsFort_Store_Front_Offer_Info                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetOfferIndexAndCountText_OfferIndex                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetOfferIndexAndCountText_OfferDisplayCount             ()
// int32                              CallFunc_GetOfferIndexAndCountText_NextOfferIndex                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount         ()
// int32                              CallFunc_GetOfferIndexAndCountText_OfferIndex_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetOfferIndexAndCountText_OfferDisplayCount_1           ()
// int32                              CallFunc_GetOfferIndexAndCountText_NextOfferIndex_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount_1       ()
// bool                               CallFunc_HasGroupedOffers_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasGroupedOffers_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_Event_OfferBrush                                          (ConstParm)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemThumbnailRenderer*  K2Node_Event_InThumbnailRenderer                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRendererIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CaptureItem_C*           CallFunc_GetOrCreateCaptureActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetOfferIndexAndCountText_OfferIndex_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetOfferIndexAndCountText_OfferDisplayCount_2           ()
// int32                              CallFunc_GetOfferIndexAndCountText_NextOfferIndex_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount_2       ()
// class UFortStoreFrontOfferInfo*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidgetResizable_C::ExecuteUbergraph_AthenaDirectAcquisitionOfferWidgetResizable(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool K2Node_Event_bIsSelected, bool K2Node_CustomEvent_bSuccess, TArray<struct FPurchasedItemInfo>& K2Node_CustomEvent_PurchasedItems, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UObject* K2Node_Event_ListItemObject, class UFortStoreFrontOfferInfo* K2Node_DynamicCast_AsFort_Store_Front_Offer_Info, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool K2Node_Event_bIsExpanded, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_GetOfferIndexAndCountText_OfferIndex, class FText CallFunc_GetOfferIndexAndCountText_OfferDisplayCount, int32 CallFunc_GetOfferIndexAndCountText_NextOfferIndex, class FText CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount, int32 CallFunc_GetOfferIndexAndCountText_OfferIndex_1, class FText CallFunc_GetOfferIndexAndCountText_OfferDisplayCount_1, int32 CallFunc_GetOfferIndexAndCountText_NextOfferIndex_1, class FText CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount_1, bool CallFunc_HasGroupedOffers_ReturnValue, bool CallFunc_HasGroupedOffers_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSlateBrush& K2Node_Event_OfferBrush, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortItemThumbnailRenderer* K2Node_Event_InThumbnailRenderer, bool CallFunc_Greater_FloatFloat_ReturnValue_2, int32 CallFunc_GetRendererIndex_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, class ABP_CaptureItem_C* CallFunc_GetOrCreateCaptureActor_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetOfferIndexAndCountText_OfferIndex_2, class FText CallFunc_GetOfferIndexAndCountText_OfferDisplayCount_2, int32 CallFunc_GetOfferIndexAndCountText_NextOfferIndex_2, class FText CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount_2, class UFortStoreFrontOfferInfo* CallFunc_Array_Get_Item, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float K2Node_Event_InDeltaTime, float CallFunc_Subtract_FloatFloat_ReturnValue_1, int32 K2Node_Select_Default, float CallFunc_FMax_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidgetResizable_C", "ExecuteUbergraph_AthenaDirectAcquisitionOfferWidgetResizable");

	Params::UAthenaDirectAcquisitionOfferWidgetResizable_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidgetResizable_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.K2Node_CustomEvent_PurchasedItems = K2Node_CustomEvent_PurchasedItems;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsFort_Store_Front_Offer_Info = K2Node_DynamicCast_AsFort_Store_Front_Offer_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOfferIndexAndCountText_OfferIndex = CallFunc_GetOfferIndexAndCountText_OfferIndex;
	Parms.CallFunc_GetOfferIndexAndCountText_OfferDisplayCount = CallFunc_GetOfferIndexAndCountText_OfferDisplayCount;
	Parms.CallFunc_GetOfferIndexAndCountText_NextOfferIndex = CallFunc_GetOfferIndexAndCountText_NextOfferIndex;
	Parms.CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount = CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount;
	Parms.CallFunc_GetOfferIndexAndCountText_OfferIndex_1 = CallFunc_GetOfferIndexAndCountText_OfferIndex_1;
	Parms.CallFunc_GetOfferIndexAndCountText_OfferDisplayCount_1 = CallFunc_GetOfferIndexAndCountText_OfferDisplayCount_1;
	Parms.CallFunc_GetOfferIndexAndCountText_NextOfferIndex_1 = CallFunc_GetOfferIndexAndCountText_NextOfferIndex_1;
	Parms.CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount_1 = CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount_1;
	Parms.CallFunc_HasGroupedOffers_ReturnValue = CallFunc_HasGroupedOffers_ReturnValue;
	Parms.CallFunc_HasGroupedOffers_ReturnValue_1 = CallFunc_HasGroupedOffers_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_OfferBrush = K2Node_Event_OfferBrush;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_InThumbnailRenderer = K2Node_Event_InThumbnailRenderer;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetRendererIndex_ReturnValue = CallFunc_GetRendererIndex_ReturnValue;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue = CallFunc_Multiply_VectorInt_ReturnValue;
	Parms.CallFunc_GetOrCreateCaptureActor_ReturnValue = CallFunc_GetOrCreateCaptureActor_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOfferIndexAndCountText_OfferIndex_2 = CallFunc_GetOfferIndexAndCountText_OfferIndex_2;
	Parms.CallFunc_GetOfferIndexAndCountText_OfferDisplayCount_2 = CallFunc_GetOfferIndexAndCountText_OfferDisplayCount_2;
	Parms.CallFunc_GetOfferIndexAndCountText_NextOfferIndex_2 = CallFunc_GetOfferIndexAndCountText_NextOfferIndex_2;
	Parms.CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount_2 = CallFunc_GetOfferIndexAndCountText_NextOfferDisplayCount_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
