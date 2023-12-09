#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Primary-M_Skew_Yellow.ButtonStyle-Primary-M_Skew_Yellow_C
// (None)

class UClass* UButtonStyleMinusPrimaryMinusM_Skew_Yellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Primary-M_Skew_Yellow_C");

	return Clss;
}


// ButtonStyle-Primary-M_Skew_Yellow_C ButtonStyle-Primary-M_Skew_Yellow.Default__ButtonStyle-Primary-M_Skew_Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusPrimaryMinusM_Skew_Yellow_C* UButtonStyleMinusPrimaryMinusM_Skew_Yellow_C::GetDefaultObj()
{
	static class UButtonStyleMinusPrimaryMinusM_Skew_Yellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusPrimaryMinusM_Skew_Yellow_C*>(UButtonStyleMinusPrimaryMinusM_Skew_Yellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


