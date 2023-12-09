#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AI_skill_phoebe_bot_harvest.AI_skill_phoebe_bot_harvest_C
// (None)

class UClass* UAI_skill_phoebe_bot_harvest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_skill_phoebe_bot_harvest_C");

	return Clss;
}


// AI_skill_phoebe_bot_harvest_C AI_skill_phoebe_bot_harvest.Default__AI_skill_phoebe_bot_harvest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_skill_phoebe_bot_harvest_C* UAI_skill_phoebe_bot_harvest_C::GetDefaultObj()
{
	static class UAI_skill_phoebe_bot_harvest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_skill_phoebe_bot_harvest_C*>(UAI_skill_phoebe_bot_harvest_C::StaticClass()->DefaultObject);

	return Default;
}

}


