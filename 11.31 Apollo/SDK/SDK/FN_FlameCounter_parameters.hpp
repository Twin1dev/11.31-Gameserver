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
// Function FlameCounter.FlameCounter_C.PlayIncreaseVote
struct UFlameCounter_C_PlayIncreaseVote_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FlameCounter.FlameCounter_C.PlayIdle
struct UFlameCounter_C_PlayIdle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FlameCounter.FlameCounter_C.PlayFadeOut
struct UFlameCounter_C_PlayFadeOut_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FlameCounter.FlameCounter_C.PlayFadeIn
struct UFlameCounter_C_PlayFadeIn_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function FlameCounter.FlameCounter_C.ExecuteUbergraph_FlameCounter
struct UFlameCounter_C_ExecuteUbergraph_FlameCounter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_64CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
