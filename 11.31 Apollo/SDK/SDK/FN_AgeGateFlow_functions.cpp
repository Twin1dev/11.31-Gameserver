#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AgeGateFlow.AgeGateFlow_C
// (None)

class UClass* UAgeGateFlow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AgeGateFlow_C");

	return Clss;
}


// AgeGateFlow_C AgeGateFlow.Default__AgeGateFlow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAgeGateFlow_C* UAgeGateFlow_C::GetDefaultObj()
{
	static class UAgeGateFlow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAgeGateFlow_C*>(UAgeGateFlow_C::StaticClass()->DefaultObject);

	return Default;
}

}


