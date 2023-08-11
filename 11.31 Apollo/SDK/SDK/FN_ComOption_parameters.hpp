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
// Function ComOption.ComOption_C.DisableButtons
struct UComOption_C_DisableButtons_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ComOption.ComOption_C.EnableButtons
struct UComOption_C_EnableButtons_Params
{
public:
};

// 0x59 (0x59 - 0x0)
// Function ComOption.ComOption_C.ExecuteUbergraph_ComOption
struct UComOption_C_ExecuteUbergraph_ComOption_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UComOptionDetails_C*                   K2Node_DynamicCast_AsCom_Option_Details;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UComOptionDetails_C*                   K2Node_DynamicCast_AsCom_Option_Details_1;         // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UComOptionVote_C*                      K2Node_DynamicCast_AsCom_Option_Vote;              // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFlameCounter_C*                       K2Node_DynamicCast_AsFlame_Counter;                // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UComOptionVote_C*                      K2Node_DynamicCast_AsCom_Option_Vote_1;            // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
