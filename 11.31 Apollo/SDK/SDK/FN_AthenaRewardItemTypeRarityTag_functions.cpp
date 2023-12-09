#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C
// (None)

class UClass* UAthenaRewardItemTypeRarityTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaRewardItemTypeRarityTag_C");

	return Clss;
}


// AthenaRewardItemTypeRarityTag_C AthenaRewardItemTypeRarityTag.Default__AthenaRewardItemTypeRarityTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaRewardItemTypeRarityTag_C* UAthenaRewardItemTypeRarityTag_C::GetDefaultObj()
{
	static class UAthenaRewardItemTypeRarityTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaRewardItemTypeRarityTag_C*>(UAthenaRewardItemTypeRarityTag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C.OnInitializeRarityWithSeries
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemSeriesDefinition*   SeriesData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaRewardItemTypeRarityTag_C::OnInitializeRarityWithSeries(class UFortItemSeriesDefinition* SeriesData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaRewardItemTypeRarityTag_C", "OnInitializeRarityWithSeries");

	Params::UAthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithSeries_Params Parms{};

	Parms.SeriesData = SeriesData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C.OnInitializeRarityWithoutSeries
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortRarityItemData         RarityData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaRewardItemTypeRarityTag_C::OnInitializeRarityWithoutSeries(const struct FFortRarityItemData& RarityData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaRewardItemTypeRarityTag_C", "OnInitializeRarityWithoutSeries");

	Params::UAthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithoutSeries_Params Parms{};

	Parms.RarityData = RarityData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C.ExecuteUbergraph_AthenaRewardItemTypeRarityTag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemSeriesDefinition*   K2Node_Event_SeriesData                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         K2Node_Event_RarityData                                          (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaRewardItemTypeRarityTag_C::ExecuteUbergraph_AthenaRewardItemTypeRarityTag(int32 EntryPoint, class UFortItemSeriesDefinition* K2Node_Event_SeriesData, const struct FFortRarityItemData& K2Node_Event_RarityData, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaRewardItemTypeRarityTag_C", "ExecuteUbergraph_AthenaRewardItemTypeRarityTag");

	Params::UAthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SeriesData = K2Node_Event_SeriesData;
	Parms.K2Node_Event_RarityData = K2Node_Event_RarityData;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


