#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HidingProp_DestroyStructure.GE_HidingProp_DestroyStructure_C
// (None)

class UClass* UGE_HidingProp_DestroyStructure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HidingProp_DestroyStructure_C");

	return Clss;
}


// GE_HidingProp_DestroyStructure_C GE_HidingProp_DestroyStructure.Default__GE_HidingProp_DestroyStructure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HidingProp_DestroyStructure_C* UGE_HidingProp_DestroyStructure_C::GetDefaultObj()
{
	static class UGE_HidingProp_DestroyStructure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HidingProp_DestroyStructure_C*>(UGE_HidingProp_DestroyStructure_C::StaticClass()->DefaultObject);

	return Default;
}

}


