#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Scoreboard_Silver.Scoreboard_Silver_C
// (None)

class UClass* UScoreboard_Silver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scoreboard_Silver_C");

	return Clss;
}


// Scoreboard_Silver_C Scoreboard_Silver.Default__Scoreboard_Silver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScoreboard_Silver_C* UScoreboard_Silver_C::GetDefaultObj()
{
	static class UScoreboard_Silver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoreboard_Silver_C*>(UScoreboard_Silver_C::StaticClass()->DefaultObject);

	return Default;
}

}


