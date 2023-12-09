#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-HUD-DBNOBarMax.TextStyle-Base-XS-HUD-DBNOBarMax_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusHUDMinusDBNOBarMax_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-HUD-DBNOBarMax_C");

	return Clss;
}


// TextStyle-Base-XS-HUD-DBNOBarMax_C TextStyle-Base-XS-HUD-DBNOBarMax.Default__TextStyle-Base-XS-HUD-DBNOBarMax_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusHUDMinusDBNOBarMax_C* UTextStyleMinusBaseMinusXSMinusHUDMinusDBNOBarMax_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusHUDMinusDBNOBarMax_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusHUDMinusDBNOBarMax_C*>(UTextStyleMinusBaseMinusXSMinusHUDMinusDBNOBarMax_C::StaticClass()->DefaultObject);

	return Default;
}

}


