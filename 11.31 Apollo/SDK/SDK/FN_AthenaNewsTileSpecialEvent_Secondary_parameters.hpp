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
// Function AthenaNewsTileSpecialEvent_Secondary.AthenaNewsTileSpecialEvent_Secondary_C.PlayIntroAnim
struct UAthenaNewsTileSpecialEvent_Secondary_C_PlayIntroAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaNewsTileSpecialEvent_Secondary.AthenaNewsTileSpecialEvent_Secondary_C.SetDefaultImage
struct UAthenaNewsTileSpecialEvent_Secondary_C_SetDefaultImage_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AthenaNewsTileSpecialEvent_Secondary.AthenaNewsTileSpecialEvent_Secondary_C.ExecuteUbergraph_AthenaNewsTileSpecialEvent_Secondary
struct UAthenaNewsTileSpecialEvent_Secondary_C_ExecuteUbergraph_AthenaNewsTileSpecialEvent_Secondary_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
