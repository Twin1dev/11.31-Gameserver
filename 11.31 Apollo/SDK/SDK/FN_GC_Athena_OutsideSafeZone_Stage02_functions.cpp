#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Athena_OutsideSafeZone_Stage02.GC_Athena_OutsideSafeZone_Stage02_C
// (Actor)

class UClass* AGC_Athena_OutsideSafeZone_Stage02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Athena_OutsideSafeZone_Stage02_C");

	return Clss;
}


// GC_Athena_OutsideSafeZone_Stage02_C GC_Athena_OutsideSafeZone_Stage02.Default__GC_Athena_OutsideSafeZone_Stage02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_Athena_OutsideSafeZone_Stage02_C* AGC_Athena_OutsideSafeZone_Stage02_C::GetDefaultObj()
{
	static class AGC_Athena_OutsideSafeZone_Stage02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_Athena_OutsideSafeZone_Stage02_C*>(AGC_Athena_OutsideSafeZone_Stage02_C::StaticClass()->DefaultObject);

	return Default;
}

}


