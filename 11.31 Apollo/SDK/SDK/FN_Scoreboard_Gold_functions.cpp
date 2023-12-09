#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Scoreboard_Gold.Scoreboard_Gold_C
// (None)

class UClass* UScoreboard_Gold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scoreboard_Gold_C");

	return Clss;
}


// Scoreboard_Gold_C Scoreboard_Gold.Default__Scoreboard_Gold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScoreboard_Gold_C* UScoreboard_Gold_C::GetDefaultObj()
{
	static class UScoreboard_Gold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoreboard_Gold_C*>(UScoreboard_Gold_C::StaticClass()->DefaultObject);

	return Default;
}

}


