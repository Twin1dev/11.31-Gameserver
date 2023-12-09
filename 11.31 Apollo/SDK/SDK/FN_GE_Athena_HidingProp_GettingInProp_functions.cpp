#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Athena_HidingProp_GettingInProp.GE_Athena_HidingProp_GettingInProp_C
// (None)

class UClass* UGE_Athena_HidingProp_GettingInProp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Athena_HidingProp_GettingInProp_C");

	return Clss;
}


// GE_Athena_HidingProp_GettingInProp_C GE_Athena_HidingProp_GettingInProp.Default__GE_Athena_HidingProp_GettingInProp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Athena_HidingProp_GettingInProp_C* UGE_Athena_HidingProp_GettingInProp_C::GetDefaultObj()
{
	static class UGE_Athena_HidingProp_GettingInProp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Athena_HidingProp_GettingInProp_C*>(UGE_Athena_HidingProp_GettingInProp_C::StaticClass()->DefaultObject);

	return Default;
}

}


