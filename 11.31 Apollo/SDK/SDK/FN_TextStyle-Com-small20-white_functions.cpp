#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Com-small20-white.TextStyle-Com-small20-white_C
// (None)

class UClass* UTextStyleMinusComMinussmall20Minuswhite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Com-small20-white_C");

	return Clss;
}


// TextStyle-Com-small20-white_C TextStyle-Com-small20-white.Default__TextStyle-Com-small20-white_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusComMinussmall20Minuswhite_C* UTextStyleMinusComMinussmall20Minuswhite_C::GetDefaultObj()
{
	static class UTextStyleMinusComMinussmall20Minuswhite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusComMinussmall20Minuswhite_C*>(UTextStyleMinusComMinussmall20Minuswhite_C::StaticClass()->DefaultObject);

	return Default;
}

}


