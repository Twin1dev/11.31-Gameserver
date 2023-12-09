#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_FiendApplyFullBodyHit.GAB_FiendApplyFullBodyHit_C
// (None)

class UClass* UGAB_FiendApplyFullBodyHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_FiendApplyFullBodyHit_C");

	return Clss;
}


// GAB_FiendApplyFullBodyHit_C GAB_FiendApplyFullBodyHit.Default__GAB_FiendApplyFullBodyHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_FiendApplyFullBodyHit_C* UGAB_FiendApplyFullBodyHit_C::GetDefaultObj()
{
	static class UGAB_FiendApplyFullBodyHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_FiendApplyFullBodyHit_C*>(UGAB_FiendApplyFullBodyHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


