#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D8 (0x450 - 0x278)
// ControlRigBlueprintGeneratedClass Male_Medium_Nutcracker_Head_CtrlRig.Male_Medium_Nutcracker_Head_CtrlRig_C
class UMale_Medium_Nutcracker_Head_CtrlRig_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution;                                    // 0x278(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_66E8[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1;                                // 0x2C0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler;                             // 0x330(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler;                           // 0x370(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatMul                 MathFloatMul;                                      // 0x3B0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms;                              // 0x3E0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Male_Medium_Nutcracker_Head_CtrlRig_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
