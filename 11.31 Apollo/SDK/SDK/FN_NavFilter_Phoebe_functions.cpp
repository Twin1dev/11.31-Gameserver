#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_Phoebe.NavFilter_Phoebe_C
// (None)

class UClass* UNavFilter_Phoebe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_Phoebe_C");

	return Clss;
}


// NavFilter_Phoebe_C NavFilter_Phoebe.Default__NavFilter_Phoebe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_Phoebe_C* UNavFilter_Phoebe_C::GetDefaultObj()
{
	static class UNavFilter_Phoebe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_Phoebe_C*>(UNavFilter_Phoebe_C::StaticClass()->DefaultObject);

	return Default;
}

}


