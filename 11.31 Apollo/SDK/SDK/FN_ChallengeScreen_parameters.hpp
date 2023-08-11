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
// Function ChallengeScreen.ChallengeScreen_C.HandleReplayCinematic
struct UChallengeScreen_C_HandleReplayCinematic_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function ChallengeScreen.ChallengeScreen_C.PlayHolidayCinematic
struct UChallengeScreen_C_PlayHolidayCinematic_Params
{
public:
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue_1;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActivatableMovieWidget_Monolithic_C*  CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadStreamingVideo_NoAutoPlay;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_63E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStreamMediaSource*                CallFunc_LoadStreamingVideo_MediaSource;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ChallengeScreen.ChallengeScreen_C.BP_OnActivated
struct UChallengeScreen_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ChallengeScreen.ChallengeScreen_C.BP_OnDeactivated
struct UChallengeScreen_C_BP_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ChallengeScreen.ChallengeScreen_C.OnInitialized
struct UChallengeScreen_C_OnInitialized_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ChallengeScreen.ChallengeScreen_C.Play Party Assist Audio
struct UChallengeScreen_C_Play_Party_Assist_Audio_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function ChallengeScreen.ChallengeScreen_C.ExecuteUbergraph_ChallengeScreen
struct UChallengeScreen_C_ExecuteUbergraph_ChallengeScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_63E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPartyAssistedChallengeSet_ReturnValue;  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_63E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_63E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
