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
// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay
struct APlayerPawn_Generic_Parent_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Entered Water Volume
struct APlayerPawn_Generic_Parent_C_Entered_Water_Volume_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Player Creates a Splash
struct APlayerPawn_Generic_Parent_C_Player_Creates_a_Splash_Params
{
public:
	struct FTransform                            NewTransform;                                      // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReinitializeWeaponMaterials
struct APlayerPawn_Generic_Parent_C_ReinitializeWeaponMaterials_Params
{
public:
};

// 0x90 (0x90 - 0x0)
// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent
struct APlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD0[0xC];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            Temp_struct_Variable;                              // 0x10(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UPostProcessComponent*                 CallFunc_AddComponent_ReturnValue;                 // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CD2[0xF];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            K2Node_CustomEvent_NewTransform;                   // 0x60(0x30)(ConstParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.OnOverlapWaterVolume__DelegateSignature
struct APlayerPawn_Generic_Parent_C_OnOverlapWaterVolume__DelegateSignature_Params
{
public:
	bool                                         bIsInWater;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CD3[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       Pawn;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Water;                                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
