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

// 0xA70 (0xA70 - 0x0)
// Function StormCameraModifier.StormCameraModifier_C.BlueprintModifyPostProcess
struct UStormCameraModifier_C_BlueprintModifyPostProcess_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostProcessBlendWeight;                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_566F[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x10(0x530)(Parm, OutParm)
	struct FPostProcessSettings                  K2Node_MakeStruct_PostProcessSettings;             // 0x540(0x530)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
