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

// 0x21 (0x21 - 0x0)
// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SaveOutRod
struct UGA_Athena_FloppingRabbit_Passive_C_SaveOutRod_Params
{
public:
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AD0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AB_FloppingRabbit_Weap_Athena_C*       K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SetBobberHidden
struct UGA_Athena_FloppingRabbit_Passive_C_SetBobberHidden_Params
{
public:
	bool                                         HideBobber;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortWeapon*                           CurrentWeapon;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_FloppingRabbit_Weap_Athena_C*       CastedToRabbitWeapon;                              // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AB_FloppingRabbit_Weap_Athena_C*       K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_OnEndAbility
struct UGA_Athena_FloppingRabbit_Passive_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_ActivateAbilityFromEvent
struct UGA_Athena_FloppingRabbit_Passive_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.Seat Changed
struct UGA_Athena_FloppingRabbit_Passive_C_Seat_Changed_Params
{
public:
	int32                                        SeatIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.EndFishing
struct UGA_Athena_FloppingRabbit_Passive_C_EndFishing_Params
{
public:
};

// 0x146 (0x146 - 0x0)
// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive
struct UGA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_5AD3[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortWeapon*                           CallFunc_SetBobberHidden_CurrentWeapon;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_FloppingRabbit_Weap_Athena_C*       CallFunc_SetBobberHidden_CastedToRabbitWeapon;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           CallFunc_SetBobberHidden_CurrentWeapon_1;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_FloppingRabbit_Weap_Athena_C*       CallFunc_SetBobberHidden_CastedToRabbitWeapon_1;   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AD4[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x3C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1; // 0x44(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x50(0xB0)(ConstParm)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AD6[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_SeatIndex;                      // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AD8[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_PlayerController_C*            K2Node_DynamicCast_AsAthena_Player_Controller;     // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AD9[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2; // 0x13C(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
