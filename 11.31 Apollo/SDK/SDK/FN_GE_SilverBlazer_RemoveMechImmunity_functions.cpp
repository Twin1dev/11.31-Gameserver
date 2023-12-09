#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SilverBlazer_RemoveMechImmunity.GE_SilverBlazer_RemoveMechImmunity_C
// (None)

class UClass* UGE_SilverBlazer_RemoveMechImmunity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SilverBlazer_RemoveMechImmunity_C");

	return Clss;
}


// GE_SilverBlazer_RemoveMechImmunity_C GE_SilverBlazer_RemoveMechImmunity.Default__GE_SilverBlazer_RemoveMechImmunity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SilverBlazer_RemoveMechImmunity_C* UGE_SilverBlazer_RemoveMechImmunity_C::GetDefaultObj()
{
	static class UGE_SilverBlazer_RemoveMechImmunity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SilverBlazer_RemoveMechImmunity_C*>(UGE_SilverBlazer_RemoveMechImmunity_C::StaticClass()->DefaultObject);

	return Default;
}

}


