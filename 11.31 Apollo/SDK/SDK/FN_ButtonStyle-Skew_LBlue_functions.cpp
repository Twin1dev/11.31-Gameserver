#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_LBlue.ButtonStyle-Skew_LBlue_C
// (None)

class UClass* UButtonStyleMinusSkew_LBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_LBlue_C");

	return Clss;
}


// ButtonStyle-Skew_LBlue_C ButtonStyle-Skew_LBlue.Default__ButtonStyle-Skew_LBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_LBlue_C* UButtonStyleMinusSkew_LBlue_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_LBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_LBlue_C*>(UButtonStyleMinusSkew_LBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


