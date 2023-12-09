#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuest_ShakeIOSPrompt.WinterQuest_ShakeIOSPrompt_C
// (None)

class UClass* UWinterQuest_ShakeIOSPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuest_ShakeIOSPrompt_C");

	return Clss;
}


// WinterQuest_ShakeIOSPrompt_C WinterQuest_ShakeIOSPrompt.Default__WinterQuest_ShakeIOSPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuest_ShakeIOSPrompt_C* UWinterQuest_ShakeIOSPrompt_C::GetDefaultObj()
{
	static class UWinterQuest_ShakeIOSPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuest_ShakeIOSPrompt_C*>(UWinterQuest_ShakeIOSPrompt_C::StaticClass()->DefaultObject);

	return Default;
}

}


