#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C
// (Actor)

class UClass* AB_BGA_Athena_CampFire_Trap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_BGA_Athena_CampFire_Trap_C");

	return Clss;
}


// B_BGA_Athena_CampFire_Trap_C B_BGA_Athena_CampFire_Trap.Default__B_BGA_Athena_CampFire_Trap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_BGA_Athena_CampFire_Trap_C* AB_BGA_Athena_CampFire_Trap_C::GetDefaultObj()
{
	static class AB_BGA_Athena_CampFire_Trap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_BGA_Athena_CampFire_Trap_C*>(AB_BGA_Athena_CampFire_Trap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C.OnBuildingActorInitialized
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortBuildingInitializationReasonInitializationReason                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuildingPersistentStateBuildingPersistentState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_Athena_CampFire_Trap_C::OnBuildingActorInitialized(enum class EFortBuildingInitializationReason InitializationReason, enum class EFortBuildingPersistentState BuildingPersistentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_Athena_CampFire_Trap_C", "OnBuildingActorInitialized");

	Params::AB_BGA_Athena_CampFire_Trap_C_OnBuildingActorInitialized_Params Parms{};

	Parms.InitializationReason = InitializationReason;
	Parms.BuildingPersistentState = BuildingPersistentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C.ExecuteUbergraph_B_BGA_Athena_CampFire_Trap
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuildingInitializationReasonK2Node_Event_InitializationReason                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuildingPersistentStateK2Node_Event_BuildingPersistentState                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_Athena_CampFire_Trap_C::ExecuteUbergraph_B_BGA_Athena_CampFire_Trap(int32 EntryPoint, enum class EFortBuildingInitializationReason K2Node_Event_InitializationReason, enum class EFortBuildingPersistentState K2Node_Event_BuildingPersistentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_Athena_CampFire_Trap_C", "ExecuteUbergraph_B_BGA_Athena_CampFire_Trap");

	Params::AB_BGA_Athena_CampFire_Trap_C_ExecuteUbergraph_B_BGA_Athena_CampFire_Trap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InitializationReason = K2Node_Event_InitializationReason;
	Parms.K2Node_Event_BuildingPersistentState = K2Node_Event_BuildingPersistentState;

	UObject::ProcessEvent(Func, &Parms);

}

}


