#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActivityDetailsPlayPanel.ActivityDetailsPlayPanel_C
// (None)

class UClass* UActivityDetailsPlayPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivityDetailsPlayPanel_C");

	return Clss;
}


// ActivityDetailsPlayPanel_C ActivityDetailsPlayPanel.Default__ActivityDetailsPlayPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActivityDetailsPlayPanel_C* UActivityDetailsPlayPanel_C::GetDefaultObj()
{
	static class UActivityDetailsPlayPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivityDetailsPlayPanel_C*>(UActivityDetailsPlayPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


