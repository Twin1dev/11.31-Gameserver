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
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HasMatcmakingInteraction
struct ABP_FrontendBackPlate_C_HasMatcmakingInteraction_Params
{
public:
	bool                                         HasInteraction;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetFloatingShapeVisibility
struct ABP_FrontendBackPlate_C_SetFloatingShapeVisibility_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53A6[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetSpecialEventUIColorScheme
struct ABP_FrontendBackPlate_C_SetSpecialEventUIColorScheme_Params
{
public:
	bool                                         SetUIPanelColors;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLinearColor                          Backing;                                           // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Backing_Hover;                                     // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Backing_Selection;                                 // 0x24(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SetFontColors;                                     // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLinearColor                          Primary;                                           // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Secondary;                                         // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Tertiary;                                          // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Quaternary;                                        // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HasUIColorOverride
struct ABP_FrontendBackPlate_C_HasUIColorOverride_Params
{
public:
	bool                                         HasUIColorOverride;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ResetUIColorScheme
struct ABP_FrontendBackPlate_C_ResetUIColorScheme_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.GetUIColorScheme
struct ABP_FrontendBackPlate_C_GetUIColorScheme_Params
{
public:
	struct FLinearColor                          ColorScheme;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasOverride;                                      // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.RequestUIColorScheme
struct ABP_FrontendBackPlate_C_RequestUIColorScheme_Params
{
public:
	struct FLinearColor                          MainUIColor;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UpdateRenderTargetRealtime
struct ABP_FrontendBackPlate_C_UpdateRenderTargetRealtime_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.EnableRealtimeUpdate
struct ABP_FrontendBackPlate_C_EnableRealtimeUpdate_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTexture*                              K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UpdateRenderTarget
struct ABP_FrontendBackPlate_C_UpdateRenderTarget_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetBackgroundTexture
struct ABP_FrontendBackPlate_C_SetBackgroundTexture_Params
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    PreBlurMaterial;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53AB[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTexture*                              K2Node_Select_Default_1;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    K2Node_Select_Default_2;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UserConstructionScript
struct ABP_FrontendBackPlate_C_UserConstructionScript_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_GetAllActorsWithTag_OutActors;            // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UISpecailEventTransition__FinishedFunc
struct ABP_FrontendBackPlate_C_UISpecailEventTransition__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UISpecailEventTransition__UpdateFunc
struct ABP_FrontendBackPlate_C_UISpecailEventTransition__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HyperSpace__FinishedFunc
struct ABP_FrontendBackPlate_C_HyperSpace__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HyperSpace__UpdateFunc
struct ABP_FrontendBackPlate_C_HyperSpace__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.StopHyperSpeed__FinishedFunc
struct ABP_FrontendBackPlate_C_StopHyperSpeed__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.StopHyperSpeed__UpdateFunc
struct ABP_FrontendBackPlate_C_StopHyperSpeed__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UpdateSettings
struct ABP_FrontendBackPlate_C_UpdateSettings_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetEnableBlackMondayFX
struct ABP_FrontendBackPlate_C_SetEnableBlackMondayFX_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.PlayUISpecialEventTransition
struct ABP_FrontendBackPlate_C_PlayUISpecialEventTransition_Params
{
public:
	bool                                         bTransitionToSpecialEvent;                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ReceiveTick
struct ABP_FrontendBackPlate_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.PlayEnterMatchmakingAnim
struct ABP_FrontendBackPlate_C_PlayEnterMatchmakingAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ResetMatchmakingAnim
struct ABP_FrontendBackPlate_C_ResetMatchmakingAnim_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetAllowMatchmakingInteraction
struct ABP_FrontendBackPlate_C_SetAllowMatchmakingInteraction_Params
{
public:
	bool                                         AllowInteraction;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.TestBlur
struct ABP_FrontendBackPlate_C_TestBlur_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HandleSpecialEventAudioOnMatchmakingEnd
struct ABP_FrontendBackPlate_C_HandleSpecialEventAudioOnMatchmakingEnd_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ReceiveBeginPlay
struct ABP_FrontendBackPlate_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.MatchmakingEnded
struct ABP_FrontendBackPlate_C_MatchmakingEnded_Params
{
public:
	bool                                         bWasSuccess;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.EnteringMatchmaking
struct ABP_FrontendBackPlate_C_EnteringMatchmaking_Params
{
public:
};

// 0x69 (0x69 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ExecuteUbergraph_BP_FrontendBackPlate
struct ABP_FrontendBackPlate_C_ExecuteUbergraph_BP_FrontendBackPlate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53AE[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue_1;     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsEnabled;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bTransitionToSpecialEvent;      // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B1[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_AllowInteraction;               // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Success;                        // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAudioComponent*                       CallFunc_CreateSound2D_ReturnValue;                // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasSuccess;                          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.RequestLobbyColorChanges__DelegateSignature
struct ABP_FrontendBackPlate_C_RequestLobbyColorChanges__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color_A;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDefaultScheme;                                  // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HidePlayer__DelegateSignature
struct ABP_FrontendBackPlate_C_HidePlayer__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.OnRockyRidgeFinished__DelegateSignature
struct ABP_FrontendBackPlate_C_OnRockyRidgeFinished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.BeginRockyRidge__DelegateSignature
struct ABP_FrontendBackPlate_C_BeginRockyRidge__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
