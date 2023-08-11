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
// Function WinterQuest_MoreInfo_DetailsScreen.WinterQuest_MoreInfo_DetailsScreen_C.BP_OnActivated
struct UWinterQuest_MoreInfo_DetailsScreen_C_BP_OnActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function WinterQuest_MoreInfo_DetailsScreen.WinterQuest_MoreInfo_DetailsScreen_C.BndEvt__SoloButton_WinterFest_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UWinterQuest_MoreInfo_DetailsScreen_C_BndEvt__SoloButton_WinterFest_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WinterQuest_MoreInfo_DetailsScreen.WinterQuest_MoreInfo_DetailsScreen_C.ExecuteUbergraph_WinterQuest_MoreInfo_DetailsScreen
struct UWinterQuest_MoreInfo_DetailsScreen_C_ExecuteUbergraph_WinterQuest_MoreInfo_DetailsScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6573[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
