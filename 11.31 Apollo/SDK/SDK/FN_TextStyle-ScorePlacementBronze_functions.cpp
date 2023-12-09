#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-ScorePlacementBronze.TextStyle-ScorePlacementBronze_C
// (None)

class UClass* UTextStyleMinusScorePlacementBronze_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-ScorePlacementBronze_C");

	return Clss;
}


// TextStyle-ScorePlacementBronze_C TextStyle-ScorePlacementBronze.Default__TextStyle-ScorePlacementBronze_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusScorePlacementBronze_C* UTextStyleMinusScorePlacementBronze_C::GetDefaultObj()
{
	static class UTextStyleMinusScorePlacementBronze_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusScorePlacementBronze_C*>(UTextStyleMinusScorePlacementBronze_C::StaticClass()->DefaultObject);

	return Default;
}

}


