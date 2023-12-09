#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-Skew-Blue.ButtonStyle-Outline-Skew-Blue_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusSkewMinusBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-Skew-Blue_C");

	return Clss;
}


// ButtonStyle-Outline-Skew-Blue_C ButtonStyle-Outline-Skew-Blue.Default__ButtonStyle-Outline-Skew-Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusSkewMinusBlue_C* UButtonStyleMinusOutlineMinusSkewMinusBlue_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusSkewMinusBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusSkewMinusBlue_C*>(UButtonStyleMinusOutlineMinusSkewMinusBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


