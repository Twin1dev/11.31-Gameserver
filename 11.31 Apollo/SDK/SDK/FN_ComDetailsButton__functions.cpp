#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ComDetailsButton_.ComDetailsButton__C
// (None)

class UClass* UComDetailsButton__C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComDetailsButton__C");

	return Clss;
}


// ComDetailsButton__C ComDetailsButton_.Default__ComDetailsButton__C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComDetailsButton__C* UComDetailsButton__C::GetDefaultObj()
{
	static class UComDetailsButton__C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComDetailsButton__C*>(UComDetailsButton__C::StaticClass()->DefaultObject);

	return Default;
}

}


