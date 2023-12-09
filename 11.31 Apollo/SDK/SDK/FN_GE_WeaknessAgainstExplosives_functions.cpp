#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_WeaknessAgainstExplosives.GE_WeaknessAgainstExplosives_C
// (None)

class UClass* UGE_WeaknessAgainstExplosives_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_WeaknessAgainstExplosives_C");

	return Clss;
}


// GE_WeaknessAgainstExplosives_C GE_WeaknessAgainstExplosives.Default__GE_WeaknessAgainstExplosives_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_WeaknessAgainstExplosives_C* UGE_WeaknessAgainstExplosives_C::GetDefaultObj()
{
	static class UGE_WeaknessAgainstExplosives_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_WeaknessAgainstExplosives_C*>(UGE_WeaknessAgainstExplosives_C::StaticClass()->DefaultObject);

	return Default;
}

}


