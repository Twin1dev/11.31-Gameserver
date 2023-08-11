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

// 0x20 (0x20 - 0x0)
// Function BuildingToy.BuildingToy_C.GetVisualComponents
struct ABuildingToy_C_GetVisualComponents_Params
{
public:
	TArray<class USceneComponent*>               Components;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
	TArray<class USceneComponent*>               CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x10(0x10)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// 0x14 (0x14 - 0x0)
// Function BuildingToy.BuildingToy_C.DesiredVisibility
struct ABuildingToy_C_DesiredVisibility_Params
{
public:
	bool                                         Visibility;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                Temp_object_Variable;                              // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisibleDuringMinigame_IsVisibleDuringMinigame; // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInPlayMode_Play_Mode;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BuildingToy.BuildingToy_C.IsVisibleDuringMinigame
struct ABuildingToy_C_IsVisibleDuringMinigame_Params
{
public:
	bool                                         IsVisibleDuringMinigame;                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function BuildingToy.BuildingToy_C.UpdateVisuals
struct ABuildingToy_C_UpdateVisuals_Params
{
public:
	bool                                         bShouldBeVisible;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DesiredVisibility_Visibility;             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53EF[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class USceneComponent*>               CallFunc_GetVisualComponents_Components;           // 0x10(0x10)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BuildingToy.BuildingToy_C.MinigameIsRunning
struct ABuildingToy_C_MinigameIsRunning_Params
{
public:
	bool                                         GameIsRunning;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasStarted_ReturnValue;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BuildingToy.BuildingToy_C.BlueprintGetInteractionString
struct ABuildingToy_C_BlueprintGetInteractionString_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm)
};

// 0x4E (0x4E - 0x0)
// Function BuildingToy.BuildingToy_C.BlueprintCanInteract
struct ABuildingToy_C_BlueprintCanInteract_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         bInteractSuccess;                                  // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53F2[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53F3[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortVolume*                           CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue; // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasStarted_ReturnValue;                   // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BuildingToy.BuildingToy_C.BlueprintOnLocalInteract
struct ABuildingToy_C_BlueprintOnLocalInteract_Params
{
public:
	class AFortPlayerPawn*                       InteractingPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BuildingToy.BuildingToy_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature
struct ABuildingToy_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BuildingToy.BuildingToy_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
struct ABuildingToy_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BuildingToy.BuildingToy_C.ReceiveBeginPlay
struct ABuildingToy_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BuildingToy.BuildingToy_C.OnMinigameStarted
struct ABuildingToy_C_OnMinigameStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BuildingToy.BuildingToy_C.OnMinigameEnded
struct ABuildingToy_C_OnMinigameEnded_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BuildingToy.BuildingToy_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_2_OnMinigameAssignmentChanged__DelegateSignature
struct ABuildingToy_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_2_OnMinigameAssignmentChanged__DelegateSignature_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BuildingToy.BuildingToy_C.On Play Mode Changed
struct ABuildingToy_C_On_Play_Mode_Changed_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInPlayMode;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function BuildingToy.BuildingToy_C.ExecuteUbergraph_BuildingToy
struct ABuildingToy_C_ExecuteUbergraph_BuildingToy_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53F7[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53F8[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                Temp_object_Variable;                              // 0x40(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMinigame*                         K2Node_ComponentBoundEvent_Minigame;               // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInPlayMode_Play_Mode;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         K2Node_CustomEvent_Minigame;                       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsInPlayMode;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
