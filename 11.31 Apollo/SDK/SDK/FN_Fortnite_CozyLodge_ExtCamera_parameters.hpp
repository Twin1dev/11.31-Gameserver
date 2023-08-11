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
// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.OnActivated
struct AFortnite_CozyLodge_ExtCamera_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.OnDeactivated
struct AFortnite_CozyLodge_ExtCamera_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.Reset Location
struct AFortnite_CozyLodge_ExtCamera_C_Reset_Location_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.ManualActivate
struct AFortnite_CozyLodge_ExtCamera_C_ManualActivate_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.K2_OnBecomeViewTarget
struct AFortnite_CozyLodge_ExtCamera_C_K2_OnBecomeViewTarget_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.K2_OnEndViewTarget
struct AFortnite_CozyLodge_ExtCamera_C_K2_OnEndViewTarget_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.ExecuteUbergraph_Fortnite_CozyLodge_ExtCamera
struct AFortnite_CozyLodge_ExtCamera_C_ExecuteUbergraph_Fortnite_CozyLodge_ExtCamera_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     K2Node_Event_PC;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortTimeOfDayManager*                 CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x28(0x10)(ZeroConstructor, ReferenceParm)
	class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C* CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C*> CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x48(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C* CallFunc_Array_Get_Item_1;                         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66EC[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x74(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue;         // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     K2Node_Event_PC_1;                                 // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
