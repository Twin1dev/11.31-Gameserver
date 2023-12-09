#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProgressWidget.ProgressWidget_C
// (None)

class UClass* UProgressWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressWidget_C");

	return Clss;
}


// ProgressWidget_C ProgressWidget.Default__ProgressWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProgressWidget_C* UProgressWidget_C::GetDefaultObj()
{
	static class UProgressWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressWidget_C*>(UProgressWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


