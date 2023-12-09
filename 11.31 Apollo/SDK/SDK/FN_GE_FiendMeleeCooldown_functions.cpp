#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FiendMeleeCooldown.GE_FiendMeleeCooldown_C
// (None)

class UClass* UGE_FiendMeleeCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FiendMeleeCooldown_C");

	return Clss;
}


// GE_FiendMeleeCooldown_C GE_FiendMeleeCooldown.Default__GE_FiendMeleeCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FiendMeleeCooldown_C* UGE_FiendMeleeCooldown_C::GetDefaultObj()
{
	static class UGE_FiendMeleeCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FiendMeleeCooldown_C*>(UGE_FiendMeleeCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


