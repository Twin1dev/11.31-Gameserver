#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C
// (None)

class UClass* ULotus_Mustache_HealthBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lotus_Mustache_HealthBar_C");

	return Clss;
}


// Lotus_Mustache_HealthBar_C Lotus_Mustache_HealthBar.Default__Lotus_Mustache_HealthBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULotus_Mustache_HealthBar_C* ULotus_Mustache_HealthBar_C::GetDefaultObj()
{
	static class ULotus_Mustache_HealthBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULotus_Mustache_HealthBar_C*>(ULotus_Mustache_HealthBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULotus_Mustache_HealthBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lotus_Mustache_HealthBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULotus_Mustache_HealthBar_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lotus_Mustache_HealthBar_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.SetHealth
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HealthPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULotus_Mustache_HealthBar_C::SetHealth(float HealthPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lotus_Mustache_HealthBar_C", "SetHealth");

	Params::ULotus_Mustache_HealthBar_C_SetHealth_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lotus_Mustache_HealthBar_C", "ExecuteUbergraph_Lotus_Mustache_HealthBar");

	Params::ULotus_Mustache_HealthBar_C_ExecuteUbergraph_Lotus_Mustache_HealthBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_HealthPercent = K2Node_CustomEvent_HealthPercent;

	UObject::ProcessEvent(Func, &Parms);

}

}


