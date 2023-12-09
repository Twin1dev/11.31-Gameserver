#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaHUDBottomBar.AthenaHUDBottomBar_C
// (None)

class UClass* UAthenaHUDBottomBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaHUDBottomBar_C");

	return Clss;
}


// AthenaHUDBottomBar_C AthenaHUDBottomBar.Default__AthenaHUDBottomBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaHUDBottomBar_C* UAthenaHUDBottomBar_C::GetDefaultObj()
{
	static class UAthenaHUDBottomBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaHUDBottomBar_C*>(UAthenaHUDBottomBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


