#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-HUD-XPDescriptor.TextStyle-HUD-XPDescriptor_C
// (None)

class UClass* UTextStyleMinusHUDMinusXPDescriptor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-HUD-XPDescriptor_C");

	return Clss;
}


// TextStyle-HUD-XPDescriptor_C TextStyle-HUD-XPDescriptor.Default__TextStyle-HUD-XPDescriptor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHUDMinusXPDescriptor_C* UTextStyleMinusHUDMinusXPDescriptor_C::GetDefaultObj()
{
	static class UTextStyleMinusHUDMinusXPDescriptor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHUDMinusXPDescriptor_C*>(UTextStyleMinusHUDMinusXPDescriptor_C::StaticClass()->DefaultObject);

	return Default;
}

}


