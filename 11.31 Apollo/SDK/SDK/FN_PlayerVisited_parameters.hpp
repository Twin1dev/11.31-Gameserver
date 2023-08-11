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
// Function PlayerVisited.PlayerVisited_C.EndOfShow
struct UPlayerVisited_C_EndOfShow_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerVisited.PlayerVisited_C.Construct
struct UPlayerVisited_C_Construct_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function PlayerVisited.PlayerVisited_C.OnNewVisited
struct UPlayerVisited_C_OnNewVisited_Params
{
public:
	class FText                                  LocalizedLocationName;                             // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bIsNamedLocation;                                  // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerVisited.PlayerVisited_C.Brief Show Finished
struct UPlayerVisited_C_Brief_Show_Finished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerVisited.PlayerVisited_C.OnStompFailed
struct UPlayerVisited_C_OnStompFailed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerVisited.PlayerVisited_C.OnStompedByOtherWidget
struct UPlayerVisited_C_OnStompedByOtherWidget_Params
{
public:
};

// 0x51 (0x51 - 0x0)
// Function PlayerVisited.PlayerVisited_C.ExecuteUbergraph_PlayerVisited
struct UPlayerVisited_C_ExecuteUbergraph_PlayerVisited_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5668[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_Event_LocalizedLocationName;                // 0x10(0x18)(ConstParm)
	bool                                         K2Node_Event_bIsNamedLocation;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5669[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_566A[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        K2Node_Select_Default;                             // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
