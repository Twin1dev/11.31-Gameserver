#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Device_Floor_MutatorZone.GE_Device_Floor_MutatorZone_C
// (None)

class UClass* UGE_Device_Floor_MutatorZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Device_Floor_MutatorZone_C");

	return Clss;
}


// GE_Device_Floor_MutatorZone_C GE_Device_Floor_MutatorZone.Default__GE_Device_Floor_MutatorZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Device_Floor_MutatorZone_C* UGE_Device_Floor_MutatorZone_C::GetDefaultObj()
{
	static class UGE_Device_Floor_MutatorZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Device_Floor_MutatorZone_C*>(UGE_Device_Floor_MutatorZone_C::StaticClass()->DefaultObject);

	return Default;
}

}


