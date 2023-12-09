#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuestUnlockedScreen.WinterQuestUnlockedScreen_C
// (None)

class UClass* UWinterQuestUnlockedScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuestUnlockedScreen_C");

	return Clss;
}


// WinterQuestUnlockedScreen_C WinterQuestUnlockedScreen.Default__WinterQuestUnlockedScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuestUnlockedScreen_C* UWinterQuestUnlockedScreen_C::GetDefaultObj()
{
	static class UWinterQuestUnlockedScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuestUnlockedScreen_C*>(UWinterQuestUnlockedScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


