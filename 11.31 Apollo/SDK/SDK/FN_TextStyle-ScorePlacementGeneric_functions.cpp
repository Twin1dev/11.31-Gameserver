#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-ScorePlacementGeneric.TextStyle-ScorePlacementGeneric_C
// (None)

class UClass* UTextStyleMinusScorePlacementGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-ScorePlacementGeneric_C");

	return Clss;
}


// TextStyle-ScorePlacementGeneric_C TextStyle-ScorePlacementGeneric.Default__TextStyle-ScorePlacementGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusScorePlacementGeneric_C* UTextStyleMinusScorePlacementGeneric_C::GetDefaultObj()
{
	static class UTextStyleMinusScorePlacementGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusScorePlacementGeneric_C*>(UTextStyleMinusScorePlacementGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


