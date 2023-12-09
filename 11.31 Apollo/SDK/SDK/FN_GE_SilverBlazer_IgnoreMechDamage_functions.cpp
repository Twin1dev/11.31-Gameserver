#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SilverBlazer_IgnoreMechDamage.GE_SilverBlazer_IgnoreMechDamage_C
// (None)

class UClass* UGE_SilverBlazer_IgnoreMechDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SilverBlazer_IgnoreMechDamage_C");

	return Clss;
}


// GE_SilverBlazer_IgnoreMechDamage_C GE_SilverBlazer_IgnoreMechDamage.Default__GE_SilverBlazer_IgnoreMechDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SilverBlazer_IgnoreMechDamage_C* UGE_SilverBlazer_IgnoreMechDamage_C::GetDefaultObj()
{
	static class UGE_SilverBlazer_IgnoreMechDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SilverBlazer_IgnoreMechDamage_C*>(UGE_SilverBlazer_IgnoreMechDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


