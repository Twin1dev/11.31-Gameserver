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

// 0x8 (0x8 - 0x0)
// Function DA_Butterfly.DA_Butterfly_C.BPPressSecondaryFire
struct ADA_Butterfly_C_BPPressSecondaryFire_Params
{
public:
	class AFortDecoHelper*                       FortDecoHelper;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function DA_Butterfly.DA_Butterfly_C.BPPressTrigger
struct ADA_Butterfly_C_BPPressTrigger_Params
{
public:
	class AFortDecoHelper*                       FortDecoHelper;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function DA_Butterfly.DA_Butterfly_C.BPOnUnEquip
struct ADA_Butterfly_C_BPOnUnEquip_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DA_Butterfly.DA_Butterfly_C.BPReleaseSecondaryFire
struct ADA_Butterfly_C_BPReleaseSecondaryFire_Params
{
public:
	class AFortDecoHelper*                       FortDecoHelper;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function DA_Butterfly.DA_Butterfly_C.ExecuteUbergraph_DA_Butterfly
struct ADA_Butterfly_C_ExecuteUbergraph_DA_Butterfly_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortDecoHelper*                       K2Node_Event_FortDecoHelper_2;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x18(0xB0)()
	class AFortDecoHelper*                       K2Node_Event_FortDecoHelper_1;                     // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortDecoHelper*                       K2Node_Event_FortDecoHelper;                       // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
