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

// 0x8 (0x8 - 0x0)
// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.SetupAbility
struct UGA_Constructor_HammerHitsHeal_C_SetupAbility_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF2 (0xF2 - 0x0)
// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ShouldAbilityRespondToEvent
struct UGA_Constructor_HammerHitsHeal_C_K2_ShouldAbilityRespondToEvent_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                    Payload;                                           // 0x40(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShouldHammerHitsHealRespondToEvent_ReturnValue; // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ActivateAbilityFromEvent
struct UGA_Constructor_HammerHitsHeal_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.ExecuteUbergraph_GA_Constructor_HammerHitsHeal
struct UGA_Constructor_HammerHitsHeal_C_ExecuteUbergraph_GA_Constructor_HammerHitsHeal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4ECC[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xB0)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
