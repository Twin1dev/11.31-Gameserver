#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Serverbrowser.ButtonStyle-Serverbrowser_C
// (None)

class UClass* UButtonStyleMinusServerbrowser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Serverbrowser_C");

	return Clss;
}


// ButtonStyle-Serverbrowser_C ButtonStyle-Serverbrowser.Default__ButtonStyle-Serverbrowser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusServerbrowser_C* UButtonStyleMinusServerbrowser_C::GetDefaultObj()
{
	static class UButtonStyleMinusServerbrowser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusServerbrowser_C*>(UButtonStyleMinusServerbrowser_C::StaticClass()->DefaultObject);

	return Default;
}

}


