#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MapAndBackpackKeys.MapAndBackpackKeys_C
// (None)

class UClass* UMapAndBackpackKeys_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapAndBackpackKeys_C");

	return Clss;
}


// MapAndBackpackKeys_C MapAndBackpackKeys.Default__MapAndBackpackKeys_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapAndBackpackKeys_C* UMapAndBackpackKeys_C::GetDefaultObj()
{
	static class UMapAndBackpackKeys_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapAndBackpackKeys_C*>(UMapAndBackpackKeys_C::StaticClass()->DefaultObject);

	return Default;
}

}


