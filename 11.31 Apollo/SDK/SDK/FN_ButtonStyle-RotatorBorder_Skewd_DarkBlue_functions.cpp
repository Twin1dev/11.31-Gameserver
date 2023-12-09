#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-RotatorBorder_Skewd_DarkBlue.ButtonStyle-RotatorBorder_Skewd_DarkBlue_C
// (None)

class UClass* UButtonStyleMinusRotatorBorder_Skewd_DarkBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-RotatorBorder_Skewd_DarkBlue_C");

	return Clss;
}


// ButtonStyle-RotatorBorder_Skewd_DarkBlue_C ButtonStyle-RotatorBorder_Skewd_DarkBlue.Default__ButtonStyle-RotatorBorder_Skewd_DarkBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusRotatorBorder_Skewd_DarkBlue_C* UButtonStyleMinusRotatorBorder_Skewd_DarkBlue_C::GetDefaultObj()
{
	static class UButtonStyleMinusRotatorBorder_Skewd_DarkBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusRotatorBorder_Skewd_DarkBlue_C*>(UButtonStyleMinusRotatorBorder_Skewd_DarkBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


