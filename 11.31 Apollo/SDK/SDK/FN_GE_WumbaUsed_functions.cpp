#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_WumbaUsed.GE_WumbaUsed_C
// (None)

class UClass* UGE_WumbaUsed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_WumbaUsed_C");

	return Clss;
}


// GE_WumbaUsed_C GE_WumbaUsed.Default__GE_WumbaUsed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_WumbaUsed_C* UGE_WumbaUsed_C::GetDefaultObj()
{
	static class UGE_WumbaUsed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_WumbaUsed_C*>(UGE_WumbaUsed_C::StaticClass()->DefaultObject);

	return Default;
}

}


