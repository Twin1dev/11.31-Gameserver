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
// Function CrackShot_Frontend_AnimBP.CrackShot_Frontend_AnimBP_C.AnimGraph
struct UCrackShot_Frontend_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function CrackShot_Frontend_AnimBP.CrackShot_Frontend_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_C6604ADE415A07BC5D79DD8A1A32DF58
struct UCrackShot_Frontend_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_C6604ADE415A07BC5D79DD8A1A32DF58_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CrackShot_Frontend_AnimBP.CrackShot_Frontend_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_93D1A9E646C8ECD8EE982F93947F0EC5
struct UCrackShot_Frontend_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_93D1A9E646C8ECD8EE982F93947F0EC5_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CrackShot_Frontend_AnimBP.CrackShot_Frontend_AnimBP_C.BlueprintUpdateAnimation
struct UCrackShot_Frontend_AnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function CrackShot_Frontend_AnimBP.CrackShot_Frontend_AnimBP_C.ExecuteUbergraph_CrackShot_Frontend_AnimBP
struct UCrackShot_Frontend_AnimBP_C_ExecuteUbergraph_CrackShot_Frontend_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1; // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F32[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_Event_DeltaTimeX;                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F33[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_GetViewTarget_ReturnValue;                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F34[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F35[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_GetCurveValue_ReturnValue;                // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
