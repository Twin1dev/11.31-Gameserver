#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_EnvCampFire_Death.GCN_EnvCampFire_Death_C
// (None)

class UClass* UGCN_EnvCampFire_Death_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_EnvCampFire_Death_C");

	return Clss;
}


// GCN_EnvCampFire_Death_C GCN_EnvCampFire_Death.Default__GCN_EnvCampFire_Death_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_EnvCampFire_Death_C* UGCN_EnvCampFire_Death_C::GetDefaultObj()
{
	static class UGCN_EnvCampFire_Death_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_EnvCampFire_Death_C*>(UGCN_EnvCampFire_Death_C::StaticClass()->DefaultObject);

	return Default;
}

}


