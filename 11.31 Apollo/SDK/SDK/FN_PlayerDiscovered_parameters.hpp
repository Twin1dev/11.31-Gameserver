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
// Function PlayerDiscovered.PlayerDiscovered_C.EndOfShow
struct UPlayerDiscovered_C_EndOfShow_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function PlayerDiscovered.PlayerDiscovered_C.OnNewDiscovery
struct UPlayerDiscovered_C_OnNewDiscovery_Params
{
public:
	class FText                                  LocalizedLocationName;                             // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bIsNamedLocation;                                  // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerDiscovered.PlayerDiscovered_C.Construct
struct UPlayerDiscovered_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerDiscovered.PlayerDiscovered_C.Brief Show Finished
struct UPlayerDiscovered_C_Brief_Show_Finished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerDiscovered.PlayerDiscovered_C.OnStompFailed
struct UPlayerDiscovered_C_OnStompFailed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerDiscovered.PlayerDiscovered_C.OnStompedByOtherWidget
struct UPlayerDiscovered_C_OnStompedByOtherWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerDiscovered.PlayerDiscovered_C.Play Brief Show Sound
struct UPlayerDiscovered_C_Play_Brief_Show_Sound_Params
{
public:
};

// 0x90 (0x90 - 0x0)
// Function PlayerDiscovered.PlayerDiscovered_C.ExecuteUbergraph_PlayerDiscovered
struct UPlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_566B[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_Event_LocalizedLocationName;                // 0x8(0x18)(ConstParm)
	bool                                         K2Node_Event_bIsNamedLocation;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_566C[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_566D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x48(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable_1;                               // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_566E[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_BreakVector2D_X;                          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x6C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                      K2Node_MakeStruct_WidgetTransform;                 // 0x74(0x1C)(NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
