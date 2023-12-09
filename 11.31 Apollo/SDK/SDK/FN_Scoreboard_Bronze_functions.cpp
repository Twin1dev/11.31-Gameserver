#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Scoreboard_Bronze.Scoreboard_Bronze_C
// (None)

class UClass* UScoreboard_Bronze_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scoreboard_Bronze_C");

	return Clss;
}


// Scoreboard_Bronze_C Scoreboard_Bronze.Default__Scoreboard_Bronze_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScoreboard_Bronze_C* UScoreboard_Bronze_C::GetDefaultObj()
{
	static class UScoreboard_Bronze_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoreboard_Bronze_C*>(UScoreboard_Bronze_C::StaticClass()->DefaultObject);

	return Default;
}

}


