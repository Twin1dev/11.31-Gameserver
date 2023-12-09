#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Primary-M_Skew_Blue.ButtonStyle-Primary-M_Skew_Blue_C
// (None)

class UClass* UButtonStyleMinusPrimaryMinusM_Skew_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Primary-M_Skew_Blue_C");

	return Clss;
}


// ButtonStyle-Primary-M_Skew_Blue_C ButtonStyle-Primary-M_Skew_Blue.Default__ButtonStyle-Primary-M_Skew_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusPrimaryMinusM_Skew_Blue_C* UButtonStyleMinusPrimaryMinusM_Skew_Blue_C::GetDefaultObj()
{
	static class UButtonStyleMinusPrimaryMinusM_Skew_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusPrimaryMinusM_Skew_Blue_C*>(UButtonStyleMinusPrimaryMinusM_Skew_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}


