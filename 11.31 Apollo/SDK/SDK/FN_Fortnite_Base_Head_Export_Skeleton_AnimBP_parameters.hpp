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

// 0x10 (0x10 - 0x0)
// Function Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C.AnimGraph
struct UFortnite_Base_Head_Export_Skeleton_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C.BlueprintInitializeAnimation
struct UFortnite_Base_Head_Export_Skeleton_AnimBP_C_BlueprintInitializeAnimation_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C.ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP
struct UFortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPlaylistUsesCustomCharacterParts_ReturnValue; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F22[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USkeletalMeshComponent*                CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
