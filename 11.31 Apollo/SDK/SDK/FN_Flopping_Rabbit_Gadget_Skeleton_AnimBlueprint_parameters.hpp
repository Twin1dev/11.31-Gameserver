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

// 0x20 (0x20 - 0x0)
// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.AnimGraph
struct UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
struct UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint
struct UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_FloppingRabbit_Weap_Athena_C*       K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
