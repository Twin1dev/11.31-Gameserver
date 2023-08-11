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


// Function I_FrontendBackplateMatchmakingInteraction.I_FrontendBackplateMatchmakingInteraction_C.MatchmakingEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccess                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_FrontendBackplateMatchmakingInteraction_C::MatchmakingEnded(bool bWasSuccess)
{
	static auto Func = Class->GetFunction("I_FrontendBackplateMatchmakingInteraction_C", "MatchmakingEnded");

	Params::II_FrontendBackplateMatchmakingInteraction_C_MatchmakingEnded_Params Parms;

	Parms.bWasSuccess = bWasSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function I_FrontendBackplateMatchmakingInteraction.I_FrontendBackplateMatchmakingInteraction_C.HasMatcmakingInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasInteraction                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_FrontendBackplateMatchmakingInteraction_C::HasMatcmakingInteraction(bool* HasInteraction)
{
	static auto Func = Class->GetFunction("I_FrontendBackplateMatchmakingInteraction_C", "HasMatcmakingInteraction");

	Params::II_FrontendBackplateMatchmakingInteraction_C_HasMatcmakingInteraction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (HasInteraction != nullptr)
		*HasInteraction = Parms.HasInteraction;

}


// Function I_FrontendBackplateMatchmakingInteraction.I_FrontendBackplateMatchmakingInteraction_C.EnteringMatchmaking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void II_FrontendBackplateMatchmakingInteraction_C::EnteringMatchmaking()
{
	static auto Func = Class->GetFunction("I_FrontendBackplateMatchmakingInteraction_C", "EnteringMatchmaking");

	Params::II_FrontendBackplateMatchmakingInteraction_C_EnteringMatchmaking_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
