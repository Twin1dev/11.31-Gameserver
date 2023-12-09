#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Athena_HidingProp_HayStack_LandedOn.GCN_Athena_HidingProp_HayStack_LandedOn_C
// (None)

class UClass* UGCN_Athena_HidingProp_HayStack_LandedOn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Athena_HidingProp_HayStack_LandedOn_C");

	return Clss;
}


// GCN_Athena_HidingProp_HayStack_LandedOn_C GCN_Athena_HidingProp_HayStack_LandedOn.Default__GCN_Athena_HidingProp_HayStack_LandedOn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Athena_HidingProp_HayStack_LandedOn_C* UGCN_Athena_HidingProp_HayStack_LandedOn_C::GetDefaultObj()
{
	static class UGCN_Athena_HidingProp_HayStack_LandedOn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Athena_HidingProp_HayStack_LandedOn_C*>(UGCN_Athena_HidingProp_HayStack_LandedOn_C::StaticClass()->DefaultObject);

	return Default;
}

}


