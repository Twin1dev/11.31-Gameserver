#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LetoHudOverlay.LetoHudOverlay_C
// (None)

class UClass* ULetoHudOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LetoHudOverlay_C");

	return Clss;
}


// LetoHudOverlay_C LetoHudOverlay.Default__LetoHudOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULetoHudOverlay_C* ULetoHudOverlay_C::GetDefaultObj()
{
	static class ULetoHudOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULetoHudOverlay_C*>(ULetoHudOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


