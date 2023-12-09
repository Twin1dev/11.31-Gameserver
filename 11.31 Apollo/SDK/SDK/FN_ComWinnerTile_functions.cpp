#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ComWinnerTile.ComWinnerTile_C
// (None)

class UClass* UComWinnerTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComWinnerTile_C");

	return Clss;
}


// ComWinnerTile_C ComWinnerTile.Default__ComWinnerTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComWinnerTile_C* UComWinnerTile_C::GetDefaultObj()
{
	static class UComWinnerTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComWinnerTile_C*>(UComWinnerTile_C::StaticClass()->DefaultObject);

	return Default;
}

}


