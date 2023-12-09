#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaGenericWarning.AthenaGenericWarning_C
// (None)

class UClass* UAthenaGenericWarning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaGenericWarning_C");

	return Clss;
}


// AthenaGenericWarning_C AthenaGenericWarning.Default__AthenaGenericWarning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaGenericWarning_C* UAthenaGenericWarning_C::GetDefaultObj()
{
	static class UAthenaGenericWarning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaGenericWarning_C*>(UAthenaGenericWarning_C::StaticClass()->DefaultObject);

	return Default;
}

}


