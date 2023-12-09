#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Athena_Galileo_Lobster_Rocket.B_Athena_Galileo_Lobster_Rocket_C
// (Actor)

class UClass* AB_Athena_Galileo_Lobster_Rocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Athena_Galileo_Lobster_Rocket_C");

	return Clss;
}


// B_Athena_Galileo_Lobster_Rocket_C B_Athena_Galileo_Lobster_Rocket.Default__B_Athena_Galileo_Lobster_Rocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Athena_Galileo_Lobster_Rocket_C* AB_Athena_Galileo_Lobster_Rocket_C::GetDefaultObj()
{
	static class AB_Athena_Galileo_Lobster_Rocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Athena_Galileo_Lobster_Rocket_C*>(AB_Athena_Galileo_Lobster_Rocket_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Athena_Galileo_Lobster_Rocket.B_Athena_Galileo_Lobster_Rocket_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Athena_Galileo_Lobster_Rocket_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_Galileo_Lobster_Rocket_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


