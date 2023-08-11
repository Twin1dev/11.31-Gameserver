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
// Function Athena_Mustache_LockOnWidget.Athena_Mustache_LockOnWidget_C.Construct
struct UAthena_Mustache_LockOnWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_Mustache_LockOnWidget.Athena_Mustache_LockOnWidget_C.MoveUI
struct UAthena_Mustache_LockOnWidget_C_MoveUI_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_Mustache_LockOnWidget.Athena_Mustache_LockOnWidget_C.Destruct
struct UAthena_Mustache_LockOnWidget_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_Mustache_LockOnWidget.Athena_Mustache_LockOnWidget_C.WidgetAnimationEvt_Scale_K2Node_WidgetAnimationEvent_0
struct UAthena_Mustache_LockOnWidget_C_WidgetAnimationEvt_Scale_K2Node_WidgetAnimationEvent_0_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function Athena_Mustache_LockOnWidget.Athena_Mustache_LockOnWidget_C.ExecuteUbergraph_Athena_Mustache_LockOnWidget
struct UAthena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_527D[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_527E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_527F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector2D                             CallFunc_GetViewportSize_ReturnValue;              // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BroadcastPlayerImpactAtLocation_Loudness; // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BroadcastPlayerImpactAtLocation_Duration; // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue; // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5280[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
