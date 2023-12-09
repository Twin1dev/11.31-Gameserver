#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Galileo_Lobster_PoiseRegen.GE_Galileo_Lobster_PoiseRegen_C
// (None)

class UClass* UGE_Galileo_Lobster_PoiseRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Galileo_Lobster_PoiseRegen_C");

	return Clss;
}


// GE_Galileo_Lobster_PoiseRegen_C GE_Galileo_Lobster_PoiseRegen.Default__GE_Galileo_Lobster_PoiseRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Galileo_Lobster_PoiseRegen_C* UGE_Galileo_Lobster_PoiseRegen_C::GetDefaultObj()
{
	static class UGE_Galileo_Lobster_PoiseRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Galileo_Lobster_PoiseRegen_C*>(UGE_Galileo_Lobster_PoiseRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


