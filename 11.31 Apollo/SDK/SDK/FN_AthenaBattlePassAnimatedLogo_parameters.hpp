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
// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.OnAnimationFinished
struct UAthenaBattlePassAnimatedLogo_C_OnAnimationFinished_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.PlayIntroAnim
struct UAthenaBattlePassAnimatedLogo_C_PlayIntroAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.Construct
struct UAthenaBattlePassAnimatedLogo_C_Construct_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.ExecuteUbergraph_AthenaBattlePassAnimatedLogo
struct UAthenaBattlePassAnimatedLogo_C_ExecuteUbergraph_AthenaBattlePassAnimatedLogo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_618B[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidgetAnimation*                      K2Node_Event_Animation;                            // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_618C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAccountContext*                 CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCurrentChapterAndSeasonText_ReturnValue; // 0x38(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
