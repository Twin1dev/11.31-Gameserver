#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IslandPortalInteractionInterface.IslandPortalInteractionInterface_C
// (None)

class UClass* IIslandPortalInteractionInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IslandPortalInteractionInterface_C");

	return Clss;
}


// IslandPortalInteractionInterface_C IslandPortalInteractionInterface.Default__IslandPortalInteractionInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIslandPortalInteractionInterface_C* IIslandPortalInteractionInterface_C::GetDefaultObj()
{
	static class IIslandPortalInteractionInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIslandPortalInteractionInterface_C*>(IIslandPortalInteractionInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IslandPortalInteractionInterface.IslandPortalInteractionInterface_C.BroadcastIsBeingInteractedWith
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInteracting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIslandPortalInteractionInterface_C::BroadcastIsBeingInteractedWith(bool IsInteracting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IslandPortalInteractionInterface_C", "BroadcastIsBeingInteractedWith");

	Params::IIslandPortalInteractionInterface_C_BroadcastIsBeingInteractedWith_Params Parms{};

	Parms.IsInteracting = IsInteracting;

	UObject::ProcessEvent(Func, &Parms);

}

}


