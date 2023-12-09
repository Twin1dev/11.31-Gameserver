#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Generic_Stunned.GCN_Generic_Stunned_C
// (Actor)

class UClass* AGCN_Generic_Stunned_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Generic_Stunned_C");

	return Clss;
}


// GCN_Generic_Stunned_C GCN_Generic_Stunned.Default__GCN_Generic_Stunned_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Generic_Stunned_C* AGCN_Generic_Stunned_C::GetDefaultObj()
{
	static class AGCN_Generic_Stunned_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Generic_Stunned_C*>(AGCN_Generic_Stunned_C::StaticClass()->DefaultObject);

	return Default;
}

}


