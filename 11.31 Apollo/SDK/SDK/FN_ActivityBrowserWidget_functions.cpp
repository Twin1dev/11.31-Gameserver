#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActivityBrowserWidget.ActivityBrowserWidget_C
// (None)

class UClass* UActivityBrowserWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivityBrowserWidget_C");

	return Clss;
}


// ActivityBrowserWidget_C ActivityBrowserWidget.Default__ActivityBrowserWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActivityBrowserWidget_C* UActivityBrowserWidget_C::GetDefaultObj()
{
	static class UActivityBrowserWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivityBrowserWidget_C*>(UActivityBrowserWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


