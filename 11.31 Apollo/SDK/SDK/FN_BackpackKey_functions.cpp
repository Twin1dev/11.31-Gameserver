#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BackpackKey.BackpackKey_C
// (None)

class UClass* UBackpackKey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BackpackKey_C");

	return Clss;
}


// BackpackKey_C BackpackKey.Default__BackpackKey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBackpackKey_C* UBackpackKey_C::GetDefaultObj()
{
	static class UBackpackKey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBackpackKey_C*>(UBackpackKey_C::StaticClass()->DefaultObject);

	return Default;
}

}


