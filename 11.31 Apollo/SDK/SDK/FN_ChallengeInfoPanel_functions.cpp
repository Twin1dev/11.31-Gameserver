#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeInfoPanel.ChallengeInfoPanel_C
// (None)

class UClass* UChallengeInfoPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeInfoPanel_C");

	return Clss;
}


// ChallengeInfoPanel_C ChallengeInfoPanel.Default__ChallengeInfoPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeInfoPanel_C* UChallengeInfoPanel_C::GetDefaultObj()
{
	static class UChallengeInfoPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeInfoPanel_C*>(UChallengeInfoPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


