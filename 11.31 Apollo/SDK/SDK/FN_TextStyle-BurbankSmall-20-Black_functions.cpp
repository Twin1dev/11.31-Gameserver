#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BurbankSmall-20-Black.TextStyle-BurbankSmall-20-Black_C
// (None)

class UClass* UTextStyleMinusBurbankSmallMinus20MinusBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BurbankSmall-20-Black_C");

	return Clss;
}


// TextStyle-BurbankSmall-20-Black_C TextStyle-BurbankSmall-20-Black.Default__TextStyle-BurbankSmall-20-Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBurbankSmallMinus20MinusBlack_C* UTextStyleMinusBurbankSmallMinus20MinusBlack_C::GetDefaultObj()
{
	static class UTextStyleMinusBurbankSmallMinus20MinusBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBurbankSmallMinus20MinusBlack_C*>(UTextStyleMinusBurbankSmallMinus20MinusBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


