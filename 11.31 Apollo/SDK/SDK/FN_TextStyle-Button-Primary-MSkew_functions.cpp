#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Primary-MSkew.TextStyle-Button-Primary-MSkew_C
// (None)

class UClass* UTextStyleMinusButtonMinusPrimaryMinusMSkew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Primary-MSkew_C");

	return Clss;
}


// TextStyle-Button-Primary-MSkew_C TextStyle-Button-Primary-MSkew.Default__TextStyle-Button-Primary-MSkew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusPrimaryMinusMSkew_C* UTextStyleMinusButtonMinusPrimaryMinusMSkew_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusPrimaryMinusMSkew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusPrimaryMinusMSkew_C*>(UTextStyleMinusButtonMinusPrimaryMinusMSkew_C::StaticClass()->DefaultObject);

	return Default;
}

}


