#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C
// (Actor)

class UClass* ABP_ZipLine_Athena_Harness_Yellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZipLine_Athena_Harness_Yellow_C");

	return Clss;
}


// BP_ZipLine_Athena_Harness_Yellow_C BP_ZipLine_Athena_Harness_Yellow.Default__BP_ZipLine_Athena_Harness_Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZipLine_Athena_Harness_Yellow_C* ABP_ZipLine_Athena_Harness_Yellow_C::GetDefaultObj()
{
	static class ABP_ZipLine_Athena_Harness_Yellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZipLine_Athena_Harness_Yellow_C*>(ABP_ZipLine_Athena_Harness_Yellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


