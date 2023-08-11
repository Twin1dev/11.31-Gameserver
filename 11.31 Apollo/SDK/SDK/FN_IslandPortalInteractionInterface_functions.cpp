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


// Function IslandPortalInteractionInterface.IslandPortalInteractionInterface_C.BroadcastIsBeingInteractedWith
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInteracting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIslandPortalInteractionInterface_C::BroadcastIsBeingInteractedWith(bool IsInteracting)
{
	static auto Func = Class->GetFunction("IslandPortalInteractionInterface_C", "BroadcastIsBeingInteractedWith");

	Params::IIslandPortalInteractionInterface_C_BroadcastIsBeingInteractedWith_Params Parms;

	Parms.IsInteracting = IsInteracting;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
