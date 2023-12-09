#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-TrickEntryCallout.TextStyle-TrickEntryCallout_C
// (None)

class UClass* UTextStyleMinusTrickEntryCallout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-TrickEntryCallout_C");

	return Clss;
}


// TextStyle-TrickEntryCallout_C TextStyle-TrickEntryCallout.Default__TextStyle-TrickEntryCallout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusTrickEntryCallout_C* UTextStyleMinusTrickEntryCallout_C::GetDefaultObj()
{
	static class UTextStyleMinusTrickEntryCallout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusTrickEntryCallout_C*>(UTextStyleMinusTrickEntryCallout_C::StaticClass()->DefaultObject);

	return Default;
}

}


