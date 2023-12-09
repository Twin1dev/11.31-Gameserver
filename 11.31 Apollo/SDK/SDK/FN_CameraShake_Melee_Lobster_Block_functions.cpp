#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Melee_Lobster_Block.CameraShake_Melee_Lobster_Block_C
// (None)

class UClass* UCameraShake_Melee_Lobster_Block_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Melee_Lobster_Block_C");

	return Clss;
}


// CameraShake_Melee_Lobster_Block_C CameraShake_Melee_Lobster_Block.Default__CameraShake_Melee_Lobster_Block_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Melee_Lobster_Block_C* UCameraShake_Melee_Lobster_Block_C::GetDefaultObj()
{
	static class UCameraShake_Melee_Lobster_Block_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Melee_Lobster_Block_C*>(UCameraShake_Melee_Lobster_Block_C::StaticClass()->DefaultObject);

	return Default;
}

}


