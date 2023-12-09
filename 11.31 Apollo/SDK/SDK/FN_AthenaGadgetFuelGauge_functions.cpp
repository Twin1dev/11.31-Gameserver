#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaGadgetFuelGauge.AthenaGadgetFuelGauge_C
// (None)

class UClass* UAthenaGadgetFuelGauge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaGadgetFuelGauge_C");

	return Clss;
}


// AthenaGadgetFuelGauge_C AthenaGadgetFuelGauge.Default__AthenaGadgetFuelGauge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaGadgetFuelGauge_C* UAthenaGadgetFuelGauge_C::GetDefaultObj()
{
	static class UAthenaGadgetFuelGauge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaGadgetFuelGauge_C*>(UAthenaGadgetFuelGauge_C::StaticClass()->DefaultObject);

	return Default;
}

}


