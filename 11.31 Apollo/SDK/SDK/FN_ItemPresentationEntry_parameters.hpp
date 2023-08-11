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

// 0x9 (0x9 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.HandelDeselectedAnim
struct UItemPresentationEntry_C_HandelDeselectedAnim_Params
{
public:
	class UAthenaSeasonItemRewardIcon_C*         K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon; // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleSelectedAnim
struct UItemPresentationEntry_C_HandleSelectedAnim_Params
{
public:
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSeasonItemRewardIcon_C*         K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon; // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleUnhover
struct UItemPresentationEntry_C_HandleUnhover_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSeasonItemRewardIcon_C*         K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleHover
struct UItemPresentationEntry_C_HandleHover_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSeasonItemRewardIcon_C*         K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnHovered
struct UItemPresentationEntry_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnUnhovered
struct UItemPresentationEntry_C_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnSelected
struct UItemPresentationEntry_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnDeselected
struct UItemPresentationEntry_C_BP_OnDeselected_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.DelayIntroAnimation
struct UItemPresentationEntry_C_DelayIntroAnimation_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.Construct
struct UItemPresentationEntry_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.OnInitialIconAnimation
struct UItemPresentationEntry_C_OnInitialIconAnimation_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.ExecuteUbergraph_ItemPresentationEntry
struct UItemPresentationEntry_C_ExecuteUbergraph_ItemPresentationEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Delay;                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
