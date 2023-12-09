#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MapKey.MapKey_C
// (None)

class UClass* UMapKey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapKey_C");

	return Clss;
}


// MapKey_C MapKey.Default__MapKey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapKey_C* UMapKey_C::GetDefaultObj()
{
	static class UMapKey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapKey_C*>(UMapKey_C::StaticClass()->DefaultObject);

	return Default;
}

}


