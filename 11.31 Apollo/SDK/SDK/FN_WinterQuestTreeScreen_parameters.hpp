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
// Function WinterQuestTreeScreen.WinterQuestTreeScreen_C.Construct
struct UWinterQuestTreeScreen_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestTreeScreen.WinterQuestTreeScreen_C.Play Opening Audio
struct UWinterQuestTreeScreen_C_Play_Opening_Audio_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestTreeScreen.WinterQuestTreeScreen_C.Stop Opening Audio
struct UWinterQuestTreeScreen_C_Stop_Opening_Audio_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestTreeScreen.WinterQuestTreeScreen_C.BP_OnActivated
struct UWinterQuestTreeScreen_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestTreeScreen.WinterQuestTreeScreen_C.OnStartInteraction
struct UWinterQuestTreeScreen_C_OnStartInteraction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestTreeScreen.WinterQuestTreeScreen_C.OnStopInteraction
struct UWinterQuestTreeScreen_C_OnStopInteraction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestTreeScreen.WinterQuestTreeScreen_C.OnGrantReward
struct UWinterQuestTreeScreen_C_OnGrantReward_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestTreeScreen.WinterQuestTreeScreen_C.BP_OnDeactivated
struct UWinterQuestTreeScreen_C_BP_OnDeactivated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function WinterQuestTreeScreen.WinterQuestTreeScreen_C.OnInputMethodChanged
struct UWinterQuestTreeScreen_C_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  NewMethod;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD2 (0xD2 - 0x0)
// Function WinterQuestTreeScreen.WinterQuestTreeScreen_C.ExecuteUbergraph_WinterQuestTreeScreen
struct UWinterQuestTreeScreen_C_ExecuteUbergraph_WinterQuestTreeScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECommonInputType                  Temp_byte_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5798[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5799[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWinterQuest_OpenPrompt_C*             K2Node_DynamicCast_AsWinter_Quest_Open_Prompt;     // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_579A[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWinterQuest_OpenPrompt_C*             K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_1;   // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_579B[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_579C[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGSC_DynamicLevelStreaming_C*>  CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x60(0x10)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UGSC_DynamicLevelStreaming_C*          CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_579D[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class ABP_CozyLodge_SelectablePresent_Tree_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x80(0x10)(ZeroConstructor, ReferenceParm)
	class ABP_CozyLodge_SelectablePresent_Tree_C* CallFunc_Array_Get_Item_1;                         // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetNodeTag_ReturnValue;                   // 0x9C(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_579E[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWinterQuest_OpenPrompt_C*             K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_2;   // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_579F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xB4(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  K2Node_Event_NewMethod;                            // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
