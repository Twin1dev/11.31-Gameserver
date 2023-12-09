#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UIMapManagerApollo.UIMapManagerApollo_C
// (Actor)

class UClass* AUIMapManagerApollo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIMapManagerApollo_C");

	return Clss;
}


// UIMapManagerApollo_C UIMapManagerApollo.Default__UIMapManagerApollo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUIMapManagerApollo_C* AUIMapManagerApollo_C::GetDefaultObj()
{
	static class AUIMapManagerApollo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUIMapManagerApollo_C*>(AUIMapManagerApollo_C::StaticClass()->DefaultObject);

	return Default;
}

}


