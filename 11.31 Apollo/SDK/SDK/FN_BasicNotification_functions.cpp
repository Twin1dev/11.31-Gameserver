#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BasicNotification.BasicNotification_C
// (None)

class UClass* UBasicNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasicNotification_C");

	return Clss;
}


// BasicNotification_C BasicNotification.Default__BasicNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBasicNotification_C* UBasicNotification_C::GetDefaultObj()
{
	static class UBasicNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBasicNotification_C*>(UBasicNotification_C::StaticClass()->DefaultObject);

	return Default;
}

}


