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


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.UpdateItemsForWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortDisplayAttribute>CallFunc_GetUpgradeStats_ReturnValue                             (ZeroConstructor, ReferenceParm)
// TArray<struct FFortDisplayAttribute>CallFunc_GetTooltipStats_ReturnValue                             (ZeroConstructor, ReferenceParm)
// TArray<struct FFortDisplayAttribute>CallFunc_GetComparisonStats_ReturnValue                          (ZeroConstructor, ReferenceParm)

void UItemAttributesDetailWidget_C::UpdateItemsForWidgets(class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue_2, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetUpgradeStats_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetTooltipStats_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetComparisonStats_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "UpdateItemsForWidgets");

	Params::UItemAttributesDetailWidget_C_UpdateItemsForWidgets_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.CallFunc_GetUpgradeStats_ReturnValue = CallFunc_GetUpgradeStats_ReturnValue;
	Parms.CallFunc_GetTooltipStats_ReturnValue = CallFunc_GetTooltipStats_ReturnValue;
	Parms.CallFunc_GetComparisonStats_ReturnValue = CallFunc_GetComparisonStats_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemAttributesDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "HandlePostDifferentItemToDetailSet");

	Params::UItemAttributesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemAttributesDetailWidget_C::HandlePostDifferentItemToCompareWithSet()
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "HandlePostDifferentItemToCompareWithSet");

	Params::UItemAttributesDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleShouldPreviewUpgradingItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemAttributesDetailWidget_C::HandleShouldPreviewUpgradingItemChanged()
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "HandleShouldPreviewUpgradingItemChanged");

	Params::UItemAttributesDetailWidget_C_HandleShouldPreviewUpgradingItemChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToDetailChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemAttributesDetailWidget_C::HandleItemToDetailChangedBP()
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "HandleItemToDetailChangedBP");

	Params::UItemAttributesDetailWidget_C_HandleItemToDetailChangedBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToCompareWithChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemAttributesDetailWidget_C::HandleItemToCompareWithChangedBP()
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "HandleItemToCompareWithChangedBP");

	Params::UItemAttributesDetailWidget_C_HandleItemToCompareWithChangedBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.ExecuteUbergraph_ItemAttributesDetailWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemAttributesDetailWidget_C::ExecuteUbergraph_ItemAttributesDetailWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "ExecuteUbergraph_ItemAttributesDetailWidget");

	Params::UItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
