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
// Function GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C.Added_ABAD1DEE46A337533ED461815C2B7BED
struct UGA_Athena_RemoveIceFeetOnWater_C_Added_ABAD1DEE46A337533ED461815C2B7BED_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C.K2_ActivateAbility
struct UGA_Athena_RemoveIceFeetOnWater_C_K2_ActivateAbility_Params
{
public:
};

// 0x21 (0x21 - 0x0)
// Function GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C.ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater
struct UGA_Athena_RemoveIceFeetOnWater_C_ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_17AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
