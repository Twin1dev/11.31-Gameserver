#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MatchXPDetails.MatchXPDetails_C
// (None)

class UClass* UMatchXPDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatchXPDetails_C");

	return Clss;
}


// MatchXPDetails_C MatchXPDetails.Default__MatchXPDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMatchXPDetails_C* UMatchXPDetails_C::GetDefaultObj()
{
	static class UMatchXPDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatchXPDetails_C*>(UMatchXPDetails_C::StaticClass()->DefaultObject);

	return Default;
}

}


