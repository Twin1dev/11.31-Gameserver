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

// 0x8 (0x8 - 0x0)
// Function Creative_Listener_PlayerEmote_Interface.Creative_Listener_PlayerEmote_Interface_C.OnPlayerEmoteEnded
struct ICreative_Listener_PlayerEmote_Interface_C_OnPlayerEmoteEnded_Params
{
public:
	class AFortPawn*                             PlayerEmoting;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Creative_Listener_PlayerEmote_Interface.Creative_Listener_PlayerEmote_Interface_C.OnPlayerEmoteStarted
struct ICreative_Listener_PlayerEmote_Interface_C_OnPlayerEmoteStarted_Params
{
public:
	class AFortPawn*                             PlayerEmoting;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
