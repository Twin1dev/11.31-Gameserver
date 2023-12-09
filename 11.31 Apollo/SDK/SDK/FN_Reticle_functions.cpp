#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Reticle.Reticle_C
// (None)

class UClass* UReticle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Reticle_C");

	return Clss;
}


// Reticle_C Reticle.Default__Reticle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReticle_C* UReticle_C::GetDefaultObj()
{
	static class UReticle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReticle_C*>(UReticle_C::StaticClass()->DefaultObject);

	return Default;
}

}


