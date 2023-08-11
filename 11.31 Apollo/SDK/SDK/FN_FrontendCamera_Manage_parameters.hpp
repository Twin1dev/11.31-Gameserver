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
// Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnActivated
struct AFrontendCamera_Manage_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnDeactivated
struct AFrontendCamera_Manage_C_OnDeactivated_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function FrontendCamera_Manage.FrontendCamera_Manage_C.ExecuteUbergraph_FrontendCamera_Manage
struct AFrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortTimeOfDayManager*                 CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATVPostProcessBP_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	class ATVPostProcessBP_C*                    CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E12[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AVaultCharacterLightingBP_C*>   CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x38(0x10)(ZeroConstructor, ReferenceParm)
	class AVaultCharacterLightingBP_C*           CallFunc_Array_Get_Item_1;                         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AVaultCharacterLightingBP_C*>   CallFunc_GetAllActorsOfClass_OutActors_2;          // 0x50(0x10)(ZeroConstructor, ReferenceParm)
	class AVaultCharacterLightingBP_C*           CallFunc_Array_Get_Item_2;                         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
