#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BurbankSmall-M-Black.TextStyle-BurbankSmall-M-Black_C
// (None)

class UClass* UTextStyleMinusBurbankSmallMinusMMinusBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BurbankSmall-M-Black_C");

	return Clss;
}


// TextStyle-BurbankSmall-M-Black_C TextStyle-BurbankSmall-M-Black.Default__TextStyle-BurbankSmall-M-Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBurbankSmallMinusMMinusBlack_C* UTextStyleMinusBurbankSmallMinusMMinusBlack_C::GetDefaultObj()
{
	static class UTextStyleMinusBurbankSmallMinusMMinusBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBurbankSmallMinusMMinusBlack_C*>(UTextStyleMinusBurbankSmallMinusMMinusBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


