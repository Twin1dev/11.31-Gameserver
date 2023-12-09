#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TextOnlyBase_Empty_NoSound.ButtonStyle-TextOnlyBase_Empty_NoSound_C
// (None)

class UClass* UButtonStyleMinusTextOnlyBase_Empty_NoSound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TextOnlyBase_Empty_NoSound_C");

	return Clss;
}


// ButtonStyle-TextOnlyBase_Empty_NoSound_C ButtonStyle-TextOnlyBase_Empty_NoSound.Default__ButtonStyle-TextOnlyBase_Empty_NoSound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTextOnlyBase_Empty_NoSound_C* UButtonStyleMinusTextOnlyBase_Empty_NoSound_C::GetDefaultObj()
{
	static class UButtonStyleMinusTextOnlyBase_Empty_NoSound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTextOnlyBase_Empty_NoSound_C*>(UButtonStyleMinusTextOnlyBase_Empty_NoSound_C::StaticClass()->DefaultObject);

	return Default;
}

}


