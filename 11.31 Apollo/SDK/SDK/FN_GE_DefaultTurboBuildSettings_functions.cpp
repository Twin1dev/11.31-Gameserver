#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DefaultTurboBuildSettings.GE_DefaultTurboBuildSettings_C
// (None)

class UClass* UGE_DefaultTurboBuildSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DefaultTurboBuildSettings_C");

	return Clss;
}


// GE_DefaultTurboBuildSettings_C GE_DefaultTurboBuildSettings.Default__GE_DefaultTurboBuildSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DefaultTurboBuildSettings_C* UGE_DefaultTurboBuildSettings_C::GetDefaultObj()
{
	static class UGE_DefaultTurboBuildSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DefaultTurboBuildSettings_C*>(UGE_DefaultTurboBuildSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


