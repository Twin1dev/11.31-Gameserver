#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SettingsPanel.SettingsPanel_C
// (None)

class UClass* USettingsPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SettingsPanel_C");

	return Clss;
}


// SettingsPanel_C SettingsPanel.Default__SettingsPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USettingsPanel_C* USettingsPanel_C::GetDefaultObj()
{
	static class USettingsPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USettingsPanel_C*>(USettingsPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


