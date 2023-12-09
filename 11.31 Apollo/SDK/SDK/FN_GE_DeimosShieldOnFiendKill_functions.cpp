#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DeimosShieldOnFiendKill.GE_DeimosShieldOnFiendKill_C
// (None)

class UClass* UGE_DeimosShieldOnFiendKill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DeimosShieldOnFiendKill_C");

	return Clss;
}


// GE_DeimosShieldOnFiendKill_C GE_DeimosShieldOnFiendKill.Default__GE_DeimosShieldOnFiendKill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DeimosShieldOnFiendKill_C* UGE_DeimosShieldOnFiendKill_C::GetDefaultObj()
{
	static class UGE_DeimosShieldOnFiendKill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DeimosShieldOnFiendKill_C*>(UGE_DeimosShieldOnFiendKill_C::StaticClass()->DefaultObject);

	return Default;
}

}


