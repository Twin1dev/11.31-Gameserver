#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CrackshotMannequin_CozyFrontend_Male.CrackshotMannequin_CozyFrontend_Male_C
// (Actor)

class UClass* ACrackshotMannequin_CozyFrontend_Male_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrackshotMannequin_CozyFrontend_Male_C");

	return Clss;
}


// CrackshotMannequin_CozyFrontend_Male_C CrackshotMannequin_CozyFrontend_Male.Default__CrackshotMannequin_CozyFrontend_Male_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACrackshotMannequin_CozyFrontend_Male_C* ACrackshotMannequin_CozyFrontend_Male_C::GetDefaultObj()
{
	static class ACrackshotMannequin_CozyFrontend_Male_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrackshotMannequin_CozyFrontend_Male_C*>(ACrackshotMannequin_CozyFrontend_Male_C::StaticClass()->DefaultObject);

	return Default;
}

}


