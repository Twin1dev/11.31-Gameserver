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
// Function ComOptionDetails.ComOptionDetails_C.PlayeFadeOut
struct UComOptionDetails_C_PlayeFadeOut_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ComOptionDetails.ComOptionDetails_C.PlayeFadeIn
struct UComOptionDetails_C_PlayeFadeIn_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ComOptionDetails.ComOptionDetails_C.BP_OnEntryReleased
struct UComOptionDetails_C_BP_OnEntryReleased_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ComOptionDetails.ComOptionDetails_C.BP_OnItemExpansionChanged
struct UComOptionDetails_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ComOptionDetails.ComOptionDetails_C.BP_OnItemSelectionChanged
struct UComOptionDetails_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ComOptionDetails.ComOptionDetails_C.OnListItemObjectSet
struct UComOptionDetails_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ComOptionDetails.ComOptionDetails_C.FadeOutFinished
struct UComOptionDetails_C_FadeOutFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ComOptionDetails.ComOptionDetails_C.Construct
struct UComOptionDetails_C_Construct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function ComOptionDetails.ComOptionDetails_C.ExecuteUbergraph_ComOptionDetails
struct UComOptionDetails_C_ExecuteUbergraph_ComOptionDetails_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSelected;                          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65F6[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
