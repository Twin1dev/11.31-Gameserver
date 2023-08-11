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

// 0x1E0 (0x1E0 - 0x0)
// Function Apollo_Intro_FrontendScreen.Apollo_Intro_FrontendScreen_C.OnKeyDown
struct UApollo_Intro_FrontendScreen_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x128(0xB8)()
};

// 0x0 (0x0 - 0x0)
// Function Apollo_Intro_FrontendScreen.Apollo_Intro_FrontendScreen_C.BP_OnActivated
struct UApollo_Intro_FrontendScreen_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Apollo_Intro_FrontendScreen.Apollo_Intro_FrontendScreen_C.BP_OnDeactivated
struct UApollo_Intro_FrontendScreen_C_BP_OnDeactivated_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Apollo_Intro_FrontendScreen.Apollo_Intro_FrontendScreen_C.ExecuteUbergraph_Apollo_Intro_FrontendScreen
struct UApollo_Intro_FrontendScreen_C_ExecuteUbergraph_Apollo_Intro_FrontendScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
