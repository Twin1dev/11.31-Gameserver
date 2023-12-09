#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_UnderwaterDamage.GE_UnderwaterDamage_C
// (None)

class UClass* UGE_UnderwaterDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_UnderwaterDamage_C");

	return Clss;
}


// GE_UnderwaterDamage_C GE_UnderwaterDamage.Default__GE_UnderwaterDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_UnderwaterDamage_C* UGE_UnderwaterDamage_C::GetDefaultObj()
{
	static class UGE_UnderwaterDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_UnderwaterDamage_C*>(UGE_UnderwaterDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


