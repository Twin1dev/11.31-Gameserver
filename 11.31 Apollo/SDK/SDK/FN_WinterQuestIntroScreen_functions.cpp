#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuestIntroScreen.WinterQuestIntroScreen_C
// (None)

class UClass* UWinterQuestIntroScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuestIntroScreen_C");

	return Clss;
}


// WinterQuestIntroScreen_C WinterQuestIntroScreen.Default__WinterQuestIntroScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuestIntroScreen_C* UWinterQuestIntroScreen_C::GetDefaultObj()
{
	static class UWinterQuestIntroScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuestIntroScreen_C*>(UWinterQuestIntroScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


