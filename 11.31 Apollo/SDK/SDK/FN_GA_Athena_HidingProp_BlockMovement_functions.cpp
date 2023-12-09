#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_HidingProp_BlockMovement.GA_Athena_HidingProp_BlockMovement_C
// (None)

class UClass* UGA_Athena_HidingProp_BlockMovement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_HidingProp_BlockMovement_C");

	return Clss;
}


// GA_Athena_HidingProp_BlockMovement_C GA_Athena_HidingProp_BlockMovement.Default__GA_Athena_HidingProp_BlockMovement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_HidingProp_BlockMovement_C* UGA_Athena_HidingProp_BlockMovement_C::GetDefaultObj()
{
	static class UGA_Athena_HidingProp_BlockMovement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_HidingProp_BlockMovement_C*>(UGA_Athena_HidingProp_BlockMovement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_HidingProp_BlockMovement.GA_Athena_HidingProp_BlockMovement_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_HidingProp_BlockMovement_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HidingProp_BlockMovement_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_HidingProp_BlockMovement.GA_Athena_HidingProp_BlockMovement_C.ExecuteUbergraph_GA_Athena_HidingProp_BlockMovement
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HidingProp_BlockMovement_C::ExecuteUbergraph_GA_Athena_HidingProp_BlockMovement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HidingProp_BlockMovement_C", "ExecuteUbergraph_GA_Athena_HidingProp_BlockMovement");

	Params::UGA_Athena_HidingProp_BlockMovement_C_ExecuteUbergraph_GA_Athena_HidingProp_BlockMovement_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


