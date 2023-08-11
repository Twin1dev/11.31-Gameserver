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
// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.OnActivated
struct AFortnite_CozyLodge_Camera_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.OnDeactivated
struct AFortnite_CozyLodge_Camera_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.Reset Location
struct AFortnite_CozyLodge_Camera_C_Reset_Location_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.ManualActivate
struct AFortnite_CozyLodge_Camera_C_ManualActivate_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.K2_OnBecomeViewTarget
struct AFortnite_CozyLodge_Camera_C_K2_OnBecomeViewTarget_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.K2_OnEndViewTarget
struct AFortnite_CozyLodge_Camera_C_K2_OnEndViewTarget_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.ExecuteUbergraph_Fortnite_CozyLodge_Camera
struct AFortnite_CozyLodge_Camera_C_ExecuteUbergraph_Fortnite_CozyLodge_Camera_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_180B[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     K2Node_Event_PC;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortTimeOfDayManager*                 CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Fortnite_CozyLodge_LightSwitcher_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x28(0x10)(ZeroConstructor, ReferenceParm)
	class ABP_Fortnite_CozyLodge_LightSwitcher_C* CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_180C[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_180D[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class ABP_Fortnite_CozyLodge_LightSwitcher_C*> CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x50(0x10)(ZeroConstructor, ReferenceParm)
	class ABP_Fortnite_CozyLodge_LightSwitcher_C* CallFunc_Array_Get_Item_1;                         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_180E[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x74(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue;         // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_180F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1810[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     K2Node_Event_PC_1;                                 // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1811[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
