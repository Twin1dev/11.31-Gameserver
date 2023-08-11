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
// Function CMS_ML_BattlePass_LeftImageWidget1.CMS_ML_BattlePass_LeftImageWidget1_C.Construct
struct UCMS_ML_BattlePass_LeftImageWidget1_C_Construct_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function CMS_ML_BattlePass_LeftImageWidget1.CMS_ML_BattlePass_LeftImageWidget1_C.ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1
struct UCMS_ML_BattlePass_LeftImageWidget1_C_ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaAccountContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCurrentChapterAndSeasonText_ReturnValue; // 0x10(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
