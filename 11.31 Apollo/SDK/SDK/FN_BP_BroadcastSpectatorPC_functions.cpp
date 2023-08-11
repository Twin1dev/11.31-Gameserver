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


// Function BP_BroadcastSpectatorPC.BP_BroadcastSpectatorPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMarkerComponent*      CallFunc_GetMarkerComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BroadcastSpectatorPC_C::UserConstructionScript(class UAthenaMarkerComponent* CallFunc_GetMarkerComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_BroadcastSpectatorPC_C", "UserConstructionScript");

	Params::ABP_BroadcastSpectatorPC_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_GetMarkerComponent_ReturnValue = CallFunc_GetMarkerComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
