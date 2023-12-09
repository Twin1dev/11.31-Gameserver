#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass Male_Medium_Nutcracker_Head_CtrlRig.Male_Medium_Nutcracker_Head_CtrlRig_C
// (None)

class UClass* UMale_Medium_Nutcracker_Head_CtrlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Male_Medium_Nutcracker_Head_CtrlRig_C");

	return Clss;
}


// Male_Medium_Nutcracker_Head_CtrlRig_C Male_Medium_Nutcracker_Head_CtrlRig.Default__Male_Medium_Nutcracker_Head_CtrlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMale_Medium_Nutcracker_Head_CtrlRig_C* UMale_Medium_Nutcracker_Head_CtrlRig_C::GetDefaultObj()
{
	static class UMale_Medium_Nutcracker_Head_CtrlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMale_Medium_Nutcracker_Head_CtrlRig_C*>(UMale_Medium_Nutcracker_Head_CtrlRig_C::StaticClass()->DefaultObject);

	return Default;
}

}


