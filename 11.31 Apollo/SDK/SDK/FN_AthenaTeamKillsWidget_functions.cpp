#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaTeamKillsWidget.AthenaTeamKillsWidget_C
// (None)

class UClass* UAthenaTeamKillsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaTeamKillsWidget_C");

	return Clss;
}


// AthenaTeamKillsWidget_C AthenaTeamKillsWidget.Default__AthenaTeamKillsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaTeamKillsWidget_C* UAthenaTeamKillsWidget_C::GetDefaultObj()
{
	static class UAthenaTeamKillsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaTeamKillsWidget_C*>(UAthenaTeamKillsWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


