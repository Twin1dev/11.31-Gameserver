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

// 0x1 (0x1 - 0x0)
// Function ShowdownPosterViolator.ShowdownPosterViolator_C.OnViolatorStateRefreshed
struct UShowdownPosterViolator_C_OnViolatorStateRefreshed_Params
{
public:
	enum class EEventTimeState                   NewTimeState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ShowdownPosterViolator.ShowdownPosterViolator_C.ExecuteUbergraph_ShowdownPosterViolator
struct UShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventTimeState                   K2Node_Event_NewTimeState;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventTimeState                   Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DE2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonBorder*                         K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


