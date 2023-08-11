#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function DBNO_Carried.DBNO_Carried_C.AnimGraph
struct UDBNO_Carried_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function DBNO_Carried.DBNO_Carried_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ModifyBone_59E069244645BEF22808AB9196186F3F
struct UDBNO_Carried_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ModifyBone_59E069244645BEF22808AB9196186F3F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DBNO_Carried.DBNO_Carried_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ApplyAdditive_56B19EE040BEEBC25D674F8DC99831B9
struct UDBNO_Carried_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ApplyAdditive_56B19EE040BEEBC25D674F8DC99831B9_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function DBNO_Carried.DBNO_Carried_C.BlueprintUpdateAnimation
struct UDBNO_Carried_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function DBNO_Carried.DBNO_Carried_C.BlueprintInitializeAnimation
struct UDBNO_Carried_C_BlueprintInitializeAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DBNO_Carried.DBNO_Carried_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_LinkedAnimGraph_BC9172D64300E6A13C48509FE2988A40
struct UDBNO_Carried_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_LinkedAnimGraph_BC9172D64300E6A13C48509FE2988A40_Params
{
public:
};

// 0x137 (0x137 - 0x0)
// Function DBNO_Carried.DBNO_Carried_C.ExecuteUbergraph_DBNO_Carried
struct UDBNO_Carried_C_ExecuteUbergraph_DBNO_Carried_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInstanceStateWeight_ReturnValue;       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_GetAttachParentActor_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortPlayerAnimInstance*               K2Node_DynamicCast_AsFort_Player_Anim_Instance;    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44C0[0xE];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x50(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44C1[0xC];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue_1;         // 0xB0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0xE0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0xEC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0xF8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurveValue_ReturnValue;                // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Montage_GetPosition_ReturnValue;          // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Montage_GetPlayRate_ReturnValue;          // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Montage_GetPosition_ReturnValue_1;        // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue;            // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x135(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue_1;          // 0x136(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
