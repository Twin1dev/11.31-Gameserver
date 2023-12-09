#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SafeZoneEditor.SafeZoneEditor_C
// (None)

class UClass* USafeZoneEditor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SafeZoneEditor_C");

	return Clss;
}


// SafeZoneEditor_C SafeZoneEditor.Default__SafeZoneEditor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USafeZoneEditor_C* USafeZoneEditor_C::GetDefaultObj()
{
	static class USafeZoneEditor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USafeZoneEditor_C*>(USafeZoneEditor_C::StaticClass()->DefaultObject);

	return Default;
}

}


