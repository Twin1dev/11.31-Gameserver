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
// Function BP_Discoverable_SaxHat.BP_Discoverable_SaxHat_C.ReceiveBeginPlay
struct ABP_Discoverable_SaxHat_C_ReceiveBeginPlay_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function BP_Discoverable_SaxHat.BP_Discoverable_SaxHat_C.NotifiedByDiscoverable
struct ABP_Discoverable_SaxHat_C_NotifiedByDiscoverable_Params
{
public:
	struct FGameplayTag                          ActionTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CameraTag;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsStart;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function BP_Discoverable_SaxHat.BP_Discoverable_SaxHat_C.ExecuteUbergraph_BP_Discoverable_SaxHat
struct ABP_Discoverable_SaxHat_C_ExecuteUbergraph_BP_Discoverable_SaxHat_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_ActionTag;                            // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_CameraTag;                            // 0xC(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsStart;                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66C6[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
