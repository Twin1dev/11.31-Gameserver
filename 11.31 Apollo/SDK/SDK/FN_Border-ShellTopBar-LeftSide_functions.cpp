#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ShellTopBar-LeftSide.Border-ShellTopBar-LeftSide_C
// (None)

class UClass* UBorderMinusShellTopBarMinusLeftSide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ShellTopBar-LeftSide_C");

	return Clss;
}


// Border-ShellTopBar-LeftSide_C Border-ShellTopBar-LeftSide.Default__Border-ShellTopBar-LeftSide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusShellTopBarMinusLeftSide_C* UBorderMinusShellTopBarMinusLeftSide_C::GetDefaultObj()
{
	static class UBorderMinusShellTopBarMinusLeftSide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusShellTopBarMinusLeftSide_C*>(UBorderMinusShellTopBarMinusLeftSide_C::StaticClass()->DefaultObject);

	return Default;
}

}


