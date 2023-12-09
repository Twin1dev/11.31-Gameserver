#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_HUD_ResourceBg_HighlightedBacchus.Border_HUD_ResourceBg_HighlightedBacchus_C
// (None)

class UClass* UBorder_HUD_ResourceBg_HighlightedBacchus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_HUD_ResourceBg_HighlightedBacchus_C");

	return Clss;
}


// Border_HUD_ResourceBg_HighlightedBacchus_C Border_HUD_ResourceBg_HighlightedBacchus.Default__Border_HUD_ResourceBg_HighlightedBacchus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_HUD_ResourceBg_HighlightedBacchus_C* UBorder_HUD_ResourceBg_HighlightedBacchus_C::GetDefaultObj()
{
	static class UBorder_HUD_ResourceBg_HighlightedBacchus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_HUD_ResourceBg_HighlightedBacchus_C*>(UBorder_HUD_ResourceBg_HighlightedBacchus_C::StaticClass()->DefaultObject);

	return Default;
}

}


