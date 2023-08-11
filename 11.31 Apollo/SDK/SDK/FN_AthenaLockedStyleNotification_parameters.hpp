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
// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OnUnlockingInfoSet
struct UAthenaLockedStyleNotification_C_OnUnlockingInfoSet_Params
{
public:
	bool                                         bShowProgression;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestUpdateAnim
struct UAthenaLockedStyleNotification_C_RequestUpdateAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestIntroAnim
struct UAthenaLockedStyleNotification_C_RequestIntroAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestOutroAnim
struct UAthenaLockedStyleNotification_C_RequestOutroAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OutroFinished
struct UAthenaLockedStyleNotification_C_OutroFinished_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.ExecuteUbergraph_AthenaLockedStyleNotification
struct UAthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bShowProgression;                     // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53FC[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
