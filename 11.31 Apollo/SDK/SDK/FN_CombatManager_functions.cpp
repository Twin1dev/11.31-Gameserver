#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CombatManager.CombatManager_C
// (None)

class UClass* UCombatManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CombatManager_C");

	return Clss;
}


// CombatManager_C CombatManager.Default__CombatManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCombatManager_C* UCombatManager_C::GetDefaultObj()
{
	static class UCombatManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCombatManager_C*>(UCombatManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


