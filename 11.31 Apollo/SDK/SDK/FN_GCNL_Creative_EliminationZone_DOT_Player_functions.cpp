#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Creative_EliminationZone_DOT_Player.GCNL_Creative_EliminationZone_DOT_Player_C
// (Actor)

class UClass* AGCNL_Creative_EliminationZone_DOT_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Creative_EliminationZone_DOT_Player_C");

	return Clss;
}


// GCNL_Creative_EliminationZone_DOT_Player_C GCNL_Creative_EliminationZone_DOT_Player.Default__GCNL_Creative_EliminationZone_DOT_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Creative_EliminationZone_DOT_Player_C* AGCNL_Creative_EliminationZone_DOT_Player_C::GetDefaultObj()
{
	static class AGCNL_Creative_EliminationZone_DOT_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Creative_EliminationZone_DOT_Player_C*>(AGCNL_Creative_EliminationZone_DOT_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


