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
// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature
struct AFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature_Params
{
public:
	class UTexture*                              BackgroundImage;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature
struct AFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature
struct AFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature
struct AFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature_Params
{
public:
	class FString                                PresetEnvironmentName;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Frontend_BG_Main.Frontend_BG_Main_C.ReceiveBeginPlay
struct AFrontend_BG_Main_C_ReceiveBeginPlay_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function Frontend_BG_Main.Frontend_BG_Main_C.ExecuteUbergraph_Frontend_BG_Main
struct AFrontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F81[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTexture*                              K2Node_ActorBoundEvent_BackgroundImage;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ActorBoundEvent_PresetEnvironmentName;      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
