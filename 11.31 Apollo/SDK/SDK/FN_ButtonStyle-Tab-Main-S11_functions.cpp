#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Tab-Main-S11.ButtonStyle-Tab-Main-S11_C
// (None)

class UClass* UButtonStyleMinusTabMinusMainMinusS11_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Tab-Main-S11_C");

	return Clss;
}


// ButtonStyle-Tab-Main-S11_C ButtonStyle-Tab-Main-S11.Default__ButtonStyle-Tab-Main-S11_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTabMinusMainMinusS11_C* UButtonStyleMinusTabMinusMainMinusS11_C::GetDefaultObj()
{
	static class UButtonStyleMinusTabMinusMainMinusS11_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTabMinusMainMinusS11_C*>(UButtonStyleMinusTabMinusMainMinusS11_C::StaticClass()->DefaultObject);

	return Default;
}

}


