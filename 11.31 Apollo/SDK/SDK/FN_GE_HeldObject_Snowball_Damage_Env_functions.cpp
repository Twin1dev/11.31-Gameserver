#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HeldObject_Snowball_Damage_Env.GE_HeldObject_Snowball_Damage_Env_C
// (None)

class UClass* UGE_HeldObject_Snowball_Damage_Env_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HeldObject_Snowball_Damage_Env_C");

	return Clss;
}


// GE_HeldObject_Snowball_Damage_Env_C GE_HeldObject_Snowball_Damage_Env.Default__GE_HeldObject_Snowball_Damage_Env_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HeldObject_Snowball_Damage_Env_C* UGE_HeldObject_Snowball_Damage_Env_C::GetDefaultObj()
{
	static class UGE_HeldObject_Snowball_Damage_Env_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HeldObject_Snowball_Damage_Env_C*>(UGE_HeldObject_Snowball_Damage_Env_C::StaticClass()->DefaultObject);

	return Default;
}

}


