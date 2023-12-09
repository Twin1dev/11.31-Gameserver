#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuestNewChallengeModalEntry.WinterQuestNewChallengeModalEntry_C
// (None)

class UClass* UWinterQuestNewChallengeModalEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuestNewChallengeModalEntry_C");

	return Clss;
}


// WinterQuestNewChallengeModalEntry_C WinterQuestNewChallengeModalEntry.Default__WinterQuestNewChallengeModalEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuestNewChallengeModalEntry_C* UWinterQuestNewChallengeModalEntry_C::GetDefaultObj()
{
	static class UWinterQuestNewChallengeModalEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuestNewChallengeModalEntry_C*>(UWinterQuestNewChallengeModalEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


