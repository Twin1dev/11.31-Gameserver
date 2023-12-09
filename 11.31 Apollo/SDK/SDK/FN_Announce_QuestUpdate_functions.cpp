#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_QuestUpdate.Announce_QuestUpdate_C
// (Actor)

class UClass* AAnnounce_QuestUpdate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_QuestUpdate_C");

	return Clss;
}


// Announce_QuestUpdate_C Announce_QuestUpdate.Default__Announce_QuestUpdate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_QuestUpdate_C* AAnnounce_QuestUpdate_C::GetDefaultObj()
{
	static class AAnnounce_QuestUpdate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_QuestUpdate_C*>(AAnnounce_QuestUpdate_C::StaticClass()->DefaultObject);

	return Default;
}

}


