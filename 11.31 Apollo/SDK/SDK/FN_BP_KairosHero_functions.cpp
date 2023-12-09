#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_KairosHero.BP_KairosHero_C
// (Actor)

class UClass* ABP_KairosHero_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_KairosHero_C");

	return Clss;
}


// BP_KairosHero_C BP_KairosHero.Default__BP_KairosHero_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_KairosHero_C* ABP_KairosHero_C::GetDefaultObj()
{
	static class ABP_KairosHero_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_KairosHero_C*>(ABP_KairosHero_C::StaticClass()->DefaultObject);

	return Default;
}

}


