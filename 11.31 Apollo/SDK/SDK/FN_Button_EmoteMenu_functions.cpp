#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Button_EmoteMenu.Button_EmoteMenu_C
// (None)

class UClass* UButton_EmoteMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button_EmoteMenu_C");

	return Clss;
}


// Button_EmoteMenu_C Button_EmoteMenu.Default__Button_EmoteMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButton_EmoteMenu_C* UButton_EmoteMenu_C::GetDefaultObj()
{
	static class UButton_EmoteMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButton_EmoteMenu_C*>(UButton_EmoteMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


