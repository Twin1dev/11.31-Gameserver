#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BurbankSmall-XS-Teal.TextStyle-BurbankSmall-XS-Teal_C
// (None)

class UClass* UTextStyleMinusBurbankSmallMinusXSMinusTeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BurbankSmall-XS-Teal_C");

	return Clss;
}


// TextStyle-BurbankSmall-XS-Teal_C TextStyle-BurbankSmall-XS-Teal.Default__TextStyle-BurbankSmall-XS-Teal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBurbankSmallMinusXSMinusTeal_C* UTextStyleMinusBurbankSmallMinusXSMinusTeal_C::GetDefaultObj()
{
	static class UTextStyleMinusBurbankSmallMinusXSMinusTeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBurbankSmallMinusXSMinusTeal_C*>(UTextStyleMinusBurbankSmallMinusXSMinusTeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


