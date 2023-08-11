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

// 0x8 (0x8 - 0x0)
// Function PunchCardEntry.PunchCardEntry_C.OnLoaded_5FE293294CDD1131C46B229A3E23F648
struct UPunchCardEntry_C_OnLoaded_5FE293294CDD1131C46B229A3E23F648_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PunchCardEntry.PunchCardEntry_C.OnLoaded_D1FE60014F4F3FD64C242F91B2A30C9C
struct UPunchCardEntry_C_OnLoaded_D1FE60014F4F3FD64C242F91B2A30C9C_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PunchCardEntry.PunchCardEntry_C.Construct
struct UPunchCardEntry_C_Construct_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function PunchCardEntry.PunchCardEntry_C.OnNewMedalPlaced
struct UPunchCardEntry_C_OnNewMedalPlaced_Params
{
public:
	class UFortAccoladeItemDefinition*           PunchedMedal;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlaySocketAnim;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PunchCardEntry.PunchCardEntry_C.NewMedalComplete
struct UPunchCardEntry_C_NewMedalComplete_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PunchCardEntry.PunchCardEntry_C.SetAccoladeVisuals
struct UPunchCardEntry_C_SetAccoladeVisuals_Params
{
public:
	class UFortAccoladeItemDefinition*           ItemDef;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PunchCardEntry.PunchCardEntry_C.FinishLoadingMedalIcon
struct UPunchCardEntry_C_FinishLoadingMedalIcon_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PunchCardEntry.PunchCardEntry_C.EventSocketed
struct UPunchCardEntry_C_EventSocketed_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PunchCardEntry.PunchCardEntry_C.OnSetMedal
struct UPunchCardEntry_C_OnSetMedal_Params
{
public:
	class UFortAccoladeItemDefinition*           PunchedMedal;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18C (0x18C - 0x0)
// Function PunchCardEntry.PunchCardEntry_C.ExecuteUbergraph_PunchCardEntry
struct UPunchCardEntry_C_ExecuteUbergraph_PunchCardEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_236F[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_1;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_A_Execution_Happened_Variable;           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_B_Execution_Happened_Variable;           // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2370[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAccoladeItemDefinition*           K2Node_Event_PunchedMedal_1;                       // 0x38(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bPlaySocketAnim;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2371[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x44(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2372[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAccoladeItemDefinition*           K2Node_CustomEvent_ItemDef;                        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetPreviousAccoladeLargePreviewImage_ReturnValue; // 0x60(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsAssetNull_ReturnValue;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2373[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLargePreviewImage_ReturnValue;         // 0x90(0x28)(HasGetValueTypeHash)
	float                                        CallFunc_GetAccoladeLevel_ReturnValue;             // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded_1;                       // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2374[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSoftObjectPtr<class UTexture2D>             K2Node_Select_Default;                             // 0xD0(0x28)(HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xF8(0x10)(ZeroConstructor, NoDestructor)
	class UMaterialInterface*                    Temp_object_Variable_2;                            // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Temp_object_Variable_3;                            // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2375[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2376[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortGlobalUIContext*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2377[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInterface*                    K2Node_Select_Default_2;                           // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccoladeItemDefinition*           K2Node_Event_PunchedMedal;                         // 0x148(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLargePreviewImage_ReturnValue_1;       // 0x150(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2378[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x17C(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
