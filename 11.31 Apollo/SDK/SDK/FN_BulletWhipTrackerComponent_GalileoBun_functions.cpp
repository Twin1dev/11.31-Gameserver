#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_GalileoBun.BulletWhipTrackerComponent_GalileoBun_C
// (None)

class UClass* UBulletWhipTrackerComponent_GalileoBun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_GalileoBun_C");

	return Clss;
}


// BulletWhipTrackerComponent_GalileoBun_C BulletWhipTrackerComponent_GalileoBun.Default__BulletWhipTrackerComponent_GalileoBun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_GalileoBun_C* UBulletWhipTrackerComponent_GalileoBun_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_GalileoBun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_GalileoBun_C*>(UBulletWhipTrackerComponent_GalileoBun_C::StaticClass()->DefaultObject);

	return Default;
}

}


