#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass M_MED_OrnamentSoldier_FaceAcc_CtrlRig.M_MED_OrnamentSoldier_FaceAcc_CtrlRig_C
// (None)

class UClass* UM_MED_OrnamentSoldier_FaceAcc_CtrlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_MED_OrnamentSoldier_FaceAcc_CtrlRig_C");

	return Clss;
}


// M_MED_OrnamentSoldier_FaceAcc_CtrlRig_C M_MED_OrnamentSoldier_FaceAcc_CtrlRig.Default__M_MED_OrnamentSoldier_FaceAcc_CtrlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_MED_OrnamentSoldier_FaceAcc_CtrlRig_C* UM_MED_OrnamentSoldier_FaceAcc_CtrlRig_C::GetDefaultObj()
{
	static class UM_MED_OrnamentSoldier_FaceAcc_CtrlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_MED_OrnamentSoldier_FaceAcc_CtrlRig_C*>(UM_MED_OrnamentSoldier_FaceAcc_CtrlRig_C::StaticClass()->DefaultObject);

	return Default;
}

}


