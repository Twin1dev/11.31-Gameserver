#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuickHealItemPickerBP.QuickHealItemPickerBP_C
// (None)

class UClass* UQuickHealItemPickerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuickHealItemPickerBP_C");

	return Clss;
}


// QuickHealItemPickerBP_C QuickHealItemPickerBP.Default__QuickHealItemPickerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuickHealItemPickerBP_C* UQuickHealItemPickerBP_C::GetDefaultObj()
{
	static class UQuickHealItemPickerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuickHealItemPickerBP_C*>(UQuickHealItemPickerBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


