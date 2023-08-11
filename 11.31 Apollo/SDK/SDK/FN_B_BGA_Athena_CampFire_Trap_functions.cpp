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


// Function B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C.OnBuildingActorInitialized
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortBuildingInitializationReasonInitializationReason                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuildingPersistentStateBuildingPersistentState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_Athena_CampFire_Trap_C::OnBuildingActorInitialized(enum class EFortBuildingInitializationReason InitializationReason, enum class EFortBuildingPersistentState BuildingPersistentState)
{
	static auto Func = Class->GetFunction("B_BGA_Athena_CampFire_Trap_C", "OnBuildingActorInitialized");

	Params::AB_BGA_Athena_CampFire_Trap_C_OnBuildingActorInitialized_Params Parms;

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
	static auto Func = Class->GetFunction("B_BGA_Athena_CampFire_Trap_C", "ExecuteUbergraph_B_BGA_Athena_CampFire_Trap");

	Params::AB_BGA_Athena_CampFire_Trap_C_ExecuteUbergraph_B_BGA_Athena_CampFire_Trap_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InitializationReason = K2Node_Event_InitializationReason;
	Parms.K2Node_Event_BuildingPersistentState = K2Node_Event_BuildingPersistentState;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
