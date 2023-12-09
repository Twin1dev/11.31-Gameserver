#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaTabsScreen.AthenaTabsScreen_C
// (None)

class UClass* UAthenaTabsScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaTabsScreen_C");

	return Clss;
}


// AthenaTabsScreen_C AthenaTabsScreen.Default__AthenaTabsScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaTabsScreen_C* UAthenaTabsScreen_C::GetDefaultObj()
{
	static class UAthenaTabsScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaTabsScreen_C*>(UAthenaTabsScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


