#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Athena_Envitem_Slurp.GCNL_Athena_Envitem_Slurp_C
// (Actor)

class UClass* AGCNL_Athena_Envitem_Slurp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Athena_Envitem_Slurp_C");

	return Clss;
}


// GCNL_Athena_Envitem_Slurp_C GCNL_Athena_Envitem_Slurp.Default__GCNL_Athena_Envitem_Slurp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Athena_Envitem_Slurp_C* AGCNL_Athena_Envitem_Slurp_C::GetDefaultObj()
{
	static class AGCNL_Athena_Envitem_Slurp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Athena_Envitem_Slurp_C*>(AGCNL_Athena_Envitem_Slurp_C::StaticClass()->DefaultObject);

	return Default;
}

}


