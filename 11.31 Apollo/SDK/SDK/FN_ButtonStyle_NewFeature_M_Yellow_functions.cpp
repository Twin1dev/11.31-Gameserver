#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_NewFeature_M_Yellow.ButtonStyle_NewFeature_M_Yellow_C
// (None)

class UClass* UButtonStyle_NewFeature_M_Yellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_NewFeature_M_Yellow_C");

	return Clss;
}


// ButtonStyle_NewFeature_M_Yellow_C ButtonStyle_NewFeature_M_Yellow.Default__ButtonStyle_NewFeature_M_Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_NewFeature_M_Yellow_C* UButtonStyle_NewFeature_M_Yellow_C::GetDefaultObj()
{
	static class UButtonStyle_NewFeature_M_Yellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_NewFeature_M_Yellow_C*>(UButtonStyle_NewFeature_M_Yellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


