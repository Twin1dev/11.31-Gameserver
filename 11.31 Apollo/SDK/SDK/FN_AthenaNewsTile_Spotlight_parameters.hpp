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
// Function AthenaNewsTile_Spotlight.AthenaNewsTile_Spotlight_C.PlayIntroAnim
struct UAthenaNewsTile_Spotlight_C_PlayIntroAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaNewsTile_Spotlight.AthenaNewsTile_Spotlight_C.SetDefaultImage
struct UAthenaNewsTile_Spotlight_C_SetDefaultImage_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AthenaNewsTile_Spotlight.AthenaNewsTile_Spotlight_C.ExecuteUbergraph_AthenaNewsTile_Spotlight
struct UAthenaNewsTile_Spotlight_C_ExecuteUbergraph_AthenaNewsTile_Spotlight_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5EDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
