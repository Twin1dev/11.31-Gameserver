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
// Function GA_Creative_OnPlayerEmote.GA_Creative_OnPlayerEmote_C.K2_ActivateAbility
struct UGA_Creative_OnPlayerEmote_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Creative_OnPlayerEmote.GA_Creative_OnPlayerEmote_C.K2_OnEndAbility
struct UGA_Creative_OnPlayerEmote_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function GA_Creative_OnPlayerEmote.GA_Creative_OnPlayerEmote_C.ExecuteUbergraph_GA_Creative_OnPlayerEmote
struct UGA_Creative_OnPlayerEmote_C_ExecuteUbergraph_GA_Creative_OnPlayerEmote_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayEffectContextHandle          CallFunc_GetGrantedByEffectContext_ReturnValue;    // 0x18(0x18)()
	class UObject*                               CallFunc_EffectContextGetSourceObject_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          CallFunc_GetGrantedByEffectContext_ReturnValue_1;  // 0x38(0x18)()
	TScriptInterface<class ICreative_Listener_PlayerEmote_Interface_C> K2Node_DynamicCast_AsCreative_Listener_Player_Emote_Interface; // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               CallFunc_EffectContextGetSourceObject_ReturnValue_1; // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICreative_Listener_PlayerEmote_Interface_C> K2Node_DynamicCast_AsCreative_Listener_Player_Emote_Interface_1; // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue_1;          // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
