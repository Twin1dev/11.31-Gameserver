#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RestoreControlResistance.GE_RestoreControlResistance_C
// (None)

class UClass* UGE_RestoreControlResistance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RestoreControlResistance_C");

	return Clss;
}


// GE_RestoreControlResistance_C GE_RestoreControlResistance.Default__GE_RestoreControlResistance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RestoreControlResistance_C* UGE_RestoreControlResistance_C::GetDefaultObj()
{
	static class UGE_RestoreControlResistance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RestoreControlResistance_C*>(UGE_RestoreControlResistance_C::StaticClass()->DefaultObject);

	return Default;
}

}


