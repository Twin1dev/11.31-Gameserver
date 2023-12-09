#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Creative_ZebraWallet_Generic_Duos.MissionGen_Creative_ZebraWallet_Generic_Duos_C
// (None)

class UClass* UMissionGen_Creative_ZebraWallet_Generic_Duos_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Creative_ZebraWallet_Generic_Duos_C");

	return Clss;
}


// MissionGen_Creative_ZebraWallet_Generic_Duos_C MissionGen_Creative_ZebraWallet_Generic_Duos.Default__MissionGen_Creative_ZebraWallet_Generic_Duos_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Creative_ZebraWallet_Generic_Duos_C* UMissionGen_Creative_ZebraWallet_Generic_Duos_C::GetDefaultObj()
{
	static class UMissionGen_Creative_ZebraWallet_Generic_Duos_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Creative_ZebraWallet_Generic_Duos_C*>(UMissionGen_Creative_ZebraWallet_Generic_Duos_C::StaticClass()->DefaultObject);

	return Default;
}

}


