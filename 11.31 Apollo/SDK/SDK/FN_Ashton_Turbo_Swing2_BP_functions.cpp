#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ashton_Turbo_Swing2_BP.Ashton_Turbo_Swing2_BP_C
// (None)

class UClass* UAshton_Turbo_Swing2_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ashton_Turbo_Swing2_BP_C");

	return Clss;
}


// Ashton_Turbo_Swing2_BP_C Ashton_Turbo_Swing2_BP.Default__Ashton_Turbo_Swing2_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAshton_Turbo_Swing2_BP_C* UAshton_Turbo_Swing2_BP_C::GetDefaultObj()
{
	static class UAshton_Turbo_Swing2_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAshton_Turbo_Swing2_BP_C*>(UAshton_Turbo_Swing2_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


