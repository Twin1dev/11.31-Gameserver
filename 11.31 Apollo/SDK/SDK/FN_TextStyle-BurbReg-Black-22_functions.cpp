#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BurbReg-Black-22.TextStyle-BurbReg-Black-22_C
// (None)

class UClass* UTextStyleMinusBurbRegMinusBlackMinus22_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BurbReg-Black-22_C");

	return Clss;
}


// TextStyle-BurbReg-Black-22_C TextStyle-BurbReg-Black-22.Default__TextStyle-BurbReg-Black-22_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBurbRegMinusBlackMinus22_C* UTextStyleMinusBurbRegMinusBlackMinus22_C::GetDefaultObj()
{
	static class UTextStyleMinusBurbRegMinusBlackMinus22_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBurbRegMinusBlackMinus22_C*>(UTextStyleMinusBurbRegMinusBlackMinus22_C::StaticClass()->DefaultObject);

	return Default;
}

}


