#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_FiendCeilingMelee.GAB_FiendCeilingMelee_C
// (None)

class UClass* UGAB_FiendCeilingMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_FiendCeilingMelee_C");

	return Clss;
}


// GAB_FiendCeilingMelee_C GAB_FiendCeilingMelee.Default__GAB_FiendCeilingMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_FiendCeilingMelee_C* UGAB_FiendCeilingMelee_C::GetDefaultObj()
{
	static class UGAB_FiendCeilingMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_FiendCeilingMelee_C*>(UGAB_FiendCeilingMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}


