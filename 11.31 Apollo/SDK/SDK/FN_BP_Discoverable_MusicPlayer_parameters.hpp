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

// 0x11 (0x11 - 0x0)
// Function BP_Discoverable_MusicPlayer.BP_Discoverable_MusicPlayer_C.NotifiedByDiscoverable
struct ABP_Discoverable_MusicPlayer_C_NotifiedByDiscoverable_Params
{
public:
	struct FGameplayTag                          ActionTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CameraTag;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsStart;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x16 (0x16 - 0x0)
// Function BP_Discoverable_MusicPlayer.BP_Discoverable_MusicPlayer_C.ExecuteUbergraph_BP_Discoverable_MusicPlayer
struct ABP_Discoverable_MusicPlayer_C_ExecuteUbergraph_BP_Discoverable_MusicPlayer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_ActionTag;                            // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_CameraTag;                            // 0xC(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsStart;                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
