#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-HUD-XPValue.TextStyle-HUD-XPValue_C
// (None)

class UClass* UTextStyleMinusHUDMinusXPValue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-HUD-XPValue_C");

	return Clss;
}


// TextStyle-HUD-XPValue_C TextStyle-HUD-XPValue.Default__TextStyle-HUD-XPValue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHUDMinusXPValue_C* UTextStyleMinusHUDMinusXPValue_C::GetDefaultObj()
{
	static class UTextStyleMinusHUDMinusXPValue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHUDMinusXPValue_C*>(UTextStyleMinusHUDMinusXPValue_C::StaticClass()->DefaultObject);

	return Default;
}

}


