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
// Function AthenaChatWidgetModalWrapper.AthenaChatWidgetModalWrapper_C.PreConstruct
struct UAthenaChatWidgetModalWrapper_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaChatWidgetModalWrapper.AthenaChatWidgetModalWrapper_C.OnInitialized
struct UAthenaChatWidgetModalWrapper_C_OnInitialized_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function AthenaChatWidgetModalWrapper.AthenaChatWidgetModalWrapper_C.ExecuteUbergraph_AthenaChatWidgetModalWrapper
struct UAthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6269[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UChatContainer_C*                      K2Node_DynamicCast_AsChat_Container;               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
