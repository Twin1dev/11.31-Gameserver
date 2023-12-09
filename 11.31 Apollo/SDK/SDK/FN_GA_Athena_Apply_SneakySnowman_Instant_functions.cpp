#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Apply_SneakySnowman_Instant.GA_Athena_Apply_SneakySnowman_Instant_C
// (None)

class UClass* UGA_Athena_Apply_SneakySnowman_Instant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Apply_SneakySnowman_Instant_C");

	return Clss;
}


// GA_Athena_Apply_SneakySnowman_Instant_C GA_Athena_Apply_SneakySnowman_Instant.Default__GA_Athena_Apply_SneakySnowman_Instant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Apply_SneakySnowman_Instant_C* UGA_Athena_Apply_SneakySnowman_Instant_C::GetDefaultObj()
{
	static class UGA_Athena_Apply_SneakySnowman_Instant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Apply_SneakySnowman_Instant_C*>(UGA_Athena_Apply_SneakySnowman_Instant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_Apply_SneakySnowman_Instant.GA_Athena_Apply_SneakySnowman_Instant_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Apply_SneakySnowman_Instant_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowman_Instant_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Apply_SneakySnowman_Instant.GA_Athena_Apply_SneakySnowman_Instant_C.ExecuteUbergraph_GA_Athena_Apply_SneakySnowman_Instant
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Apply_SneakySnowman_Instant_C::ExecuteUbergraph_GA_Athena_Apply_SneakySnowman_Instant(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowman_Instant_C", "ExecuteUbergraph_GA_Athena_Apply_SneakySnowman_Instant");

	Params::UGA_Athena_Apply_SneakySnowman_Instant_C_ExecuteUbergraph_GA_Athena_Apply_SneakySnowman_Instant_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


