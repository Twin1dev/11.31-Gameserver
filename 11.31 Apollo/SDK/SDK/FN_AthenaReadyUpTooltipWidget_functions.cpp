#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaReadyUpTooltipWidget.AthenaReadyUpTooltipWidget_C
// (None)

class UClass* UAthenaReadyUpTooltipWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaReadyUpTooltipWidget_C");

	return Clss;
}


// AthenaReadyUpTooltipWidget_C AthenaReadyUpTooltipWidget.Default__AthenaReadyUpTooltipWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaReadyUpTooltipWidget_C* UAthenaReadyUpTooltipWidget_C::GetDefaultObj()
{
	static class UAthenaReadyUpTooltipWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaReadyUpTooltipWidget_C*>(UAthenaReadyUpTooltipWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


