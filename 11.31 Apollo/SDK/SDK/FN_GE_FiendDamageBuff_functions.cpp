#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FiendDamageBuff.GE_FiendDamageBuff_C
// (None)

class UClass* UGE_FiendDamageBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FiendDamageBuff_C");

	return Clss;
}


// GE_FiendDamageBuff_C GE_FiendDamageBuff.Default__GE_FiendDamageBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FiendDamageBuff_C* UGE_FiendDamageBuff_C::GetDefaultObj()
{
	static class UGE_FiendDamageBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FiendDamageBuff_C*>(UGE_FiendDamageBuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


