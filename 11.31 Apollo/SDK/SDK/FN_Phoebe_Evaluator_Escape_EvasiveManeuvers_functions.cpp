#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Phoebe_Evaluator_Escape_EvasiveManeuvers.Phoebe_Evaluator_Escape_EvasiveManeuvers_C
// (None)

class UClass* UPhoebe_Evaluator_Escape_EvasiveManeuvers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Phoebe_Evaluator_Escape_EvasiveManeuvers_C");

	return Clss;
}


// Phoebe_Evaluator_Escape_EvasiveManeuvers_C Phoebe_Evaluator_Escape_EvasiveManeuvers.Default__Phoebe_Evaluator_Escape_EvasiveManeuvers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPhoebe_Evaluator_Escape_EvasiveManeuvers_C* UPhoebe_Evaluator_Escape_EvasiveManeuvers_C::GetDefaultObj()
{
	static class UPhoebe_Evaluator_Escape_EvasiveManeuvers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhoebe_Evaluator_Escape_EvasiveManeuvers_C*>(UPhoebe_Evaluator_Escape_EvasiveManeuvers_C::StaticClass()->DefaultObject);

	return Default;
}

}


