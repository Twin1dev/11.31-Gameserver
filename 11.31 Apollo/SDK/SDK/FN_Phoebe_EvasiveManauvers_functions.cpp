#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Phoebe_EvasiveManauvers.Phoebe_EvasiveManauvers_C
// (None)

class UClass* UPhoebe_EvasiveManauvers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Phoebe_EvasiveManauvers_C");

	return Clss;
}


// Phoebe_EvasiveManauvers_C Phoebe_EvasiveManauvers.Default__Phoebe_EvasiveManauvers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPhoebe_EvasiveManauvers_C* UPhoebe_EvasiveManauvers_C::GetDefaultObj()
{
	static class UPhoebe_EvasiveManauvers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhoebe_EvasiveManauvers_C*>(UPhoebe_EvasiveManauvers_C::StaticClass()->DefaultObject);

	return Default;
}

}


