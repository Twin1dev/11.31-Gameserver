#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_CreativeMMS.MissionGen_CreativeMMS_C
// (None)

class UClass* UMissionGen_CreativeMMS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_CreativeMMS_C");

	return Clss;
}


// MissionGen_CreativeMMS_C MissionGen_CreativeMMS.Default__MissionGen_CreativeMMS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_CreativeMMS_C* UMissionGen_CreativeMMS_C::GetDefaultObj()
{
	static class UMissionGen_CreativeMMS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_CreativeMMS_C*>(UMissionGen_CreativeMMS_C::StaticClass()->DefaultObject);

	return Default;
}

}


