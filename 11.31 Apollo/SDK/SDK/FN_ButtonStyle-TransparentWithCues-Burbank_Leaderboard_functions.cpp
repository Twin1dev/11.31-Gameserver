#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TransparentWithCues-Burbank_Leaderboard.ButtonStyle-TransparentWithCues-Burbank_Leaderboard_C
// (None)

class UClass* UButtonStyleMinusTransparentWithCuesMinusBurbank_Leaderboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TransparentWithCues-Burbank_Leaderboard_C");

	return Clss;
}


// ButtonStyle-TransparentWithCues-Burbank_Leaderboard_C ButtonStyle-TransparentWithCues-Burbank_Leaderboard.Default__ButtonStyle-TransparentWithCues-Burbank_Leaderboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTransparentWithCuesMinusBurbank_Leaderboard_C* UButtonStyleMinusTransparentWithCuesMinusBurbank_Leaderboard_C::GetDefaultObj()
{
	static class UButtonStyleMinusTransparentWithCuesMinusBurbank_Leaderboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTransparentWithCuesMinusBurbank_Leaderboard_C*>(UButtonStyleMinusTransparentWithCuesMinusBurbank_Leaderboard_C::StaticClass()->DefaultObject);

	return Default;
}

}


