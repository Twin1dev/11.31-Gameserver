#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaFPSTicker.AthenaFPSTicker_C
// (None)

class UClass* UAthenaFPSTicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaFPSTicker_C");

	return Clss;
}


// AthenaFPSTicker_C AthenaFPSTicker.Default__AthenaFPSTicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaFPSTicker_C* UAthenaFPSTicker_C::GetDefaultObj()
{
	static class UAthenaFPSTicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaFPSTicker_C*>(UAthenaFPSTicker_C::StaticClass()->DefaultObject);

	return Default;
}

}


