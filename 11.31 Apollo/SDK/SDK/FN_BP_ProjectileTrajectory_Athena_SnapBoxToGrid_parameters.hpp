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

// 0x28 (0x28 - 0x0)
// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.GetPlaysetFromController
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_GetPlaysetFromController_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_496C[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_496D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortPlaysetItemDefinition*            CallFunc_GetPlayset_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.UpdateScaleForPlayset
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_UpdateScaleForPlayset_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_496E[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_GetPlaysetSize_SizeX;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlaysetSize_SizeY;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlaysetSize_SizeZ;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaysetItemDefinition*            CallFunc_GetPlayset_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue;         // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_Origin;                // 0x64(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_BoxExtent;             // 0x70(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetComponentBounds_SphereRadius;          // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Divide_VectorVector_ReturnValue;          // 0x8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25F (0x25F - 0x0)
// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.HandleGridSnapUpdates
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_HandleGridSnapUpdates_Params
{
public:
	struct FVector                               NewLocation;                                       // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AdjustedPosition;                                  // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              PlaysetRotation;                                   // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_496F[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_1;                          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_1;                          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_1;                          // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4970[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Abs_ReturnValue;                          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4971[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Abs_ReturnValue_1;                        // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4972[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue_1;                      // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue_2;                      // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_2;          // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetPlaysetFromController_bSuccess;        // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4973[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_AdjustToFinalLocation_ReturnValue;        // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4974[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_1;            // 0xB8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0xC4(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult_1;     // 0x14C(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x1D4(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_NotEqual_RotatorRotator_ReturnValue;      // 0x25C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x25D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x25E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.UserConstructionScript
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_UserConstructionScript_Params
{
public:
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ReceiveBeginPlay
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_ReceiveBeginPlay_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ReceiveActorBeginOverlap
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_ReceiveActorBeginOverlap_Params
{
public:
	class AActor*                                OtherActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.SetTrajectorySpline
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_SetTrajectorySpline_Params
{
public:
	TArray<struct FVector>                       SplinePoints;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                       SplineTangents;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x1C8 (0x1C8 - 0x0)
// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapBoxToGrid
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapBoxToGrid_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4975[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                K2Node_Event_OtherActor;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       K2Node_Event_SplinePoints;                         // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                       K2Node_Event_SplineTangents;                       // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	struct FVector                               CallFunc_Array_Get_Item;                           // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Array_Get_Item_1;                         // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue_1;                     // 0x64(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Array_Get_Item_2;                         // 0x70(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Array_Get_Item_3;                         // 0x7C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4976[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Array_LastIndex_ReturnValue_1;            // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0xB8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x140(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x158(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x164(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4977[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4978[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                  CallFunc_Array_Get_Item_4;                         // 0x188(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x190(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue; // 0x19C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4979[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_GetArriveTangentAtSplinePoint_ReturnValue; // 0x1B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAtSplinePoint_ReturnValue_1;   // 0x1BC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
