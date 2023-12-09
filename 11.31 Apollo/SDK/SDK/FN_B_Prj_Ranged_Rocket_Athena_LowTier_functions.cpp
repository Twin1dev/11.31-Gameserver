#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_Ranged_Rocket_Athena_LowTier.B_Prj_Ranged_Rocket_Athena_LowTier_C
// (Actor)

class UClass* AB_Prj_Ranged_Rocket_Athena_LowTier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_Ranged_Rocket_Athena_LowTier_C");

	return Clss;
}


// B_Prj_Ranged_Rocket_Athena_LowTier_C B_Prj_Ranged_Rocket_Athena_LowTier.Default__B_Prj_Ranged_Rocket_Athena_LowTier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_Ranged_Rocket_Athena_LowTier_C* AB_Prj_Ranged_Rocket_Athena_LowTier_C::GetDefaultObj()
{
	static class AB_Prj_Ranged_Rocket_Athena_LowTier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_Ranged_Rocket_Athena_LowTier_C*>(AB_Prj_Ranged_Rocket_Athena_LowTier_C::StaticClass()->DefaultObject);

	return Default;
}

}


