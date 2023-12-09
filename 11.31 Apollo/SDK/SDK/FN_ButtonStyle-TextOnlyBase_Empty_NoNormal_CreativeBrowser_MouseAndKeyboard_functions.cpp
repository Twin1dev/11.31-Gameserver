#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TextOnlyBase_Empty_NoNormal_CreativeBrowser_MouseAndKeyboard.ButtonStyle-TextOnlyBase_Empty_NoNormal_CreativeBrowser_MouseAndKeyboard_C
// (None)

class UClass* UButtonStyleMinusTextOnlyBase_Empty_NoNormal_CreativeBrowser_MouseAndKeyboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TextOnlyBase_Empty_NoNormal_CreativeBrowser_MouseAndKeyboard_C");

	return Clss;
}


// ButtonStyle-TextOnlyBase_Empty_NoNormal_CreativeBrowser_MouseAndKeyboard_C ButtonStyle-TextOnlyBase_Empty_NoNormal_CreativeBrowser_MouseAndKeyboard.Default__ButtonStyle-TextOnlyBase_Empty_NoNormal_CreativeBrowser_MouseAndKeyboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTextOnlyBase_Empty_NoNormal_CreativeBrowser_MouseAndKeyboard_C* UButtonStyleMinusTextOnlyBase_Empty_NoNormal_CreativeBrowser_MouseAndKeyboard_C::GetDefaultObj()
{
	static class UButtonStyleMinusTextOnlyBase_Empty_NoNormal_CreativeBrowser_MouseAndKeyboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTextOnlyBase_Empty_NoNormal_CreativeBrowser_MouseAndKeyboard_C*>(UButtonStyleMinusTextOnlyBase_Empty_NoNormal_CreativeBrowser_MouseAndKeyboard_C::StaticClass()->DefaultObject);

	return Default;
}

}


