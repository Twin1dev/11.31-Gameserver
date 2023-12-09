#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_FiendDeath.GAB_FiendDeath_C
// (None)

class UClass* UGAB_FiendDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_FiendDeath_C");

	return Clss;
}


// GAB_FiendDeath_C GAB_FiendDeath.Default__GAB_FiendDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_FiendDeath_C* UGAB_FiendDeath_C::GetDefaultObj()
{
	static class UGAB_FiendDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_FiendDeath_C*>(UGAB_FiendDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}


