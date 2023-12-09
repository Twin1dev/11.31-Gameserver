#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_OutsideSafeZoneDamageCN.GE_OutsideSafeZoneDamageCN_C
// (None)

class UClass* UGE_OutsideSafeZoneDamageCN_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_OutsideSafeZoneDamageCN_C");

	return Clss;
}


// GE_OutsideSafeZoneDamageCN_C GE_OutsideSafeZoneDamageCN.Default__GE_OutsideSafeZoneDamageCN_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_OutsideSafeZoneDamageCN_C* UGE_OutsideSafeZoneDamageCN_C::GetDefaultObj()
{
	static class UGE_OutsideSafeZoneDamageCN_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_OutsideSafeZoneDamageCN_C*>(UGE_OutsideSafeZoneDamageCN_C::StaticClass()->DefaultObject);

	return Default;
}

}


