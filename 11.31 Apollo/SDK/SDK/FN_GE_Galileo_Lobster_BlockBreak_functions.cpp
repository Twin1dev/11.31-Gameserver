#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Galileo_Lobster_BlockBreak.GE_Galileo_Lobster_BlockBreak_C
// (None)

class UClass* UGE_Galileo_Lobster_BlockBreak_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Galileo_Lobster_BlockBreak_C");

	return Clss;
}


// GE_Galileo_Lobster_BlockBreak_C GE_Galileo_Lobster_BlockBreak.Default__GE_Galileo_Lobster_BlockBreak_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Galileo_Lobster_BlockBreak_C* UGE_Galileo_Lobster_BlockBreak_C::GetDefaultObj()
{
	static class UGE_Galileo_Lobster_BlockBreak_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Galileo_Lobster_BlockBreak_C*>(UGE_Galileo_Lobster_BlockBreak_C::StaticClass()->DefaultObject);

	return Default;
}

}


