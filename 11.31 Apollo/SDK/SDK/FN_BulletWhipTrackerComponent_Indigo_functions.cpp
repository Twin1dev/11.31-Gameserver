#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_Indigo.BulletWhipTrackerComponent_Indigo_C
// (None)

class UClass* UBulletWhipTrackerComponent_Indigo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_Indigo_C");

	return Clss;
}


// BulletWhipTrackerComponent_Indigo_C BulletWhipTrackerComponent_Indigo.Default__BulletWhipTrackerComponent_Indigo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_Indigo_C* UBulletWhipTrackerComponent_Indigo_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_Indigo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_Indigo_C*>(UBulletWhipTrackerComponent_Indigo_C::StaticClass()->DefaultObject);

	return Default;
}

}


