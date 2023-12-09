#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DirectCreatureDamage_DoNotDamageObjectives.GE_DirectCreatureDamage_DoNotDamageObjectives_C
// (None)

class UClass* UGE_DirectCreatureDamage_DoNotDamageObjectives_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DirectCreatureDamage_DoNotDamageObjectives_C");

	return Clss;
}


// GE_DirectCreatureDamage_DoNotDamageObjectives_C GE_DirectCreatureDamage_DoNotDamageObjectives.Default__GE_DirectCreatureDamage_DoNotDamageObjectives_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DirectCreatureDamage_DoNotDamageObjectives_C* UGE_DirectCreatureDamage_DoNotDamageObjectives_C::GetDefaultObj()
{
	static class UGE_DirectCreatureDamage_DoNotDamageObjectives_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DirectCreatureDamage_DoNotDamageObjectives_C*>(UGE_DirectCreatureDamage_DoNotDamageObjectives_C::StaticClass()->DefaultObject);

	return Default;
}

}


