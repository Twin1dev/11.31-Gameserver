#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HeldObject_Snowball_Damage.GE_HeldObject_Snowball_Damage_C
// (None)

class UClass* UGE_HeldObject_Snowball_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HeldObject_Snowball_Damage_C");

	return Clss;
}


// GE_HeldObject_Snowball_Damage_C GE_HeldObject_Snowball_Damage.Default__GE_HeldObject_Snowball_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HeldObject_Snowball_Damage_C* UGE_HeldObject_Snowball_Damage_C::GetDefaultObj()
{
	static class UGE_HeldObject_Snowball_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HeldObject_Snowball_Damage_C*>(UGE_HeldObject_Snowball_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


