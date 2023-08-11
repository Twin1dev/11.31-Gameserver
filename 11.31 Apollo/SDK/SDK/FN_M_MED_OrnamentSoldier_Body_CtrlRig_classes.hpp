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

// 0x2938 (0x2BB0 - 0x278)
// ControlRigBlueprintGeneratedClass M_MED_OrnamentSoldier_Body_CtrlRig.M_MED_OrnamentSoldier_Body_CtrlRig_C
class UM_MED_OrnamentSoldier_Body_CtrlRig_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution;                                    // 0x278(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_66D0[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform;                          // 0x2C0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler;                             // 0x330(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap;                                    // 0x370(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms;                              // 0x3B0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler;                           // 0x420(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform_0;                        // 0x460(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_0;                           // 0x4D0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_0;                                  // 0x510(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_0;                         // 0x550(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0;                            // 0x590(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_0_0_0;                          // 0x600(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0_0_0;                          // 0x670(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis        MathQuaternionGetAxis_0_1_0_0;                     // 0x6E0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                MathVectorSub_0_1_0_0;                             // 0x720(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_66D1[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRigUnit_MathQuaternionFromTwoVectors MathQuaternionFromTwoVectors_0_1_0_0;              // 0x770(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul            MathQuaternionMul_0_1_0_0;                         // 0x7C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_0_1_0_0;                           // 0x810(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector MathTransformTransformVector_0_1_0_0;              // 0x880(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_0_0_0_0_0;                         // 0x8F0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorNegate             MathVectorNegate_0_0;                              // 0x960(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_66D2[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_0_0_0_0;                        // 0x9A0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0_0_0_0;                        // 0xA10(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis        MathQuaternionGetAxis_0_1_0_0_0;                   // 0xA80(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                MathVectorSub_0_1_0_0_0;                           // 0xAC0(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_66D3[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRigUnit_MathQuaternionFromTwoVectors MathQuaternionFromTwoVectors_0_1_0_0_0;            // 0xB10(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul            MathQuaternionMul_0_1_0_0_0;                       // 0xB60(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector MathTransformTransformVector_0_1_0_0_0;            // 0xBB0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorNegate             MathVectorNegate_0_0_0;                            // 0xC20(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_66D4[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRigUnit_TransformConstraint          TransformConstraint;                               // 0xC60(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform;                                  // 0xD60(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0;                                // 0xDD0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_TransformConstraint          TransformConstraint_0;                             // 0xE40(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1;                                // 0xF40(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0;                              // 0xFB0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_TransformConstraint          TransformConstraint_1;                             // 0x1020(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_2;                                // 0x1120(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_1;                              // 0x1190(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_TransformConstraint          TransformConstraint_0_0;                           // 0x1200(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_0;                              // 0x1300(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0_0;                            // 0x1370(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_0_0_0_1;                        // 0x13E0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0_0_0_1;                        // 0x1450(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis        MathQuaternionGetAxis_0_1_0_0_1;                   // 0x14C0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                MathVectorSub_0_1_0_0_1;                           // 0x1500(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_66D5[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRigUnit_MathQuaternionFromTwoVectors MathQuaternionFromTwoVectors_0_1_0_0_1;            // 0x1550(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul            MathQuaternionMul_0_1_0_0_1;                       // 0x15A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_0_1_0_0_0;                         // 0x15F0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector MathTransformTransformVector_0_1_0_0_1;            // 0x1660(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_0_0_0_0_0_0;                       // 0x16D0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorNegate             MathVectorNegate_0_0_1;                            // 0x1740(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_66D6[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_0_0_0_0_0;                      // 0x1780(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0_0_0_0_0;                      // 0x17F0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis        MathQuaternionGetAxis_0_1_0_0_0_0;                 // 0x1860(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                MathVectorSub_0_1_0_0_0_0;                         // 0x18A0(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_66D7[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRigUnit_MathQuaternionFromTwoVectors MathQuaternionFromTwoVectors_0_1_0_0_0_0;          // 0x18F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul            MathQuaternionMul_0_1_0_0_0_0;                     // 0x1940(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector MathTransformTransformVector_0_1_0_0_0_0;          // 0x1990(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorNegate             MathVectorNegate_0_0_0_0;                          // 0x1A00(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_66D8[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform_1;                        // 0x1A40(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_1;                           // 0x1AB0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_1;                                  // 0x1AF0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_1;                            // 0x1B30(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1;                         // 0x1BA0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform_0_0;                      // 0x1BE0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_0_0;                         // 0x1C50(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_0_0;                                // 0x1C90(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0_0;                          // 0x1CD0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatAbs                 MathFloatAbs;                                      // 0x1D40(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_66D9[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform_1_0;                      // 0x1D70(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_1_0;                         // 0x1DE0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_1_0;                                // 0x1E20(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_1_0;                          // 0x1E60(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform_0_0_0;                    // 0x1ED0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_0_0_0;                       // 0x1F40(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_0_0_0;                              // 0x1F80(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0_0_0;                        // 0x1FC0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatAbs                 MathFloatAbs_0;                                    // 0x2030(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_66DA[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform_1_0_0;                    // 0x2060(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_1_0_0;                       // 0x20D0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_1_0_0;                              // 0x2110(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_1_0_0;                        // 0x2150(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0_0_0_0;                      // 0x21C0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_DebugTransformMutable        DebugTransformMutable;                             // 0x2230(0xE0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_1_1;                          // 0x2310(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1_0;                       // 0x2380(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_TransformConstraint          TransformConstraint_2;                             // 0x23C0(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_3;                                // 0x24C0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_2;                              // 0x2530(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_TransformConstraint          TransformConstraint_0_1;                           // 0x25A0(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_1;                              // 0x26A0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0_1;                            // 0x2710(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_TransformConstraint          TransformConstraint_0_1_0;                         // 0x2780(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0_1_0;                          // 0x2880(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_TransformConstraint          TransformConstraint_1_0;                           // 0x28F0(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_2_0;                              // 0x29F0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_1_0;                            // 0x2A60(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_0_0;                            // 0x2AD0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0_0_1;                          // 0x2B40(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_OrnamentSoldier_Body_CtrlRig_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
