#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CameraLens_Slurp_Burst.B_CameraLens_Slurp_Burst_C
// (Actor)

class UClass* AB_CameraLens_Slurp_Burst_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CameraLens_Slurp_Burst_C");

	return Clss;
}


// B_CameraLens_Slurp_Burst_C B_CameraLens_Slurp_Burst.Default__B_CameraLens_Slurp_Burst_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_CameraLens_Slurp_Burst_C* AB_CameraLens_Slurp_Burst_C::GetDefaultObj()
{
	static class AB_CameraLens_Slurp_Burst_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_CameraLens_Slurp_Burst_C*>(AB_CameraLens_Slurp_Burst_C::StaticClass()->DefaultObject);

	return Default;
}

}


