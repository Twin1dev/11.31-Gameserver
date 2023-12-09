#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SnowFlakes_PlayerEffect.GE_SnowFlakes_PlayerEffect_C
// (None)

class UClass* UGE_SnowFlakes_PlayerEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SnowFlakes_PlayerEffect_C");

	return Clss;
}


// GE_SnowFlakes_PlayerEffect_C GE_SnowFlakes_PlayerEffect.Default__GE_SnowFlakes_PlayerEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SnowFlakes_PlayerEffect_C* UGE_SnowFlakes_PlayerEffect_C::GetDefaultObj()
{
	static class UGE_SnowFlakes_PlayerEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SnowFlakes_PlayerEffect_C*>(UGE_SnowFlakes_PlayerEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


