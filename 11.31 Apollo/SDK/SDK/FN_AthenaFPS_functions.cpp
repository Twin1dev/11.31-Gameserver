#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaFPS.AthenaFPS_C
// (None)

class UClass* UAthenaFPS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaFPS_C");

	return Clss;
}


// AthenaFPS_C AthenaFPS.Default__AthenaFPS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaFPS_C* UAthenaFPS_C::GetDefaultObj()
{
	static class UAthenaFPS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaFPS_C*>(UAthenaFPS_C::StaticClass()->DefaultObject);

	return Default;
}

}


