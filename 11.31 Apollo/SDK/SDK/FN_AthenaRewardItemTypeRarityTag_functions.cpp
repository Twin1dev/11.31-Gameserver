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


// Function AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C.OnInitializeRarityWithSeries
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemSeriesDefinition*   SeriesData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaRewardItemTypeRarityTag_C::OnInitializeRarityWithSeries(class UFortItemSeriesDefinition* SeriesData)
{
	static auto Func = Class->GetFunction("AthenaRewardItemTypeRarityTag_C", "OnInitializeRarityWithSeries");

	Params::UAthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithSeries_Params Parms;

	Parms.SeriesData = SeriesData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C.OnInitializeRarityWithoutSeries
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortRarityItemData         RarityData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaRewardItemTypeRarityTag_C::OnInitializeRarityWithoutSeries(const struct FFortRarityItemData& RarityData)
{
	static auto Func = Class->GetFunction("AthenaRewardItemTypeRarityTag_C", "OnInitializeRarityWithoutSeries");

	Params::UAthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithoutSeries_Params Parms;

	Parms.RarityData = RarityData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C.ExecuteUbergraph_AthenaRewardItemTypeRarityTag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemSeriesDefinition*   K2Node_Event_SeriesData                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         K2Node_Event_RarityData                                          ()
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaRewardItemTypeRarityTag_C::ExecuteUbergraph_AthenaRewardItemTypeRarityTag(int32 EntryPoint, class UFortItemSeriesDefinition* K2Node_Event_SeriesData, const struct FFortRarityItemData& K2Node_Event_RarityData, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static auto Func = Class->GetFunction("AthenaRewardItemTypeRarityTag_C", "ExecuteUbergraph_AthenaRewardItemTypeRarityTag");

	Params::UAthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SeriesData = K2Node_Event_SeriesData;
	Parms.K2Node_Event_RarityData = K2Node_Event_RarityData;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
