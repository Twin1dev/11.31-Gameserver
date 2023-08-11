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


// Function GAT_Creative_ActiveAbility_BuildingActor.GAT_Creative_ActiveAbility_BuildingActor_C.SetupBuildingActorAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*              BuildingActor                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              LocalBuildingActor                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class ABuildingActor*              K2Node_DynamicCast_AsBuilding_Actor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_Creative_ActiveAbility_BuildingActor_C::SetupBuildingActorAbility(class ABuildingActor** BuildingActor, class ABuildingActor* LocalBuildingActor, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GAT_Creative_ActiveAbility_BuildingActor_C", "SetupBuildingActorAbility");

	Params::UGAT_Creative_ActiveAbility_BuildingActor_C_SetupBuildingActorAbility_Params Parms;

	Parms.LocalBuildingActor = LocalBuildingActor;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Actor = K2Node_DynamicCast_AsBuilding_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (BuildingActor != nullptr)
		*BuildingActor = Parms.BuildingActor;

}


// Function GAT_Creative_ActiveAbility_BuildingActor.GAT_Creative_ActiveAbility_BuildingActor_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAT_Creative_ActiveAbility_BuildingActor_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAT_Creative_ActiveAbility_BuildingActor_C", "K2_ActivateAbility");

	Params::UGAT_Creative_ActiveAbility_BuildingActor_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_Creative_ActiveAbility_BuildingActor.GAT_Creative_ActiveAbility_BuildingActor_C.ExecuteUbergraph_GAT_Creative_ActiveAbility_BuildingActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              CallFunc_SetupBuildingActorAbility_BuildingActor                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_Creative_ActiveAbility_BuildingActor_C::ExecuteUbergraph_GAT_Creative_ActiveAbility_BuildingActor(int32 EntryPoint, class ABuildingActor* CallFunc_SetupBuildingActorAbility_BuildingActor)
{
	static auto Func = Class->GetFunction("GAT_Creative_ActiveAbility_BuildingActor_C", "ExecuteUbergraph_GAT_Creative_ActiveAbility_BuildingActor");

	Params::UGAT_Creative_ActiveAbility_BuildingActor_C_ExecuteUbergraph_GAT_Creative_ActiveAbility_BuildingActor_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SetupBuildingActorAbility_BuildingActor = CallFunc_SetupBuildingActorAbility_BuildingActor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
