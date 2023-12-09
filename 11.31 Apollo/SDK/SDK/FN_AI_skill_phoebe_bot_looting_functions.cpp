#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AI_skill_phoebe_bot_looting.AI_skill_phoebe_bot_looting_C
// (None)

class UClass* UAI_skill_phoebe_bot_looting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_skill_phoebe_bot_looting_C");

	return Clss;
}


// AI_skill_phoebe_bot_looting_C AI_skill_phoebe_bot_looting.Default__AI_skill_phoebe_bot_looting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_skill_phoebe_bot_looting_C* UAI_skill_phoebe_bot_looting_C::GetDefaultObj()
{
	static class UAI_skill_phoebe_bot_looting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_skill_phoebe_bot_looting_C*>(UAI_skill_phoebe_bot_looting_C::StaticClass()->DefaultObject);

	return Default;
}

}


