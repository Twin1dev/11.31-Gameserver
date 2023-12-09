#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Galileo_Lobster_Deflect_Lobster.GCN_Galileo_Lobster_Deflect_Lobster_C
// (None)

class UClass* UGCN_Galileo_Lobster_Deflect_Lobster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Galileo_Lobster_Deflect_Lobster_C");

	return Clss;
}


// GCN_Galileo_Lobster_Deflect_Lobster_C GCN_Galileo_Lobster_Deflect_Lobster.Default__GCN_Galileo_Lobster_Deflect_Lobster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Galileo_Lobster_Deflect_Lobster_C* UGCN_Galileo_Lobster_Deflect_Lobster_C::GetDefaultObj()
{
	static class UGCN_Galileo_Lobster_Deflect_Lobster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Galileo_Lobster_Deflect_Lobster_C*>(UGCN_Galileo_Lobster_Deflect_Lobster_C::StaticClass()->DefaultObject);

	return Default;
}

}


