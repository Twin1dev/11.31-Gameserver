#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Primary-M_Skew_BurbankDark.TextStyle-Button-Primary-M_Skew_BurbankDark_C
// (None)

class UClass* UTextStyleMinusButtonMinusPrimaryMinusM_Skew_BurbankDark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Primary-M_Skew_BurbankDark_C");

	return Clss;
}


// TextStyle-Button-Primary-M_Skew_BurbankDark_C TextStyle-Button-Primary-M_Skew_BurbankDark.Default__TextStyle-Button-Primary-M_Skew_BurbankDark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusPrimaryMinusM_Skew_BurbankDark_C* UTextStyleMinusButtonMinusPrimaryMinusM_Skew_BurbankDark_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusPrimaryMinusM_Skew_BurbankDark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusPrimaryMinusM_Skew_BurbankDark_C*>(UTextStyleMinusButtonMinusPrimaryMinusM_Skew_BurbankDark_C::StaticClass()->DefaultObject);

	return Default;
}

}


