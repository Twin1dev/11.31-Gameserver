#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FiendWeaknessAgainstMelee.GE_FiendWeaknessAgainstMelee_C
// (None)

class UClass* UGE_FiendWeaknessAgainstMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FiendWeaknessAgainstMelee_C");

	return Clss;
}


// GE_FiendWeaknessAgainstMelee_C GE_FiendWeaknessAgainstMelee.Default__GE_FiendWeaknessAgainstMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FiendWeaknessAgainstMelee_C* UGE_FiendWeaknessAgainstMelee_C::GetDefaultObj()
{
	static class UGE_FiendWeaknessAgainstMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FiendWeaknessAgainstMelee_C*>(UGE_FiendWeaknessAgainstMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}


