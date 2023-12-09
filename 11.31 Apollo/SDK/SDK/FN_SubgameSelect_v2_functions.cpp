#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SubgameSelect_v2.SubgameSelect_v2_C
// (None)

class UClass* USubgameSelect_v2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubgameSelect_v2_C");

	return Clss;
}


// SubgameSelect_v2_C SubgameSelect_v2.Default__SubgameSelect_v2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubgameSelect_v2_C* USubgameSelect_v2_C::GetDefaultObj()
{
	static class USubgameSelect_v2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubgameSelect_v2_C*>(USubgameSelect_v2_C::StaticClass()->DefaultObject);

	return Default;
}

}


