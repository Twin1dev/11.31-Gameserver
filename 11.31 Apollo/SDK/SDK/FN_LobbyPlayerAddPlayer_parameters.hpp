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
// Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.BP_OnHovered
struct ULobbyPlayerAddPlayer_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.BP_OnUnhovered
struct ULobbyPlayerAddPlayer_C_BP_OnUnhovered_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.ExecuteUbergraph_LobbyPlayerAddPlayer
struct ULobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
