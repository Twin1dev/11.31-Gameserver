#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Hamburger.ButtonStyle-Hamburger_C
// (None)

class UClass* UButtonStyleMinusHamburger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Hamburger_C");

	return Clss;
}


// ButtonStyle-Hamburger_C ButtonStyle-Hamburger.Default__ButtonStyle-Hamburger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusHamburger_C* UButtonStyleMinusHamburger_C::GetDefaultObj()
{
	static class UButtonStyleMinusHamburger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusHamburger_C*>(UButtonStyleMinusHamburger_C::StaticClass()->DefaultObject);

	return Default;
}

}


