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
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ChangeToNormalMaterial
struct ATrap_Athena_Spikes_C_ChangeToNormalMaterial_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C. ChangeToFriendlyMaterial
struct ATrap_Athena_Spikes_C__ChangeToFriendlyMaterial_Params
{
public:
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B46[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B47[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.MaterialSweepOnSpikes
struct ATrap_Athena_Spikes_C_MaterialSweepOnSpikes_Params
{
public:
	float                                        SweepSpeed;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SweepColor;                                        // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SweepExponent;                                     // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.SetSpikePosition
struct ATrap_Athena_Spikes_C_SetSpikePosition_Params
{
public:
	float                                        NewSpikePosition;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.UserConstructionScript
struct ATrap_Athena_Spikes_C_UserConstructionScript_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Fire__FinishedFunc
struct ATrap_Athena_Spikes_C_Fire__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Fire__UpdateFunc
struct ATrap_Athena_Spikes_C_Fire__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__FinishedFunc
struct ATrap_Athena_Spikes_C_Retract__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__UpdateFunc
struct ATrap_Athena_Spikes_C_Retract__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__Sounds__EventFunc
struct ATrap_Athena_Spikes_C_Retract__Sounds__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ResetSpikes__FinishedFunc
struct ATrap_Athena_Spikes_C_ResetSpikes__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ResetSpikes__UpdateFunc
struct ATrap_Athena_Spikes_C_ResetSpikes__UpdateFunc_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1
struct ATrap_Athena_Spikes_C_OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D
struct ATrap_Athena_Spikes_C_OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnReloadEnd
struct ATrap_Athena_Spikes_C_OnReloadEnd_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnPlaced
struct ATrap_Athena_Spikes_C_OnPlaced_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnFinishedBuilding
struct ATrap_Athena_Spikes_C_OnFinishedBuilding_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Athena_Spikes_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B48[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnOutOfDurability
struct ATrap_Athena_Spikes_C_OnOutOfDurability_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnWorldReady
struct ATrap_Athena_Spikes_C_OnWorldReady_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnInitTeam
struct ATrap_Athena_Spikes_C_OnInitTeam_Params
{
public:
};

// 0x850 (0x850 - 0x0)
// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ExecuteUbergraph_Trap_Athena_Spikes
struct ATrap_Athena_Spikes_C_ExecuteUbergraph_Trap_Athena_Spikes_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Option_B___If_false__use_Option_A_Variable; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B49[0xA];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam;                // 0x10(0x80)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakVector_X;                            // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xBC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0xC8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0xD4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_1;              // 0xE0(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_2;              // 0x160(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_3;              // 0x1E0(0x80)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_3;      // 0x260(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_4;              // 0x270(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_5;              // 0x2F0(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_6;              // 0x370(0x80)(IsPlainOldData, NoDestructor)
	TArray<struct FParticleSysParam>             K2Node_MakeArray_Array;                            // 0x3F0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortPortableSoftParticles            K2Node_MakeStruct_FortPortableSoftParticles;       // 0x408(0x58)()
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TMap<class FName, struct FParameterNameMapping> K2Node_MakeMap_Map;                                // 0x468(0x50)(ConstParm, ZeroConstructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B4D[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               Temp_object_Variable;                              // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x4C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                        K2Node_DynamicCast_AsFXSystem_Asset;               // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x4D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x4DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B4E[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFXSystemAsset*                        Temp_object_Variable_1;                            // 0x4E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPortableSoftParticles            K2Node_MakeStruct_FortPortableSoftParticles_1;     // 0x4E8(0x58)()
	bool                                         Temp_bool_Variable_1;                              // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x541(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x542(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x543(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               Temp_object_Variable_2;                            // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded_1;                       // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                        K2Node_DynamicCast_AsFXSystem_Asset_1;             // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B50[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFXSystemAsset*                        K2Node_Select_Default;                             // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B51[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Temp_float_Variable;                               // 0x574(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x579(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B52[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortPortableSoftParticles            K2Node_Select_Default_1;                           // 0x580(0x58)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x5D8(0x10)(ZeroConstructor, NoDestructor)
	struct FFortPortableSoftParticles            K2Node_SetFieldsInStruct_StructOut;                // 0x5E8(0x58)()
	bool                                         CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue; // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B53[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSoftObjectPtr<class UFXSystemAsset>         K2Node_Select_Default_2;                           // 0x648(0x28)(HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x670(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x67C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x688(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B54[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue;            // 0x694(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x6A0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x6AC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x6B8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_5;        // 0x6C4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType;                 // 0x6D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B55[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters;                // 0x6D8(0xB8)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B56[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x794(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x798(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_Lerp_ReturnValue_1;                       // 0x7A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_2;                       // 0x7AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x7B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B57[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFXSystemComponent*                    CallFunc_SpawnFXSystemAttached_ReturnValue;        // 0x7B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x7C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x7C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B58[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FParticleSysParam>             CallFunc_MapParticleInstanceParamNames_ReturnValue; // 0x7C8(0x10)(ZeroConstructor, ReferenceParm)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x7D8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x7E4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x7F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_6;        // 0x7F4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EFortTeamAffiliation>      K2Node_MakeArray_Array_1;                          // 0x800(0x10)(ZeroConstructor, ReferenceParm)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0x810(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue_1; // 0x811(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B59[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_7;        // 0x814(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_SpawnFXAtLocation_ReturnValue;            // 0x820(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UFXSystemAsset>         K2Node_Select_Default_3;                           // 0x828(0x28)(HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
