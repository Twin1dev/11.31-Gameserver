#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaKillsWidget.AthenaKillsWidget_C
// (None)

class UClass* UAthenaKillsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaKillsWidget_C");

	return Clss;
}


// AthenaKillsWidget_C AthenaKillsWidget.Default__AthenaKillsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaKillsWidget_C* UAthenaKillsWidget_C::GetDefaultObj()
{
	static class UAthenaKillsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaKillsWidget_C*>(UAthenaKillsWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


