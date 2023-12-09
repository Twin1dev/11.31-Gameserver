#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AI_skill_phoebe_bot_perception.AI_skill_phoebe_bot_perception_C
// (None)

class UClass* UAI_skill_phoebe_bot_perception_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_skill_phoebe_bot_perception_C");

	return Clss;
}


// AI_skill_phoebe_bot_perception_C AI_skill_phoebe_bot_perception.Default__AI_skill_phoebe_bot_perception_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_skill_phoebe_bot_perception_C* UAI_skill_phoebe_bot_perception_C::GetDefaultObj()
{
	static class UAI_skill_phoebe_bot_perception_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_skill_phoebe_bot_perception_C*>(UAI_skill_phoebe_bot_perception_C::StaticClass()->DefaultObject);

	return Default;
}

}


