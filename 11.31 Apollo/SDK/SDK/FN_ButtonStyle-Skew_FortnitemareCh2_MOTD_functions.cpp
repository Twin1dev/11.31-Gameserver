#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_FortnitemareCh2_MOTD.ButtonStyle-Skew_FortnitemareCh2_MOTD_C
// (None)

class UClass* UButtonStyleMinusSkew_FortnitemareCh2_MOTD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_FortnitemareCh2_MOTD_C");

	return Clss;
}


// ButtonStyle-Skew_FortnitemareCh2_MOTD_C ButtonStyle-Skew_FortnitemareCh2_MOTD.Default__ButtonStyle-Skew_FortnitemareCh2_MOTD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_FortnitemareCh2_MOTD_C* UButtonStyleMinusSkew_FortnitemareCh2_MOTD_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_FortnitemareCh2_MOTD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_FortnitemareCh2_MOTD_C*>(UButtonStyleMinusSkew_FortnitemareCh2_MOTD_C::StaticClass()->DefaultObject);

	return Default;
}

}


