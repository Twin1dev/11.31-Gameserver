#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActivityDetailsKnobsPanel.ActivityDetailsKnobsPanel_C
// (None)

class UClass* UActivityDetailsKnobsPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivityDetailsKnobsPanel_C");

	return Clss;
}


// ActivityDetailsKnobsPanel_C ActivityDetailsKnobsPanel.Default__ActivityDetailsKnobsPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActivityDetailsKnobsPanel_C* UActivityDetailsKnobsPanel_C::GetDefaultObj()
{
	static class UActivityDetailsKnobsPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivityDetailsKnobsPanel_C*>(UActivityDetailsKnobsPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


