#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RestedIcon.RestedIcon_C
// (None)

class UClass* URestedIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RestedIcon_C");

	return Clss;
}


// RestedIcon_C RestedIcon.Default__RestedIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URestedIcon_C* URestedIcon_C::GetDefaultObj()
{
	static class URestedIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URestedIcon_C*>(URestedIcon_C::StaticClass()->DefaultObject);

	return Default;
}

}


