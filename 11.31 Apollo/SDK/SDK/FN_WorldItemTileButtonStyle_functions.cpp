#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WorldItemTileButtonStyle.WorldItemTileButtonStyle_C
// (None)

class UClass* UWorldItemTileButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldItemTileButtonStyle_C");

	return Clss;
}


// WorldItemTileButtonStyle_C WorldItemTileButtonStyle.Default__WorldItemTileButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWorldItemTileButtonStyle_C* UWorldItemTileButtonStyle_C::GetDefaultObj()
{
	static class UWorldItemTileButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldItemTileButtonStyle_C*>(UWorldItemTileButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


