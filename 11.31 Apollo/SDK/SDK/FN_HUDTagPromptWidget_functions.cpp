#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDTagPromptWidget.HUDTagPromptWidget_C
// (None)

class UClass* UHUDTagPromptWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDTagPromptWidget_C");

	return Clss;
}


// HUDTagPromptWidget_C HUDTagPromptWidget.Default__HUDTagPromptWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDTagPromptWidget_C* UHUDTagPromptWidget_C::GetDefaultObj()
{
	static class UHUDTagPromptWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDTagPromptWidget_C*>(UHUDTagPromptWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


