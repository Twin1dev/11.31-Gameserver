#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Snowball_LowFriction_Athena.GE_Snowball_LowFriction_Athena_C
// (None)

class UClass* UGE_Snowball_LowFriction_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Snowball_LowFriction_Athena_C");

	return Clss;
}


// GE_Snowball_LowFriction_Athena_C GE_Snowball_LowFriction_Athena.Default__GE_Snowball_LowFriction_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Snowball_LowFriction_Athena_C* UGE_Snowball_LowFriction_Athena_C::GetDefaultObj()
{
	static class UGE_Snowball_LowFriction_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Snowball_LowFriction_Athena_C*>(UGE_Snowball_LowFriction_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


