#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TwitchNotification.TwitchNotification_C
// (None)

class UClass* UTwitchNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwitchNotification_C");

	return Clss;
}


// TwitchNotification_C TwitchNotification.Default__TwitchNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTwitchNotification_C* UTwitchNotification_C::GetDefaultObj()
{
	static class UTwitchNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwitchNotification_C*>(UTwitchNotification_C::StaticClass()->DefaultObject);

	return Default;
}

}


