#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAT_Creative_TriggeredAbility_BuildingActor.GAT_Creative_TriggeredAbility_BuildingActor_C
// (None)

class UClass* UGAT_Creative_TriggeredAbility_BuildingActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAT_Creative_TriggeredAbility_BuildingActor_C");

	return Clss;
}


// GAT_Creative_TriggeredAbility_BuildingActor_C GAT_Creative_TriggeredAbility_BuildingActor.Default__GAT_Creative_TriggeredAbility_BuildingActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAT_Creative_TriggeredAbility_BuildingActor_C* UGAT_Creative_TriggeredAbility_BuildingActor_C::GetDefaultObj()
{
	static class UGAT_Creative_TriggeredAbility_BuildingActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAT_Creative_TriggeredAbility_BuildingActor_C*>(UGAT_Creative_TriggeredAbility_BuildingActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAT_Creative_TriggeredAbility_BuildingActor.GAT_Creative_TriggeredAbility_BuildingActor_C.SetupBuildingActorAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*              BuildingActor                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              LocalBuildingActor                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class ABuildingActor*              K2Node_DynamicCast_AsBuilding_Actor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_Creative_TriggeredAbility_BuildingActor_C::SetupBuildingActorAbility(class ABuildingActor** BuildingActor, class ABuildingActor* LocalBuildingActor, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_BuildingActor_C", "SetupBuildingActorAbility");

	Params::UGAT_Creative_TriggeredAbility_BuildingActor_C_SetupBuildingActorAbility_Params Parms{};

	Parms.LocalBuildingActor = LocalBuildingActor;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Actor = K2Node_DynamicCast_AsBuilding_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (BuildingActor != nullptr)
		*BuildingActor = Parms.BuildingActor;

}


// Function GAT_Creative_TriggeredAbility_BuildingActor.GAT_Creative_TriggeredAbility_BuildingActor_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_Creative_TriggeredAbility_BuildingActor_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_BuildingActor_C", "K2_ActivateAbilityFromEvent");

	Params::UGAT_Creative_TriggeredAbility_BuildingActor_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_Creative_TriggeredAbility_BuildingActor.GAT_Creative_TriggeredAbility_BuildingActor_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility_BuildingActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class ABuildingActor*              CallFunc_SetupBuildingActorAbility_BuildingActor                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_Creative_TriggeredAbility_BuildingActor_C::ExecuteUbergraph_GAT_Creative_TriggeredAbility_BuildingActor(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class ABuildingActor* CallFunc_SetupBuildingActorAbility_BuildingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_BuildingActor_C", "ExecuteUbergraph_GAT_Creative_TriggeredAbility_BuildingActor");

	Params::UGAT_Creative_TriggeredAbility_BuildingActor_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_BuildingActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_SetupBuildingActorAbility_BuildingActor = CallFunc_SetupBuildingActorAbility_BuildingActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


