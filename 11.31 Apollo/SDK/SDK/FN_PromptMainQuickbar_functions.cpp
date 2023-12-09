#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PromptMainQuickbar.PromptMainQuickbar_C
// (None)

class UClass* UPromptMainQuickbar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PromptMainQuickbar_C");

	return Clss;
}


// PromptMainQuickbar_C PromptMainQuickbar.Default__PromptMainQuickbar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPromptMainQuickbar_C* UPromptMainQuickbar_C::GetDefaultObj()
{
	static class UPromptMainQuickbar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPromptMainQuickbar_C*>(UPromptMainQuickbar_C::StaticClass()->DefaultObject);

	return Default;
}

}


