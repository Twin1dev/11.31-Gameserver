#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaCompass.AthenaCompass_C
// (None)

class UClass* UAthenaCompass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaCompass_C");

	return Clss;
}


// AthenaCompass_C AthenaCompass.Default__AthenaCompass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaCompass_C* UAthenaCompass_C::GetDefaultObj()
{
	static class UAthenaCompass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaCompass_C*>(UAthenaCompass_C::StaticClass()->DefaultObject);

	return Default;
}

}


