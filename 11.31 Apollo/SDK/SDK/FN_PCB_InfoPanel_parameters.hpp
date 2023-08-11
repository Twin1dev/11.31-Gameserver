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
// Function PCB_InfoPanel.PCB_InfoPanel_C.CmsDataRead
struct UPCB_InfoPanel_C_CmsDataRead_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function PCB_InfoPanel.PCB_InfoPanel_C.ExecuteUbergraph_PCB_InfoPanel
struct UPCB_InfoPanel_C_ExecuteUbergraph_PCB_InfoPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6403[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetPCBHeader_ReturnValue;                 // 0x8(0x18)()
	class FText                                  CallFunc_GetPCBDescription_ReturnValue;            // 0x20(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
