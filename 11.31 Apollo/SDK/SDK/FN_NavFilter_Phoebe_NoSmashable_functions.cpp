#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_Phoebe_NoSmashable.NavFilter_Phoebe_NoSmashable_C
// (None)

class UClass* UNavFilter_Phoebe_NoSmashable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_Phoebe_NoSmashable_C");

	return Clss;
}


// NavFilter_Phoebe_NoSmashable_C NavFilter_Phoebe_NoSmashable.Default__NavFilter_Phoebe_NoSmashable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_Phoebe_NoSmashable_C* UNavFilter_Phoebe_NoSmashable_C::GetDefaultObj()
{
	static class UNavFilter_Phoebe_NoSmashable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_Phoebe_NoSmashable_C*>(UNavFilter_Phoebe_NoSmashable_C::StaticClass()->DefaultObject);

	return Default;
}

}


