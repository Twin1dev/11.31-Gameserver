#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LocalNotifications.LocalNotificationsSettings
// (None)

class UClass* ULocalNotificationsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocalNotificationsSettings");

	return Clss;
}


// LocalNotificationsSettings LocalNotifications.Default__LocalNotificationsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULocalNotificationsSettings* ULocalNotificationsSettings::GetDefaultObj()
{
	static class ULocalNotificationsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocalNotificationsSettings*>(ULocalNotificationsSettings::StaticClass()->DefaultObject);

	return Default;
}

}


