#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AI_skill_phoebe_bot_attacking.AI_skill_phoebe_bot_attacking_C
// (None)

class UClass* UAI_skill_phoebe_bot_attacking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_skill_phoebe_bot_attacking_C");

	return Clss;
}


// AI_skill_phoebe_bot_attacking_C AI_skill_phoebe_bot_attacking.Default__AI_skill_phoebe_bot_attacking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_skill_phoebe_bot_attacking_C* UAI_skill_phoebe_bot_attacking_C::GetDefaultObj()
{
	static class UAI_skill_phoebe_bot_attacking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_skill_phoebe_bot_attacking_C*>(UAI_skill_phoebe_bot_attacking_C::StaticClass()->DefaultObject);

	return Default;
}

}


