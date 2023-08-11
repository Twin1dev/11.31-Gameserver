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
// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnClientAnnouncementStop
struct AAnnounce_OnboardingSatelliteCine_C_OnClientAnnouncementStop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnPlayerSkippedCutscene
struct AAnnounce_OnboardingSatelliteCine_C_OnPlayerSkippedCutscene_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.HandleClientEvent_CinematicFinishedPlaying
struct AAnnounce_OnboardingSatelliteCine_C_HandleClientEvent_CinematicFinishedPlaying_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.HandleAllowSkip
struct AAnnounce_OnboardingSatelliteCine_C_HandleAllowSkip_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnEnteredCinematicState
struct AAnnounce_OnboardingSatelliteCine_C_OnEnteredCinematicState_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.ExecuteUbergraph_Announce_OnboardingSatelliteCine
struct AAnnounce_OnboardingSatelliteCine_C_ExecuteUbergraph_Announce_OnboardingSatelliteCine_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               K2Node_HandleClientEvent_EventSource;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent;              // 0x18(0x20)(ConstParm, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_43FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x50(0x8)(NoDestructor, HasGetValueTypeHash)
	class UFortMediaInfo*                        CallFunc_SpawnObject_ReturnValue;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
