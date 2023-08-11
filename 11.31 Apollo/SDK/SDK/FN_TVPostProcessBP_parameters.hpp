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

// 0x1 (0x1 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.IsEnabledForCurrentSubgame
struct ATVPostProcessBP_C_IsEnabledForCurrentSubgame_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript
struct ATVPostProcessBP_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects
struct ATVPostProcessBP_C_Camera_DisableEffects_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch
struct ATVPostProcessBP_C_FrontEndCameraSwitch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteCameraSwitch
struct ATVPostProcessBP_C_ExecuteCameraSwitch_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP
struct ATVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEnabledForCurrentSubgame_bEnabled;      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
