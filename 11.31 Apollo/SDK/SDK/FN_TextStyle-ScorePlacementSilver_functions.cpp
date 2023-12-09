#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-ScorePlacementSilver.TextStyle-ScorePlacementSilver_C
// (None)

class UClass* UTextStyleMinusScorePlacementSilver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-ScorePlacementSilver_C");

	return Clss;
}


// TextStyle-ScorePlacementSilver_C TextStyle-ScorePlacementSilver.Default__TextStyle-ScorePlacementSilver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusScorePlacementSilver_C* UTextStyleMinusScorePlacementSilver_C::GetDefaultObj()
{
	static class UTextStyleMinusScorePlacementSilver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusScorePlacementSilver_C*>(UTextStyleMinusScorePlacementSilver_C::StaticClass()->DefaultObject);

	return Default;
}

}


