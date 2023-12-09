#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Galileo_Weapon.B_Galileo_Weapon_C
// (Actor)

class UClass* AB_Galileo_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Galileo_Weapon_C");

	return Clss;
}


// B_Galileo_Weapon_C B_Galileo_Weapon.Default__B_Galileo_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Galileo_Weapon_C* AB_Galileo_Weapon_C::GetDefaultObj()
{
	static class AB_Galileo_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Galileo_Weapon_C*>(AB_Galileo_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


