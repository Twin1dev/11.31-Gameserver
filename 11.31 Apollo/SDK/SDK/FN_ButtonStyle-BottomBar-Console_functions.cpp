#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-BottomBar-Console.ButtonStyle-BottomBar-Console_C
// (None)

class UClass* UButtonStyleMinusBottomBarMinusConsole_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-BottomBar-Console_C");

	return Clss;
}


// ButtonStyle-BottomBar-Console_C ButtonStyle-BottomBar-Console.Default__ButtonStyle-BottomBar-Console_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusBottomBarMinusConsole_C* UButtonStyleMinusBottomBarMinusConsole_C::GetDefaultObj()
{
	static class UButtonStyleMinusBottomBarMinusConsole_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusBottomBarMinusConsole_C*>(UButtonStyleMinusBottomBarMinusConsole_C::StaticClass()->DefaultObject);

	return Default;
}

}


