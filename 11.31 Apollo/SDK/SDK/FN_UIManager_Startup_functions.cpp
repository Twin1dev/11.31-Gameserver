#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UIManager_Startup.UIManager_Startup_C
// (None)

class UClass* UUIManager_Startup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIManager_Startup_C");

	return Clss;
}


// UIManager_Startup_C UIManager_Startup.Default__UIManager_Startup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUIManager_Startup_C* UUIManager_Startup_C::GetDefaultObj()
{
	static class UUIManager_Startup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIManager_Startup_C*>(UUIManager_Startup_C::StaticClass()->DefaultObject);

	return Default;
}

}


