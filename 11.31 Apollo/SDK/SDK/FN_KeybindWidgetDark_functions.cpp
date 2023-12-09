#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass KeybindWidgetDark.KeybindWidgetDark_C
// (None)

class UClass* UKeybindWidgetDark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeybindWidgetDark_C");

	return Clss;
}


// KeybindWidgetDark_C KeybindWidgetDark.Default__KeybindWidgetDark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKeybindWidgetDark_C* UKeybindWidgetDark_C::GetDefaultObj()
{
	static class UKeybindWidgetDark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeybindWidgetDark_C*>(UKeybindWidgetDark_C::StaticClass()->DefaultObject);

	return Default;
}

}


