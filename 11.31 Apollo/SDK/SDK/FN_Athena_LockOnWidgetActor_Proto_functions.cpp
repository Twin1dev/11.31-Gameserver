#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_LockOnWidgetActor_Proto.Athena_LockOnWidgetActor_Proto_C
// (Actor)

class UClass* AAthena_LockOnWidgetActor_Proto_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_LockOnWidgetActor_Proto_C");

	return Clss;
}


// Athena_LockOnWidgetActor_Proto_C Athena_LockOnWidgetActor_Proto.Default__Athena_LockOnWidgetActor_Proto_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAthena_LockOnWidgetActor_Proto_C* AAthena_LockOnWidgetActor_Proto_C::GetDefaultObj()
{
	static class AAthena_LockOnWidgetActor_Proto_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAthena_LockOnWidgetActor_Proto_C*>(AAthena_LockOnWidgetActor_Proto_C::StaticClass()->DefaultObject);

	return Default;
}

}


