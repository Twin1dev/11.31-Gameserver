#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E0 (0x758 - 0x278)
// ControlRigBlueprintGeneratedClass M_MED_OrnamentSoldier_FaceAcc_CtrlRig.M_MED_OrnamentSoldier_FaceAcc_CtrlRig_C
class UM_MED_OrnamentSoldier_FaceAcc_CtrlRig_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution;                                    // 0x278(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_6D6A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform;                          // 0x2C0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler;                             // 0x330(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap;                                    // 0x370(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_AccumulateFloatLerp          AccumulateFloatLerp;                               // 0x3B0(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms;                              // 0x3E8(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_6D6B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler;                           // 0x460(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_0;                         // 0x4A0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0;                            // 0x4E0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_0_0;                       // 0x550(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0_0;                          // 0x590(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform_1;                        // 0x600(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_1;                           // 0x670(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_0_1;                                // 0x6B0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_AccumulateFloatLerp          AccumulateFloatLerp_0;                             // 0x6F0(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatMul                 MathFloatMul;                                      // 0x728(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UM_MED_OrnamentSoldier_FaceAcc_CtrlRig_C* GetDefaultObj();

};

}


