#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StunActive.GE_StunActive_C
// (None)

class UClass* UGE_StunActive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StunActive_C");

	return Clss;
}


// GE_StunActive_C GE_StunActive.Default__GE_StunActive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StunActive_C* UGE_StunActive_C::GetDefaultObj()
{
	static class UGE_StunActive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StunActive_C*>(UGE_StunActive_C::StaticClass()->DefaultObject);

	return Default;
}

}


