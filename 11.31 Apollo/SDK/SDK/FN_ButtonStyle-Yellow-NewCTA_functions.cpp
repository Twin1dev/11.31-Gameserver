#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Yellow-NewCTA.ButtonStyle-Yellow-NewCTA_C
// (None)

class UClass* UButtonStyleMinusYellowMinusNewCTA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Yellow-NewCTA_C");

	return Clss;
}


// ButtonStyle-Yellow-NewCTA_C ButtonStyle-Yellow-NewCTA.Default__ButtonStyle-Yellow-NewCTA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusYellowMinusNewCTA_C* UButtonStyleMinusYellowMinusNewCTA_C::GetDefaultObj()
{
	static class UButtonStyleMinusYellowMinusNewCTA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusYellowMinusNewCTA_C*>(UButtonStyleMinusYellowMinusNewCTA_C::StaticClass()->DefaultObject);

	return Default;
}

}


