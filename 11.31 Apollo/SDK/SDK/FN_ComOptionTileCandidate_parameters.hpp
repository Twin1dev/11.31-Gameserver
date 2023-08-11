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
// Function ComOptionTileCandidate.ComOptionTileCandidate_C.BP_OnEntryReleased
struct UComOptionTileCandidate_C_BP_OnEntryReleased_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ComOptionTileCandidate.ComOptionTileCandidate_C.BP_OnItemExpansionChanged
struct UComOptionTileCandidate_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ComOptionTileCandidate.ComOptionTileCandidate_C.BP_OnItemSelectionChanged
struct UComOptionTileCandidate_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ComOptionTileCandidate.ComOptionTileCandidate_C.OnListItemObjectSet
struct UComOptionTileCandidate_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ComOptionTileCandidate.ComOptionTileCandidate_C.AnimateImage
struct UComOptionTileCandidate_C_AnimateImage_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ComOptionTileCandidate.ComOptionTileCandidate_C.Construct
struct UComOptionTileCandidate_C_Construct_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function ComOptionTileCandidate.ComOptionTileCandidate_C.ExecuteUbergraph_ComOptionTileCandidate
struct UComOptionTileCandidate_C_ExecuteUbergraph_ComOptionTileCandidate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSelected;                          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65EF[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
