#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Power-S.TextStyle-Power-S_C
// (None)

class UClass* UTextStyleMinusPowerMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Power-S_C");

	return Clss;
}


// TextStyle-Power-S_C TextStyle-Power-S.Default__TextStyle-Power-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusPowerMinusS_C* UTextStyleMinusPowerMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusPowerMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusPowerMinusS_C*>(UTextStyleMinusPowerMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


