#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Phoebe_Evaluator_Storm.Phoebe_Evaluator_Storm_C
// (None)

class UClass* UPhoebe_Evaluator_Storm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Phoebe_Evaluator_Storm_C");

	return Clss;
}


// Phoebe_Evaluator_Storm_C Phoebe_Evaluator_Storm.Default__Phoebe_Evaluator_Storm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPhoebe_Evaluator_Storm_C* UPhoebe_Evaluator_Storm_C::GetDefaultObj()
{
	static class UPhoebe_Evaluator_Storm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhoebe_Evaluator_Storm_C*>(UPhoebe_Evaluator_Storm_C::StaticClass()->DefaultObject);

	return Default;
}

}


