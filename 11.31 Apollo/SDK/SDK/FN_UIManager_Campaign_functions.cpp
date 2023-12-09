#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UIManager_Campaign.UIManager_Campaign_C
// (None)

class UClass* UUIManager_Campaign_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIManager_Campaign_C");

	return Clss;
}


// UIManager_Campaign_C UIManager_Campaign.Default__UIManager_Campaign_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUIManager_Campaign_C* UUIManager_Campaign_C::GetDefaultObj()
{
	static class UUIManager_Campaign_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIManager_Campaign_C*>(UUIManager_Campaign_C::StaticClass()->DefaultObject);

	return Default;
}

}


