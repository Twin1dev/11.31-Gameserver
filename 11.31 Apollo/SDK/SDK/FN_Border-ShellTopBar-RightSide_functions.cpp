#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ShellTopBar-RightSide.Border-ShellTopBar-RightSide_C
// (None)

class UClass* UBorderMinusShellTopBarMinusRightSide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ShellTopBar-RightSide_C");

	return Clss;
}


// Border-ShellTopBar-RightSide_C Border-ShellTopBar-RightSide.Default__Border-ShellTopBar-RightSide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusShellTopBarMinusRightSide_C* UBorderMinusShellTopBarMinusRightSide_C::GetDefaultObj()
{
	static class UBorderMinusShellTopBarMinusRightSide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusShellTopBarMinusRightSide_C*>(UBorderMinusShellTopBarMinusRightSide_C::StaticClass()->DefaultObject);

	return Default;
}

}


