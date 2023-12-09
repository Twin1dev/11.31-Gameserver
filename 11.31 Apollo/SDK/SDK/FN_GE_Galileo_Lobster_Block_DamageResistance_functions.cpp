#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Galileo_Lobster_Block_DamageResistance.GE_Galileo_Lobster_Block_DamageResistance_C
// (None)

class UClass* UGE_Galileo_Lobster_Block_DamageResistance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Galileo_Lobster_Block_DamageResistance_C");

	return Clss;
}


// GE_Galileo_Lobster_Block_DamageResistance_C GE_Galileo_Lobster_Block_DamageResistance.Default__GE_Galileo_Lobster_Block_DamageResistance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Galileo_Lobster_Block_DamageResistance_C* UGE_Galileo_Lobster_Block_DamageResistance_C::GetDefaultObj()
{
	static class UGE_Galileo_Lobster_Block_DamageResistance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Galileo_Lobster_Block_DamageResistance_C*>(UGE_Galileo_Lobster_Block_DamageResistance_C::StaticClass()->DefaultObject);

	return Default;
}

}


