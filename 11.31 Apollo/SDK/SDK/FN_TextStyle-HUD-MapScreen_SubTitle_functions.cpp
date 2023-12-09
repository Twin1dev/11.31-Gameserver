#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-HUD-MapScreen_SubTitle.TextStyle-HUD-MapScreen_SubTitle_C
// (None)

class UClass* UTextStyleMinusHUDMinusMapScreen_SubTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-HUD-MapScreen_SubTitle_C");

	return Clss;
}


// TextStyle-HUD-MapScreen_SubTitle_C TextStyle-HUD-MapScreen_SubTitle.Default__TextStyle-HUD-MapScreen_SubTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHUDMinusMapScreen_SubTitle_C* UTextStyleMinusHUDMinusMapScreen_SubTitle_C::GetDefaultObj()
{
	static class UTextStyleMinusHUDMinusMapScreen_SubTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHUDMinusMapScreen_SubTitle_C*>(UTextStyleMinusHUDMinusMapScreen_SubTitle_C::StaticClass()->DefaultObject);

	return Default;
}

}


