#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Galileo_Lobster_Deflect_Bun.GCN_Galileo_Lobster_Deflect_Bun_C
// (None)

class UClass* UGCN_Galileo_Lobster_Deflect_Bun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Galileo_Lobster_Deflect_Bun_C");

	return Clss;
}


// GCN_Galileo_Lobster_Deflect_Bun_C GCN_Galileo_Lobster_Deflect_Bun.Default__GCN_Galileo_Lobster_Deflect_Bun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Galileo_Lobster_Deflect_Bun_C* UGCN_Galileo_Lobster_Deflect_Bun_C::GetDefaultObj()
{
	static class UGCN_Galileo_Lobster_Deflect_Bun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Galileo_Lobster_Deflect_Bun_C*>(UGCN_Galileo_Lobster_Deflect_Bun_C::StaticClass()->DefaultObject);

	return Default;
}

}


