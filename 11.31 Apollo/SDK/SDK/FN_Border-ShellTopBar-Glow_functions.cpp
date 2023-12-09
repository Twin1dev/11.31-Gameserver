#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ShellTopBar-Glow.Border-ShellTopBar-Glow_C
// (None)

class UClass* UBorderMinusShellTopBarMinusGlow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ShellTopBar-Glow_C");

	return Clss;
}


// Border-ShellTopBar-Glow_C Border-ShellTopBar-Glow.Default__Border-ShellTopBar-Glow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusShellTopBarMinusGlow_C* UBorderMinusShellTopBarMinusGlow_C::GetDefaultObj()
{
	static class UBorderMinusShellTopBarMinusGlow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusShellTopBarMinusGlow_C*>(UBorderMinusShellTopBarMinusGlow_C::StaticClass()->DefaultObject);

	return Default;
}

}


