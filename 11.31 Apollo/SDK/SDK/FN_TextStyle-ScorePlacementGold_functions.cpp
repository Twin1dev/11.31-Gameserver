#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-ScorePlacementGold.TextStyle-ScorePlacementGold_C
// (None)

class UClass* UTextStyleMinusScorePlacementGold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-ScorePlacementGold_C");

	return Clss;
}


// TextStyle-ScorePlacementGold_C TextStyle-ScorePlacementGold.Default__TextStyle-ScorePlacementGold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusScorePlacementGold_C* UTextStyleMinusScorePlacementGold_C::GetDefaultObj()
{
	static class UTextStyleMinusScorePlacementGold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusScorePlacementGold_C*>(UTextStyleMinusScorePlacementGold_C::StaticClass()->DefaultObject);

	return Default;
}

}


