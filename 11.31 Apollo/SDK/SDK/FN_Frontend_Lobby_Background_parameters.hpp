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

// 0x32 (0x32 - 0x0)
// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.SetShowPedestalSparkles
struct AFrontend_Lobby_Background_C_SetShowPedestalSparkles_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATeamMemberPedestal_C*>         CallFunc_GetAllActorsOfClass_OutActors;            // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class ATeamMemberPedestal_C*                 CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.UpdateFade
struct AFrontend_Lobby_Background_C_UpdateFade_Params
{
public:
	float                                        FadeValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeFloorToBlack;                                  // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InFadeGrid;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_1;                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeIn__FinishedFunc
struct AFrontend_Lobby_Background_C_FadeIn__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeIn__UpdateFunc
struct AFrontend_Lobby_Background_C_FadeIn__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeOut__FinishedFunc
struct AFrontend_Lobby_Background_C_FadeOut__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeOut__UpdateFunc
struct AFrontend_Lobby_Background_C_FadeOut__UpdateFunc_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature
struct AFrontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature_Params
{
public:
	class FString                                PresetEnvironmentName;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature
struct AFrontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature_Params
{
public:
	class UTexture*                              BackgroundImage;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.ReceiveBeginPlay
struct AFrontend_Lobby_Background_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.TestDynColor
struct AFrontend_Lobby_Background_C_TestDynColor_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.ExecuteUbergraph_Frontend_Lobby_Background
struct AFrontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTexture*                              K2Node_ActorBoundEvent_BackgroundImage;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ActorBoundEvent_PresetEnvironmentName;      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_GetScalarParameterValue_ReturnValue;      // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScalarParameterValue_ReturnValue_1;    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66B4[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
