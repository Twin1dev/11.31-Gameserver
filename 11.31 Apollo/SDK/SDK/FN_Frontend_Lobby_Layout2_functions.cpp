#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C
// (Actor)

class UClass* AFrontend_Lobby_Layout2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_Lobby_Layout2_C");

	return Clss;
}


// Frontend_Lobby_Layout2_C Frontend_Lobby_Layout2.Default__Frontend_Lobby_Layout2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_Lobby_Layout2_C* AFrontend_Lobby_Layout2_C::GetDefaultObj()
{
	static class AFrontend_Lobby_Layout2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_Lobby_Layout2_C*>(AFrontend_Lobby_Layout2_C::StaticClass()->DefaultObject);

	return Default;
}

}


