#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.CreateSkeletalAudioComp
struct AB_Athena_Galileo_Lobster_Kayak_C_CreateSkeletalAudioComp_Params
{
public:
	class UFortSkeletalAudioComponent*           Component;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AA7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable;                              // 0x10(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UFortSkeletalAudioComponent*           CallFunc_AddComponent_ReturnValue;                 // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.CurrentPoiseChanged
struct AB_Athena_Galileo_Lobster_Kayak_C_CurrentPoiseChanged_Params
{
public:
	float                                        CurrentPoise;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.DoBulletBlockEffect
struct AB_Athena_Galileo_Lobster_Kayak_C_DoBulletBlockEffect_Params
{
public:
	struct FVector                               ImpactLocation;                                    // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.ExecuteUbergraph_B_Athena_Galileo_Lobster_Kayak
struct AB_Athena_Galileo_Lobster_Kayak_C_ExecuteUbergraph_B_Athena_Galileo_Lobster_Kayak_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_1;                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_CurrentPoise;                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_ImpactLocation;                       // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


