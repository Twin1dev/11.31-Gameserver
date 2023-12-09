#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TextOnlyBase_NoPressedSound.ButtonStyle-TextOnlyBase_NoPressedSound_C
// (None)

class UClass* UButtonStyleMinusTextOnlyBase_NoPressedSound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TextOnlyBase_NoPressedSound_C");

	return Clss;
}


// ButtonStyle-TextOnlyBase_NoPressedSound_C ButtonStyle-TextOnlyBase_NoPressedSound.Default__ButtonStyle-TextOnlyBase_NoPressedSound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTextOnlyBase_NoPressedSound_C* UButtonStyleMinusTextOnlyBase_NoPressedSound_C::GetDefaultObj()
{
	static class UButtonStyleMinusTextOnlyBase_NoPressedSound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTextOnlyBase_NoPressedSound_C*>(UButtonStyleMinusTextOnlyBase_NoPressedSound_C::StaticClass()->DefaultObject);

	return Default;
}

}


