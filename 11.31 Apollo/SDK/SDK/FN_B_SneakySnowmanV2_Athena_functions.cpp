#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_SneakySnowmanV2_Athena.B_SneakySnowmanV2_Athena_C
// (Actor)

class UClass* AB_SneakySnowmanV2_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_SneakySnowmanV2_Athena_C");

	return Clss;
}


// B_SneakySnowmanV2_Athena_C B_SneakySnowmanV2_Athena.Default__B_SneakySnowmanV2_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_SneakySnowmanV2_Athena_C* AB_SneakySnowmanV2_Athena_C::GetDefaultObj()
{
	static class AB_SneakySnowmanV2_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_SneakySnowmanV2_Athena_C*>(AB_SneakySnowmanV2_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_SneakySnowmanV2_Athena.B_SneakySnowmanV2_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_SneakySnowmanV2_Athena_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_SneakySnowmanV2_Athena_C", "K2_OnUnEquip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_SneakySnowmanV2_Athena.B_SneakySnowmanV2_Athena_C.ExecuteUbergraph_B_SneakySnowmanV2_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SneakySnowmanV2_Athena_C::ExecuteUbergraph_B_SneakySnowmanV2_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_SneakySnowmanV2_Athena_C", "ExecuteUbergraph_B_SneakySnowmanV2_Athena");

	Params::AB_SneakySnowmanV2_Athena_C_ExecuteUbergraph_B_SneakySnowmanV2_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


