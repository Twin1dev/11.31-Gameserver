#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AI_skill_phoebe_bot_healing.AI_skill_phoebe_bot_healing_C
// (None)

class UClass* UAI_skill_phoebe_bot_healing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_skill_phoebe_bot_healing_C");

	return Clss;
}


// AI_skill_phoebe_bot_healing_C AI_skill_phoebe_bot_healing.Default__AI_skill_phoebe_bot_healing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_skill_phoebe_bot_healing_C* UAI_skill_phoebe_bot_healing_C::GetDefaultObj()
{
	static class UAI_skill_phoebe_bot_healing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_skill_phoebe_bot_healing_C*>(UAI_skill_phoebe_bot_healing_C::StaticClass()->DefaultObject);

	return Default;
}

}


