#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActivityBrowserRow.ActivityBrowserRow_C
// (None)

class UClass* UActivityBrowserRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivityBrowserRow_C");

	return Clss;
}


// ActivityBrowserRow_C ActivityBrowserRow.Default__ActivityBrowserRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActivityBrowserRow_C* UActivityBrowserRow_C::GetDefaultObj()
{
	static class UActivityBrowserRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivityBrowserRow_C*>(UActivityBrowserRow_C::StaticClass()->DefaultObject);

	return Default;
}

}


