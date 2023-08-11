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

// 0xA (0xA - 0x0)
// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.IsPropertyOverridden
struct UGAT_Creative_TriggeredAbility_C_IsPropertyOverridden_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bResult;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.K2_ActivateAbilityFromEvent
struct UGAT_Creative_TriggeredAbility_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.SetupAbilityFailsafeTimer
struct UGAT_Creative_TriggeredAbility_C_SetupAbilityFailsafeTimer_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.AbilityTimeout
struct UGAT_Creative_TriggeredAbility_C_AbilityTimeout_Params
{
public:
};

// 0x118 (0x118 - 0x0)
// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility
struct UGAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_428C[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x48(0xB0)(ConstParm)
	TArray<class FName>                          CallFunc_ApplySourcePropertyOverrides_OverriddenPropertyNames; // 0xF8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_ApplySourcePropertyOverrides_ReturnValue; // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_428D[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_CustomEvent_Duration;                       // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x110(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
