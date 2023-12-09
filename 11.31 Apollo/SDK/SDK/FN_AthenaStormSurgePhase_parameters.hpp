#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function AthenaStormSurgePhase.AthenaStormSurgePhase_C.Anim_Load
struct UAthenaStormSurgePhase_C_Anim_Load_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function AthenaStormSurgePhase.AthenaStormSurgePhase_C.OnStartDisplaying
struct UAthenaStormSurgePhase_C_OnStartDisplaying_Params
{
public:
	class FText                                  TitleText;                                         // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  SubTitleText;                                      // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bDisplaySubtitle;                                  // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bPlayDamageActiveSound;                            // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x52 (0x52 - 0x0)
// Function AthenaStormSurgePhase.AthenaStormSurgePhase_C.ExecuteUbergraph_AthenaStormSurgePhase
struct UAthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2E29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_TitleText;                            // 0x20(0x18)(ConstParm)
	class FText                                  K2Node_Event_SubTitleText;                         // 0x38(0x18)(ConstParm)
	bool                                         K2Node_Event_bDisplaySubtitle;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bPlayDamageActiveSound;               // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


