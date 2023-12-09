#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SettingsListEntry_Header.SettingsListEntry_Header_C
// (None)

class UClass* USettingsListEntry_Header_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SettingsListEntry_Header_C");

	return Clss;
}


// SettingsListEntry_Header_C SettingsListEntry_Header.Default__SettingsListEntry_Header_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USettingsListEntry_Header_C* USettingsListEntry_Header_C::GetDefaultObj()
{
	static class USettingsListEntry_Header_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USettingsListEntry_Header_C*>(USettingsListEntry_Header_C::StaticClass()->DefaultObject);

	return Default;
}

}


