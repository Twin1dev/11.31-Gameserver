#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DirectCreatureDamage.GET_DirectCreatureDamage_C
// (None)

class UClass* UGET_DirectCreatureDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DirectCreatureDamage_C");

	return Clss;
}


// GET_DirectCreatureDamage_C GET_DirectCreatureDamage.Default__GET_DirectCreatureDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DirectCreatureDamage_C* UGET_DirectCreatureDamage_C::GetDefaultObj()
{
	static class UGET_DirectCreatureDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DirectCreatureDamage_C*>(UGET_DirectCreatureDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


