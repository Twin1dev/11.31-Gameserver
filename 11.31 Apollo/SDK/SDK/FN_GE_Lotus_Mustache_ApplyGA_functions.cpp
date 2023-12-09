#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Lotus_Mustache_ApplyGA.GE_Lotus_Mustache_ApplyGA_C
// (None)

class UClass* UGE_Lotus_Mustache_ApplyGA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Lotus_Mustache_ApplyGA_C");

	return Clss;
}


// GE_Lotus_Mustache_ApplyGA_C GE_Lotus_Mustache_ApplyGA.Default__GE_Lotus_Mustache_ApplyGA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Lotus_Mustache_ApplyGA_C* UGE_Lotus_Mustache_ApplyGA_C::GetDefaultObj()
{
	static class UGE_Lotus_Mustache_ApplyGA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Lotus_Mustache_ApplyGA_C*>(UGE_Lotus_Mustache_ApplyGA_C::StaticClass()->DefaultObject);

	return Default;
}

}


