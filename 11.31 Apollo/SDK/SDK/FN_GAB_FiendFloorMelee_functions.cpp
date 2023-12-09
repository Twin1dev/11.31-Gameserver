#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_FiendFloorMelee.GAB_FiendFloorMelee_C
// (None)

class UClass* UGAB_FiendFloorMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_FiendFloorMelee_C");

	return Clss;
}


// GAB_FiendFloorMelee_C GAB_FiendFloorMelee.Default__GAB_FiendFloorMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_FiendFloorMelee_C* UGAB_FiendFloorMelee_C::GetDefaultObj()
{
	static class UGAB_FiendFloorMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_FiendFloorMelee_C*>(UGAB_FiendFloorMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}


