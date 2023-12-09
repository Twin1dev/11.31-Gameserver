#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Galileo_Lobster_BlockBreak_Duration.GE_Galileo_Lobster_BlockBreak_Duration_C
// (None)

class UClass* UGE_Galileo_Lobster_BlockBreak_Duration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Galileo_Lobster_BlockBreak_Duration_C");

	return Clss;
}


// GE_Galileo_Lobster_BlockBreak_Duration_C GE_Galileo_Lobster_BlockBreak_Duration.Default__GE_Galileo_Lobster_BlockBreak_Duration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Galileo_Lobster_BlockBreak_Duration_C* UGE_Galileo_Lobster_BlockBreak_Duration_C::GetDefaultObj()
{
	static class UGE_Galileo_Lobster_BlockBreak_Duration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Galileo_Lobster_BlockBreak_Duration_C*>(UGE_Galileo_Lobster_BlockBreak_Duration_C::StaticClass()->DefaultObject);

	return Default;
}

}


