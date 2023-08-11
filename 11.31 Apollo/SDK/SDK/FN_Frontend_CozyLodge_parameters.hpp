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

// 0x24 (0x24 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.SetUpHiddenObjectPairing
struct AFrontend_CozyLodge_C_SetUpHiddenObjectPairing_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RewardGraphNodeTag;                                // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFrontendEventHiddenObject            K2Node_MakeStruct_FrontendEventHiddenObject;       // 0x10(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.SetupNavObjectPairing
struct AFrontend_CozyLodge_C_SetupNavObjectPairing_Params
{
public:
	class AFortEventLevelNavigationActor*        Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Camera;                                            // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFrontendEventNavObject               K2Node_MakeStruct_FrontendEventNavObject;          // 0x28(0x28)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.SetUpCameraPairing
struct AFrontend_CozyLodge_C_SetUpCameraPairing_Params
{
public:
	class AFortCameraBase*                       Camera;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFrontendEventCamera                  K2Node_MakeStruct_FrontendEventCamera;             // 0x10(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.OnFailure_6A99741E47F07D31E84968A87E978BED
struct AFrontend_CozyLodge_C_OnFailure_6A99741E47F07D31E84968A87E978BED_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.OnIgnored_6A99741E47F07D31E84968A87E978BED
struct AFrontend_CozyLodge_C_OnIgnored_6A99741E47F07D31E84968A87E978BED_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.OnSuccess_6A99741E47F07D31E84968A87E978BED
struct AFrontend_CozyLodge_C_OnSuccess_6A99741E47F07D31E84968A87E978BED_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.ReceiveBeginPlay
struct AFrontend_CozyLodge_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.FillOutSceneCameraArray
struct AFrontend_CozyLodge_C_FillOutSceneCameraArray_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.RegisterSceneCameras
struct AFrontend_CozyLodge_C_RegisterSceneCameras_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.RegisterNavObjects
struct AFrontend_CozyLodge_C_RegisterNavObjects_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.FillOutNavObjects
struct AFrontend_CozyLodge_C_FillOutNavObjects_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.FilloutHidenObjects
struct AFrontend_CozyLodge_C_FilloutHidenObjects_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.RegisterHiddenObjects
struct AFrontend_CozyLodge_C_RegisterHiddenObjects_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.OnSpecialInteraction
struct AFrontend_CozyLodge_C_OnSpecialInteraction_Params
{
public:
	struct FGameplayTag                          InteractionTag;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CameraTag;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AFortEventLevelNavigationActor*        InActor;                                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x218 (0x218 - 0x0)
// Function Frontend_CozyLodge.Frontend_CozyLodge_C.ExecuteUbergraph_Frontend_CozyLodge
struct AFrontend_CozyLodge_C_ExecuteUbergraph_Frontend_CozyLodge_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4762[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGSC_DynamicLevelStreaming_C*>  CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x58(0x10)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGSC_DynamicLevelStreaming_C*          CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4763[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_1;               // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGSC_DynamicLevelStreaming_C*>  CallFunc_K2_GetComponentsByClass_ReturnValue_1;    // 0x88(0x10)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4764[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFrontendEventNavObject               CallFunc_Array_Get_Item_1;                         // 0xA0(0x28)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_2;               // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGSC_DynamicLevelStreaming_C*>  CallFunc_K2_GetComponentsByClass_ReturnValue_2;    // 0xD8(0x10)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UGSC_DynamicLevelStreaming_C*          CallFunc_Array_Get_Item_2;                         // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4765[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_6;                  // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4766[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4767[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_3;               // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGSC_DynamicLevelStreaming_C*>  CallFunc_K2_GetComponentsByClass_ReturnValue_3;    // 0x118(0x10)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	struct FFrontendEventHiddenObject            CallFunc_Array_Get_Item_3;                         // 0x128(0x10)(NoDestructor, HasGetValueTypeHash)
	class UGSC_DynamicLevelStreaming_C*          CallFunc_Array_Get_Item_4;                         // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4768[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4769[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Array_Index_Variable_6;                   // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_476A[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x158(0x10)(NoDestructor)
	class UGSC_DynamicLevelStreaming_C*          CallFunc_Array_Get_Item_5;                         // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         CallFunc_GetAllFortPlayerControllers_ReturnValue;  // 0x170(0x10)(ZeroConstructor, ReferenceParm)
	class AFortPlayerController*                 CallFunc_Array_Get_Item_6;                         // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_7;               // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_476B[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAsyncAction_SendQuestStatEvent*   CallFunc_SendClientStatEvent_ReturnValue;          // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_476C[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTag                          K2Node_CustomEvent_InteractionTag;                 // 0x1A4(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_CustomEvent_CameraTag;                      // 0x1AC(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_476D[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortEventLevelNavigationActor*        K2Node_CustomEvent_InActor;                        // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_476E[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1C4(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1D4(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1E4(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_7;                  // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_7;                // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_476F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_7;                   // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4770[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFrontendEventCamera                  CallFunc_Array_Get_Item_7;                         // 0x208(0x10)(NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
