#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0xC0 - 0x0)
// Function Wumba_ItemCostComponent_Horizontal.Wumba_ItemCostComponent_Horizontal_C.GetCost
struct UWumba_ItemCostComponent_Horizontal_C_GetCost_Params
{
public:
	TMap<enum class EFortResourceType, int32>    Cost;                                              // 0x0(0x50)(Parm, OutParm, ZeroConstructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B74[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Athena_Wumba_C*                     K2Node_DynamicCast_AsB_Athena_Wumba;               // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B75[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EFortResourceType, int32>    K2Node_MakeMap_Map;                                // 0x70(0x50)(ZeroConstructor)
};

}
}


