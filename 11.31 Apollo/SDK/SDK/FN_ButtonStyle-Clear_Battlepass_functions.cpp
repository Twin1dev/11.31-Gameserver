#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Clear_Battlepass.ButtonStyle-Clear_Battlepass_C
// (None)

class UClass* UButtonStyleMinusClear_Battlepass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Clear_Battlepass_C");

	return Clss;
}


// ButtonStyle-Clear_Battlepass_C ButtonStyle-Clear_Battlepass.Default__ButtonStyle-Clear_Battlepass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusClear_Battlepass_C* UButtonStyleMinusClear_Battlepass_C::GetDefaultObj()
{
	static class UButtonStyleMinusClear_Battlepass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusClear_Battlepass_C*>(UButtonStyleMinusClear_Battlepass_C::StaticClass()->DefaultObject);

	return Default;
}

}


