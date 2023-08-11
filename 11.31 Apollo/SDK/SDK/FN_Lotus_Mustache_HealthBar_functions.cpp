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


// Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULotus_Mustache_HealthBar_C::Construct()
{
	static auto Func = Class->GetFunction("Lotus_Mustache_HealthBar_C", "Construct");

	Params::ULotus_Mustache_HealthBar_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULotus_Mustache_HealthBar_C::Destruct()
{
	static auto Func = Class->GetFunction("Lotus_Mustache_HealthBar_C", "Destruct");

	Params::ULotus_Mustache_HealthBar_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.SetHealth
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HealthPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULotus_Mustache_HealthBar_C::SetHealth(float HealthPercent)
{
	static auto Func = Class->GetFunction("Lotus_Mustache_HealthBar_C", "SetHealth");

	Params::ULotus_Mustache_HealthBar_C_SetHealth_Params Parms;

	Parms.HealthPercent = HealthPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.ExecuteUbergraph_Lotus_Mustache_HealthBar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_HealthPercent                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULotus_Mustache_HealthBar_C::ExecuteUbergraph_Lotus_Mustache_HealthBar(int32 EntryPoint, float K2Node_CustomEvent_HealthPercent)
{
	static auto Func = Class->GetFunction("Lotus_Mustache_HealthBar_C", "ExecuteUbergraph_Lotus_Mustache_HealthBar");

	Params::ULotus_Mustache_HealthBar_C_ExecuteUbergraph_Lotus_Mustache_HealthBar_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_HealthPercent = K2Node_CustomEvent_HealthPercent;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
