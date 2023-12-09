#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-HUD-XPDescriptor_WinterFest.TextStyle-HUD-XPDescriptor_WinterFest_C
// (None)

class UClass* UTextStyleMinusHUDMinusXPDescriptor_WinterFest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-HUD-XPDescriptor_WinterFest_C");

	return Clss;
}


// TextStyle-HUD-XPDescriptor_WinterFest_C TextStyle-HUD-XPDescriptor_WinterFest.Default__TextStyle-HUD-XPDescriptor_WinterFest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHUDMinusXPDescriptor_WinterFest_C* UTextStyleMinusHUDMinusXPDescriptor_WinterFest_C::GetDefaultObj()
{
	static class UTextStyleMinusHUDMinusXPDescriptor_WinterFest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHUDMinusXPDescriptor_WinterFest_C*>(UTextStyleMinusHUDMinusXPDescriptor_WinterFest_C::StaticClass()->DefaultObject);

	return Default;
}

}


