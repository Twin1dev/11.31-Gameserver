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
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.GetHasStockingQuestActive
struct ABP_Cozy_Stockings_C_GetHasStockingQuestActive_Params
{
public:
	bool                                         bHasStockingQuestActive;                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.UserConstructionScript
struct ABP_Cozy_Stockings_C_UserConstructionScript_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.Timeline_0__FinishedFunc
struct ABP_Cozy_Stockings_C_Timeline_0__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.Timeline_0__UpdateFunc
struct ABP_Cozy_Stockings_C_Timeline_0__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.OnFrontendInteract
struct ABP_Cozy_Stockings_C_OnFrontendInteract_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.SetStateEmpty
struct ABP_Cozy_Stockings_C_SetStateEmpty_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.SetStateFull
struct ABP_Cozy_Stockings_C_SetStateFull_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.ReceiveBeginPlay
struct ABP_Cozy_Stockings_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.CheckStockingState
struct ABP_Cozy_Stockings_C_CheckStockingState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.Debug_CurrentQuestsTotal
struct ABP_Cozy_Stockings_C_Debug_CurrentQuestsTotal_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.BP_OnInventoryUpdated
struct ABP_Cozy_Stockings_C_BP_OnInventoryUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.StartInteraction
struct ABP_Cozy_Stockings_C_StartInteraction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.StopInteraction
struct ABP_Cozy_Stockings_C_StopInteraction_Params
{
public:
};

// 0xB8 (0xB8 - 0x0)
// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.ExecuteUbergraph_BP_Cozy_Stockings
struct ABP_Cozy_Stockings_C_ExecuteUbergraph_BP_Cozy_Stockings_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x30(0x10)(NoDestructor)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue_1;              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue_1;            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65A2[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x6C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x80(0x8)(NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              CallFunc_Array_Get_Item;                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Athena_HasQuest_PlayerHasQuest;           // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasCompletedObjective_ReturnValue;        // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Athena_HasQuest_PlayerHasQuest_1;         // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65A3[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x98(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
