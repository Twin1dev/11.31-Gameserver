#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HideOnMiniMap.GE_HideOnMiniMap_C
// (None)

class UClass* UGE_HideOnMiniMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HideOnMiniMap_C");

	return Clss;
}


// GE_HideOnMiniMap_C GE_HideOnMiniMap.Default__GE_HideOnMiniMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HideOnMiniMap_C* UGE_HideOnMiniMap_C::GetDefaultObj()
{
	static class UGE_HideOnMiniMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HideOnMiniMap_C*>(UGE_HideOnMiniMap_C::StaticClass()->DefaultObject);

	return Default;
}

}


