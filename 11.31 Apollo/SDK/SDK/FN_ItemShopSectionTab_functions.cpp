#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemShopSectionTab.ItemShopSectionTab_C
// (None)

class UClass* UItemShopSectionTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemShopSectionTab_C");

	return Clss;
}


// ItemShopSectionTab_C ItemShopSectionTab.Default__ItemShopSectionTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemShopSectionTab_C* UItemShopSectionTab_C::GetDefaultObj()
{
	static class UItemShopSectionTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemShopSectionTab_C*>(UItemShopSectionTab_C::StaticClass()->DefaultObject);

	return Default;
}

}


