#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AI_skill_phoebe_bot_rangeAttack.AI_skill_phoebe_bot_rangeAttack_C
// (None)

class UClass* UAI_skill_phoebe_bot_rangeAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_skill_phoebe_bot_rangeAttack_C");

	return Clss;
}


// AI_skill_phoebe_bot_rangeAttack_C AI_skill_phoebe_bot_rangeAttack.Default__AI_skill_phoebe_bot_rangeAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_skill_phoebe_bot_rangeAttack_C* UAI_skill_phoebe_bot_rangeAttack_C::GetDefaultObj()
{
	static class UAI_skill_phoebe_bot_rangeAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_skill_phoebe_bot_rangeAttack_C*>(UAI_skill_phoebe_bot_rangeAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


