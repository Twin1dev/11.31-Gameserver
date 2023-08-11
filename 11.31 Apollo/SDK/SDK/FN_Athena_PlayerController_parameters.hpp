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

// 0x1C (0x1C - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.Is Creative Mode
struct AAthena_PlayerController_C_Is_Creative_Mode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCreativeModePlaylist_ReturnValue;       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCreativeLTMPlaylist_ReturnValue;        // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.SetupPermissionRecheckTimer
struct AAthena_PlayerController_C_SetupPermissionRecheckTimer_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x72 (0x72 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.LeftAllVolumes
struct AAthena_PlayerController_C_LeftAllVolumes_Params
{
public:
	bool                                         bLeftVolumes;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InTempVolume;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56AF[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AFortVolume*>                   ContainingVolumes;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortVolume*                           CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetPlayerPawn_ReturnValue;                // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortVolumeManager*                    CallFunc_GetVolumeManager_OutVolumeManager;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVolumeValidityResult             CallFunc_GetVolumeManager_OutIsValid;              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDead_ReturnValue;                       // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_WillVolumeDeleteAfterActorSpawn_ReturnValue; // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56B2[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AFortVolume*>                   CallFunc_GetVolumesForLocation_Volumes;            // 0x60(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_GetVolumesForLocation_ReturnValue;        // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
struct AAthena_PlayerController_C_UserConstructionScript_Params
{
public:
	class UAthenaMarkerComponent*                CallFunc_GetMarkerComponent_ReturnValue;           // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D
struct AAthena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.OnReady_B4409EAB4038578B1EBA9DB1586489B9
struct AAthena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9_Params
{
public:
	class AFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveEndPlay
struct AAthena_PlayerController_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.Start Victory Royale Music
struct AAthena_PlayerController_C_Start_Victory_Royale_Music_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.OnMusicPackLoaded
struct AAthena_PlayerController_C_OnMusicPackLoaded_Params
{
public:
	class UAthenaMusicPackItemDefinition*        NewMusicPack;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.HandlePermissions
struct AAthena_PlayerController_C_HandlePermissions_Params
{
public:
	class AFortVolume*                           Volume;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.GrantItem
struct AAthena_PlayerController_C_GrantItem_Params
{
public:
	TSoftObjectPtr<class UFortWorldItemDefinition> Item;                                              // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.RevokeItem
struct AAthena_PlayerController_C_RevokeItem_Params
{
public:
	TSoftObjectPtr<class UFortWorldItemDefinition> Item;                                              // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.PermissionsChanged
struct AAthena_PlayerController_C_PermissionsChanged_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.OnLocalInteraction
struct AAthena_PlayerController_C_OnLocalInteraction_Params
{
public:
	class AActor*                                ReceivingActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.RemoveItem
struct AAthena_PlayerController_C_RemoveItem_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.RevokeCreativeTool
struct AAthena_PlayerController_C_RevokeCreativeTool_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.ReactToPawnPossession
struct AAthena_PlayerController_C_ReactToPawnPossession_Params
{
public:
	class APawn*                                 PossessedPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
struct AAthena_PlayerController_C_PlayWinEffects_Params
{
public:
	class APawn*                                 FinisherPawn;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             FinishingWeapon;                                   // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDeathCause                       DeathCause;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAudioOnly;                                        // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
struct AAthena_PlayerController_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.ReplicateRotationScaleReset
struct AAthena_PlayerController_C_ReplicateRotationScaleReset_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.K2_OnLeaveVolume
struct AAthena_PlayerController_C_K2_OnLeaveVolume_Params
{
public:
	class AFortVolume*                           Volume;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.K2_OnEnterVolume
struct AAthena_PlayerController_C_K2_OnEnterVolume_Params
{
public:
	class AFortVolume*                           Volume;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.On Camera Underwater State Changed
struct AAthena_PlayerController_C_On_Camera_Underwater_State_Changed_Params
{
public:
	bool                                         bIsUnderWater;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        DepthUnderwater;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x443 (0x443 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
struct AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWaterSubsystem*                       CallFunc_GetWorldSubsystem_ReturnValue;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EAudioComponentPlayState          CallFunc_GetPlayState_ReturnValue;                 // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VictoryStingerTimeUntilFadeOut_ReturnValue; // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56B9[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue;       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  Temp_object_Variable;                              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortPlaylist*                         Temp_object_Variable_1;                            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue_1;                 // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             CallFunc_GetVictoryStinger_ReturnValue;            // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue_1;               // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 Temp_struct_Variable;                              // 0x98(0x20)()
	class UAthenaMusicPackItemDefinition*        K2Node_CustomEvent_NewMusicPack;                   // 0xB8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue_2;               // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_CustomEvent_GameState;                      // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                         K2Node_CustomEvent_Playlist;                       // 0xD8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_CustomEvent_PlaylistContextTags;            // 0xE0(0x20)(ConstParm)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_DynamicCast_AsSound_Base;                   // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetGameAccountId_ReturnValue;             // 0x120(0x28)(HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_1;               // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCreativeModePlaylist_ReturnValue;       // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena_1;     // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LeftAllVolumes_bLeftVolumes;              // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCreativeModePlaylist_ReturnValue_1;     // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56C1[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortVolume*                           K2Node_CustomEvent_Volume;                         // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item_1;                         // 0x180(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsReadOnly_ReturnValue;                   // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortWorldItemDefinition*              K2Node_DynamicCast_AsFort_World_Item_Definition;   // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56C4[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class UFortLevelSaveComponent*>       CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x1D0(0x10)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UFortLevelSaveComponent*               CallFunc_Array_Get_Item;                           // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesPlayerHavePermissionToEdit_ReturnValue; // 0x1EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1EE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1EF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item;                           // 0x1F8(0x28)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2; // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              K2Node_DynamicCast_AsFort_World_Item_Definition_1; // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x234(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_56C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput; // 0x248(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x258(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_K2_RemoveItemFromPlayer_ReturnValue;      // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortVolume*                           CallFunc_GetCurrentVolume_ReturnValue;             // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x278(0x10)(ZeroConstructor, NoDestructor)
	class AActor*                                K2Node_Event_ReceivingActor;                       // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPickup*                           K2Node_DynamicCast_AsFort_Pickup;                  // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x2B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APawn*                                 K2Node_CustomEvent_PossessedPawn;                  // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_2;               // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena_2;     // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCreativeModePlaylist_ReturnValue_2;     // 0x2F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x2F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue;      // 0x2F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               Temp_object_Variable_2;                            // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              K2Node_DynamicCast_AsFort_World_Item_Definition_2; // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1; // 0x310(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                 K2Node_Event_FinisherPawn;                         // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             K2Node_Event_FinishingWeapon;                      // 0x328(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDeathCause                       K2Node_Event_DeathCause;                           // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bAudioOnly;                           // 0x331(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x332(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x333(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x335(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x336(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56CE[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                CallFunc_GetWeaponActorClass_ReturnValue;          // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                K2Node_ClassDynamicCast_AsFort_Weapon_Ranged_Dual; // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                K2Node_ClassDynamicCast_AsB_Ranged_Generic;        // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x362(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56D1[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Creative_Mode_ReturnValue;             // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortVolumeManager*                    CallFunc_GetVolumeManager_OutVolumeManager;        // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVolumeValidityResult             CallFunc_GetVolumeManager_OutIsValid;              // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       CallFunc_GetPlayerPawn_ReturnValue;                // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x394(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortVolume*                           CallFunc_GetVolumeForLocation_ReturnValue;         // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x3B4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_56D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortVolume*                           K2Node_Event_Volume_1;                             // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortVolume*                           K2Node_Event_Volume;                               // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bIsUnderWater;                  // 0x3D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_CustomEvent_DepthUnderwater;                // 0x3DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x3E0(0x10)(ZeroConstructor, NoDestructor)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue_3;               // 0x3F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x3F8(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortMusicContext*                     CallFunc_GetContext_ReturnValue_2;                 // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMusicPackItemDefinition*        CallFunc_GetEquippedMusicPack_ReturnValue;         // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Creative_Mode_ReturnValue_1;           // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x424(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0x434(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x438(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x441(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x442(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher__DelegateSignature
struct AAthena_PlayerController_C_PawnPossessedDispatcher__DelegateSignature_Params
{
public:
	class APawn*                                 PossessedPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
