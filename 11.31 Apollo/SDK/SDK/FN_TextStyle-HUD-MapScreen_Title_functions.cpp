#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-HUD-MapScreen_Title.TextStyle-HUD-MapScreen_Title_C
// (None)

class UClass* UTextStyleMinusHUDMinusMapScreen_Title_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-HUD-MapScreen_Title_C");

	return Clss;
}


// TextStyle-HUD-MapScreen_Title_C TextStyle-HUD-MapScreen_Title.Default__TextStyle-HUD-MapScreen_Title_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHUDMinusMapScreen_Title_C* UTextStyleMinusHUDMinusMapScreen_Title_C::GetDefaultObj()
{
	static class UTextStyleMinusHUDMinusMapScreen_Title_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHUDMinusMapScreen_Title_C*>(UTextStyleMinusHUDMinusMapScreen_Title_C::StaticClass()->DefaultObject);

	return Default;
}

}


