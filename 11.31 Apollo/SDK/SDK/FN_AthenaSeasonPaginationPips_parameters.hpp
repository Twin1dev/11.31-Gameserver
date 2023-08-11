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
// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.Construct
struct UAthenaSeasonPaginationPips_C_Construct_Params
{
public:
};

// 0x3C (0x3C - 0x0)
// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.Tick
struct UAthenaSeasonPaginationPips_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.Select
struct UAthenaSeasonPaginationPips_C_Select_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.Deselect
struct UAthenaSeasonPaginationPips_C_Deselect_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.ExecuteUbergraph_AthenaSeasonPaginationPips
struct UAthenaSeasonPaginationPips_C_ExecuteUbergraph_AthenaSeasonPaginationPips_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
