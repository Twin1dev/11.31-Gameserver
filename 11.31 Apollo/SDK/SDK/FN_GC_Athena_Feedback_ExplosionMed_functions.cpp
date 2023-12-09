#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Athena_Feedback_ExplosionMed.GC_Athena_Feedback_ExplosionMed_C
// (None)

class UClass* UGC_Athena_Feedback_ExplosionMed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Athena_Feedback_ExplosionMed_C");

	return Clss;
}


// GC_Athena_Feedback_ExplosionMed_C GC_Athena_Feedback_ExplosionMed.Default__GC_Athena_Feedback_ExplosionMed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Athena_Feedback_ExplosionMed_C* UGC_Athena_Feedback_ExplosionMed_C::GetDefaultObj()
{
	static class UGC_Athena_Feedback_ExplosionMed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Athena_Feedback_ExplosionMed_C*>(UGC_Athena_Feedback_ExplosionMed_C::StaticClass()->DefaultObject);

	return Default;
}

}


