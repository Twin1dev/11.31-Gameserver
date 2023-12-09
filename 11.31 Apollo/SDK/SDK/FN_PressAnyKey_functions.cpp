#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PressAnyKey.PressAnyKey_C
// (None)

class UClass* UPressAnyKey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PressAnyKey_C");

	return Clss;
}


// PressAnyKey_C PressAnyKey.Default__PressAnyKey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPressAnyKey_C* UPressAnyKey_C::GetDefaultObj()
{
	static class UPressAnyKey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPressAnyKey_C*>(UPressAnyKey_C::StaticClass()->DefaultObject);

	return Default;
}

}


