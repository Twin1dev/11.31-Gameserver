#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Solo.ButtonStyle-Solo_C
// (None)

class UClass* UButtonStyleMinusSolo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Solo_C");

	return Clss;
}


// ButtonStyle-Solo_C ButtonStyle-Solo.Default__ButtonStyle-Solo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSolo_C* UButtonStyleMinusSolo_C::GetDefaultObj()
{
	static class UButtonStyleMinusSolo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSolo_C*>(UButtonStyleMinusSolo_C::StaticClass()->DefaultObject);

	return Default;
}

}


