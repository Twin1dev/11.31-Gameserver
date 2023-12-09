#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SphereEdgeAudioComponent.SphereEdgeAudioComponent_C
// (None)

class UClass* USphereEdgeAudioComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SphereEdgeAudioComponent_C");

	return Clss;
}


// SphereEdgeAudioComponent_C SphereEdgeAudioComponent.Default__SphereEdgeAudioComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USphereEdgeAudioComponent_C* USphereEdgeAudioComponent_C::GetDefaultObj()
{
	static class USphereEdgeAudioComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USphereEdgeAudioComponent_C*>(USphereEdgeAudioComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


