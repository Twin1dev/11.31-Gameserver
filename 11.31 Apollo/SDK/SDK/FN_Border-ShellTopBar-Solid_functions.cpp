#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ShellTopBar-Solid.Border-ShellTopBar-Solid_C
// (None)

class UClass* UBorderMinusShellTopBarMinusSolid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ShellTopBar-Solid_C");

	return Clss;
}


// Border-ShellTopBar-Solid_C Border-ShellTopBar-Solid.Default__Border-ShellTopBar-Solid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusShellTopBarMinusSolid_C* UBorderMinusShellTopBarMinusSolid_C::GetDefaultObj()
{
	static class UBorderMinusShellTopBarMinusSolid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusShellTopBarMinusSolid_C*>(UBorderMinusShellTopBarMinusSolid_C::StaticClass()->DefaultObject);

	return Default;
}

}


