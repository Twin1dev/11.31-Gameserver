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
// Function GAT_Creative_ActiveAbility.GAT_Creative_ActiveAbility_C.IsPropertyOverridden
struct UGAT_Creative_ActiveAbility_C_IsPropertyOverridden_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bResult;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GAT_Creative_ActiveAbility.GAT_Creative_ActiveAbility_C.K2_ActivateAbility
struct UGAT_Creative_ActiveAbility_C_K2_ActivateAbility_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function GAT_Creative_ActiveAbility.GAT_Creative_ActiveAbility_C.SetupAbilityFailsafeTimer
struct UGAT_Creative_ActiveAbility_C_SetupAbilityFailsafeTimer_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GAT_Creative_ActiveAbility.GAT_Creative_ActiveAbility_C.AbilityTimeout
struct UGAT_Creative_ActiveAbility_C_AbilityTimeout_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function GAT_Creative_ActiveAbility.GAT_Creative_ActiveAbility_C.ExecuteUbergraph_GAT_Creative_ActiveAbility
struct UGAT_Creative_ActiveAbility_C_ExecuteUbergraph_GAT_Creative_ActiveAbility_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_ApplySourcePropertyOverrides_OverriddenPropertyNames; // 0x48(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_ApplySourcePropertyOverrides_ReturnValue; // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_CustomEvent_Duration;                       // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x60(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
