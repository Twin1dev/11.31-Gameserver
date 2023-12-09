#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_Com_Like_blue.ButtonStyle-Skew_Com_Like_blue_C
// (None)

class UClass* UButtonStyleMinusSkew_Com_Like_blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_Com_Like_blue_C");

	return Clss;
}


// ButtonStyle-Skew_Com_Like_blue_C ButtonStyle-Skew_Com_Like_blue.Default__ButtonStyle-Skew_Com_Like_blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_Com_Like_blue_C* UButtonStyleMinusSkew_Com_Like_blue_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_Com_Like_blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_Com_Like_blue_C*>(UButtonStyleMinusSkew_Com_Like_blue_C::StaticClass()->DefaultObject);

	return Default;
}

}


