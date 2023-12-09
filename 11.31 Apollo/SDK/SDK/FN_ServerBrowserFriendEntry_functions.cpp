#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ServerBrowserFriendEntry.ServerBrowserFriendEntry_C
// (None)

class UClass* UServerBrowserFriendEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ServerBrowserFriendEntry_C");

	return Clss;
}


// ServerBrowserFriendEntry_C ServerBrowserFriendEntry.Default__ServerBrowserFriendEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UServerBrowserFriendEntry_C* UServerBrowserFriendEntry_C::GetDefaultObj()
{
	static class UServerBrowserFriendEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UServerBrowserFriendEntry_C*>(UServerBrowserFriendEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


