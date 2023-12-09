#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Com-small10_shadow.TextStyle-Com-small10_shadow_C
// (None)

class UClass* UTextStyleMinusComMinussmall10_shadow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Com-small10_shadow_C");

	return Clss;
}


// TextStyle-Com-small10_shadow_C TextStyle-Com-small10_shadow.Default__TextStyle-Com-small10_shadow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusComMinussmall10_shadow_C* UTextStyleMinusComMinussmall10_shadow_C::GetDefaultObj()
{
	static class UTextStyleMinusComMinussmall10_shadow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusComMinussmall10_shadow_C*>(UTextStyleMinusComMinussmall10_shadow_C::StaticClass()->DefaultObject);

	return Default;
}

}


