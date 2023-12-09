#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass I_FrontendBackplateMatchmakingInteraction.I_FrontendBackplateMatchmakingInteraction_C
// (None)

class UClass* II_FrontendBackplateMatchmakingInteraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("I_FrontendBackplateMatchmakingInteraction_C");

	return Clss;
}


// I_FrontendBackplateMatchmakingInteraction_C I_FrontendBackplateMatchmakingInteraction.Default__I_FrontendBackplateMatchmakingInteraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class II_FrontendBackplateMatchmakingInteraction_C* II_FrontendBackplateMatchmakingInteraction_C::GetDefaultObj()
{
	static class II_FrontendBackplateMatchmakingInteraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<II_FrontendBackplateMatchmakingInteraction_C*>(II_FrontendBackplateMatchmakingInteraction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function I_FrontendBackplateMatchmakingInteraction.I_FrontendBackplateMatchmakingInteraction_C.MatchmakingEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccess                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_FrontendBackplateMatchmakingInteraction_C::MatchmakingEnded(bool bWasSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_FrontendBackplateMatchmakingInteraction_C", "MatchmakingEnded");

	Params::II_FrontendBackplateMatchmakingInteraction_C_MatchmakingEnded_Params Parms{};

	Parms.bWasSuccess = bWasSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function I_FrontendBackplateMatchmakingInteraction.I_FrontendBackplateMatchmakingInteraction_C.HasMatcmakingInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasInteraction                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_FrontendBackplateMatchmakingInteraction_C::HasMatcmakingInteraction(bool* HasInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_FrontendBackplateMatchmakingInteraction_C", "HasMatcmakingInteraction");

	Params::II_FrontendBackplateMatchmakingInteraction_C_HasMatcmakingInteraction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasInteraction != nullptr)
		*HasInteraction = Parms.HasInteraction;

}


// Function I_FrontendBackplateMatchmakingInteraction.I_FrontendBackplateMatchmakingInteraction_C.EnteringMatchmaking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void II_FrontendBackplateMatchmakingInteraction_C::EnteringMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_FrontendBackplateMatchmakingInteraction_C", "EnteringMatchmaking");



	UObject::ProcessEvent(Func, nullptr);

}

}


