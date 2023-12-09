#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SubgameSelectFrontend.SubgameSelectFrontend_C
// (None)

class UClass* USubgameSelectFrontend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubgameSelectFrontend_C");

	return Clss;
}


// SubgameSelectFrontend_C SubgameSelectFrontend.Default__SubgameSelectFrontend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubgameSelectFrontend_C* USubgameSelectFrontend_C::GetDefaultObj()
{
	static class USubgameSelectFrontend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubgameSelectFrontend_C*>(USubgameSelectFrontend_C::StaticClass()->DefaultObject);

	return Default;
}

}


