#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Tab-Leaderboards.ButtonStyle-Tab-Leaderboards_C
// (None)

class UClass* UButtonStyleMinusTabMinusLeaderboards_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Tab-Leaderboards_C");

	return Clss;
}


// ButtonStyle-Tab-Leaderboards_C ButtonStyle-Tab-Leaderboards.Default__ButtonStyle-Tab-Leaderboards_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTabMinusLeaderboards_C* UButtonStyleMinusTabMinusLeaderboards_C::GetDefaultObj()
{
	static class UButtonStyleMinusTabMinusLeaderboards_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTabMinusLeaderboards_C*>(UButtonStyleMinusTabMinusLeaderboards_C::StaticClass()->DefaultObject);

	return Default;
}

}


