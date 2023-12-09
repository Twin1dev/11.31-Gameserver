#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActivityDetailsInfoPanel.ActivityDetailsInfoPanel_C
// (None)

class UClass* UActivityDetailsInfoPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivityDetailsInfoPanel_C");

	return Clss;
}


// ActivityDetailsInfoPanel_C ActivityDetailsInfoPanel.Default__ActivityDetailsInfoPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActivityDetailsInfoPanel_C* UActivityDetailsInfoPanel_C::GetDefaultObj()
{
	static class UActivityDetailsInfoPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivityDetailsInfoPanel_C*>(UActivityDetailsInfoPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


