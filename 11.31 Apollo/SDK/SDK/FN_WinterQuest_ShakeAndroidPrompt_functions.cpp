#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuest_ShakeAndroidPrompt.WinterQuest_ShakeAndroidPrompt_C
// (None)

class UClass* UWinterQuest_ShakeAndroidPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuest_ShakeAndroidPrompt_C");

	return Clss;
}


// WinterQuest_ShakeAndroidPrompt_C WinterQuest_ShakeAndroidPrompt.Default__WinterQuest_ShakeAndroidPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuest_ShakeAndroidPrompt_C* UWinterQuest_ShakeAndroidPrompt_C::GetDefaultObj()
{
	static class UWinterQuest_ShakeAndroidPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuest_ShakeAndroidPrompt_C*>(UWinterQuest_ShakeAndroidPrompt_C::StaticClass()->DefaultObject);

	return Default;
}

}


