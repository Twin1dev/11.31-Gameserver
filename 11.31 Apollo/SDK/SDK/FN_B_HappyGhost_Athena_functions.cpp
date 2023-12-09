#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_HappyGhost_Athena.B_HappyGhost_Athena_C
// (Actor)

class UClass* AB_HappyGhost_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_HappyGhost_Athena_C");

	return Clss;
}


// B_HappyGhost_Athena_C B_HappyGhost_Athena.Default__B_HappyGhost_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_HappyGhost_Athena_C* AB_HappyGhost_Athena_C::GetDefaultObj()
{
	static class AB_HappyGhost_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_HappyGhost_Athena_C*>(AB_HappyGhost_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_HappyGhost_Athena.B_HappyGhost_Athena_C.OnRep_HideProj
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_HappyGhost_Athena_C::OnRep_HideProj()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HappyGhost_Athena_C", "OnRep_HideProj");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_HappyGhost_Athena.B_HappyGhost_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_HappyGhost_Athena_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HappyGhost_Athena_C", "OnWeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_HappyGhost_Athena.B_HappyGhost_Athena_C.ExecuteUbergraph_B_HappyGhost_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_HappyGhost_Athena_C::ExecuteUbergraph_B_HappyGhost_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HappyGhost_Athena_C", "ExecuteUbergraph_B_HappyGhost_Athena");

	Params::AB_HappyGhost_Athena_C_ExecuteUbergraph_B_HappyGhost_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


