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

// 0x0 (0x0 - 0x0)
// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.Reveal__FinishedFunc
struct ABP_Discoverable_Banana_C_Reveal__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.Reveal__UpdateFunc
struct ABP_Discoverable_Banana_C_Reveal__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.Reveal__NewTrack_2__EventFunc
struct ABP_Discoverable_Banana_C_Reveal__NewTrack_2__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.Hide__FinishedFunc
struct ABP_Discoverable_Banana_C_Hide__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.Hide__UpdateFunc
struct ABP_Discoverable_Banana_C_Hide__UpdateFunc_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.HandleObjectSpecialInteraction
struct ABP_Discoverable_Banana_C_HandleObjectSpecialInteraction_Params
{
public:
	struct FGameplayTag                          ActionTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CameraTag;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.Commit_OnSpecialInteraction
struct ABP_Discoverable_Banana_C_Commit_OnSpecialInteraction_Params
{
public:
};

// 0x16C (0x16C - 0x0)
// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.ExecuteUbergraph_BP_Discoverable_Banana
struct ABP_Discoverable_Banana_C_ExecuteUbergraph_BP_Discoverable_Banana_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4877[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTag                          K2Node_Event_ActionTag;                            // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_CameraTag;                            // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4878[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_BreakVector_X;                            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue_1;                      // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x40(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0xC8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x154(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x160(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
