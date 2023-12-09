#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GameSettingsDetailView.GameSettingsDetailView_C
// (None)

class UClass* UGameSettingsDetailView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingsDetailView_C");

	return Clss;
}


// GameSettingsDetailView_C GameSettingsDetailView.Default__GameSettingsDetailView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGameSettingsDetailView_C* UGameSettingsDetailView_C::GetDefaultObj()
{
	static class UGameSettingsDetailView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingsDetailView_C*>(UGameSettingsDetailView_C::StaticClass()->DefaultObject);

	return Default;
}

}


