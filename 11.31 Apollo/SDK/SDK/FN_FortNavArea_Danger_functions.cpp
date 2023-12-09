#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortNavArea_Danger.FortNavArea_Danger_C
// (None)

class UClass* UFortNavArea_Danger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_Danger_C");

	return Clss;
}


// FortNavArea_Danger_C FortNavArea_Danger.Default__FortNavArea_Danger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortNavArea_Danger_C* UFortNavArea_Danger_C::GetDefaultObj()
{
	static class UFortNavArea_Danger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_Danger_C*>(UFortNavArea_Danger_C::StaticClass()->DefaultObject);

	return Default;
}

}


