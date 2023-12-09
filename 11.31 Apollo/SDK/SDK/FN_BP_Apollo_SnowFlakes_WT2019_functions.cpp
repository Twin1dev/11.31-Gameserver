#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Apollo_SnowFlakes_WT2019.BP_Apollo_SnowFlakes_WT2019_C
// (Actor)

class UClass* ABP_Apollo_SnowFlakes_WT2019_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Apollo_SnowFlakes_WT2019_C");

	return Clss;
}


// BP_Apollo_SnowFlakes_WT2019_C BP_Apollo_SnowFlakes_WT2019.Default__BP_Apollo_SnowFlakes_WT2019_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Apollo_SnowFlakes_WT2019_C* ABP_Apollo_SnowFlakes_WT2019_C::GetDefaultObj()
{
	static class ABP_Apollo_SnowFlakes_WT2019_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Apollo_SnowFlakes_WT2019_C*>(ABP_Apollo_SnowFlakes_WT2019_C::StaticClass()->DefaultObject);

	return Default;
}

}


