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
// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.EndTransition
struct UWinterQuestTitleScreen_C_EndTransition_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.OnBeginCabinTransition
struct UWinterQuestTitleScreen_C_OnBeginCabinTransition_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.OnResetScreen
struct UWinterQuestTitleScreen_C_OnResetScreen_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.BP_OnActivated
struct UWinterQuestTitleScreen_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.BP_OnDeactivated
struct UWinterQuestTitleScreen_C_BP_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.Construct
struct UWinterQuestTitleScreen_C_Construct_Params
{
public:
};

// 0x41 (0x41 - 0x0)
// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.ExecuteUbergraph_WinterQuestTitleScreen
struct UWinterQuestTitleScreen_C_ExecuteUbergraph_WinterQuestTitleScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6404[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	class AFort_Entry_Music_Controller_BP_C*     CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6405[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
