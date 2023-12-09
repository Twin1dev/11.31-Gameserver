#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_Prop_Bow.Athena_Prop_Bow_C
// (Actor)

class UClass* AAthena_Prop_Bow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_Prop_Bow_C");

	return Clss;
}


// Athena_Prop_Bow_C Athena_Prop_Bow.Default__Athena_Prop_Bow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAthena_Prop_Bow_C* AAthena_Prop_Bow_C::GetDefaultObj()
{
	static class AAthena_Prop_Bow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAthena_Prop_Bow_C*>(AAthena_Prop_Bow_C::StaticClass()->DefaultObject);

	return Default;
}

}


