#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UIManager_Athena.UIManager_Athena_C
// (None)

class UClass* UUIManager_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIManager_Athena_C");

	return Clss;
}


// UIManager_Athena_C UIManager_Athena.Default__UIManager_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUIManager_Athena_C* UUIManager_Athena_C::GetDefaultObj()
{
	static class UUIManager_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIManager_Athena_C*>(UUIManager_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


