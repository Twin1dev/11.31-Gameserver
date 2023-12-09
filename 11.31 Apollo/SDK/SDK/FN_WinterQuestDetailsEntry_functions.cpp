#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuestDetailsEntry.WinterQuestDetailsEntry_C
// (None)

class UClass* UWinterQuestDetailsEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuestDetailsEntry_C");

	return Clss;
}


// WinterQuestDetailsEntry_C WinterQuestDetailsEntry.Default__WinterQuestDetailsEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuestDetailsEntry_C* UWinterQuestDetailsEntry_C::GetDefaultObj()
{
	static class UWinterQuestDetailsEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuestDetailsEntry_C*>(UWinterQuestDetailsEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


