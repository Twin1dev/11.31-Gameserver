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
// Function BP_Discoverable_Duck.BP_Discoverable_Duck_C.Poof
struct ABP_Discoverable_Duck_C_Poof_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Discoverable_Duck.BP_Discoverable_Duck_C.Commit_OnSpecialInteraction
struct ABP_Discoverable_Duck_C_Commit_OnSpecialInteraction_Params
{
public:
};

// 0x2C (0x2C - 0x0)
// Function BP_Discoverable_Duck.BP_Discoverable_Duck_C.ExecuteUbergraph_BP_Discoverable_Duck
struct ABP_Discoverable_Duck_C_ExecuteUbergraph_BP_Discoverable_Duck_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_66C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
