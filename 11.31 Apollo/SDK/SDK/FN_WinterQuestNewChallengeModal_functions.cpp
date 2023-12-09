#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuestNewChallengeModal.WinterQuestNewChallengeModal_C
// (None)

class UClass* UWinterQuestNewChallengeModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuestNewChallengeModal_C");

	return Clss;
}


// WinterQuestNewChallengeModal_C WinterQuestNewChallengeModal.Default__WinterQuestNewChallengeModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuestNewChallengeModal_C* UWinterQuestNewChallengeModal_C::GetDefaultObj()
{
	static class UWinterQuestNewChallengeModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuestNewChallengeModal_C*>(UWinterQuestNewChallengeModal_C::StaticClass()->DefaultObject);

	return Default;
}

}


