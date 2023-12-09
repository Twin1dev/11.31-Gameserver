#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_RPG_LowTier.BulletWhipTrackerComponent_RPG_LowTier_C
// (None)

class UClass* UBulletWhipTrackerComponent_RPG_LowTier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_RPG_LowTier_C");

	return Clss;
}


// BulletWhipTrackerComponent_RPG_LowTier_C BulletWhipTrackerComponent_RPG_LowTier.Default__BulletWhipTrackerComponent_RPG_LowTier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_RPG_LowTier_C* UBulletWhipTrackerComponent_RPG_LowTier_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_RPG_LowTier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_RPG_LowTier_C*>(UBulletWhipTrackerComponent_RPG_LowTier_C::StaticClass()->DefaultObject);

	return Default;
}

}


