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
// Function AthenaNews.AthenaNews_C.BeginIntroSequence
struct UAthenaNews_C_BeginIntroSequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaNews.AthenaNews_C.SingleItemConfiguration
struct UAthenaNews_C_SingleItemConfiguration_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaNews.AthenaNews_C.ResetViewConfiguration
struct UAthenaNews_C_ResetViewConfiguration_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaNews.AthenaNews_C.HandleNewsStyle
struct UAthenaNews_C_HandleNewsStyle_Params
{
public:
	enum class EAthenaNewsStyle                  NewsStyle;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
struct UAthenaNews_C_ExecuteUbergraph_AthenaNews_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6213[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EAthenaNewsStyle                  K2Node_Event_NewsStyle;                            // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6214[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaNews.AthenaNews_C.UpdateStyle__DelegateSignature
struct UAthenaNews_C_UpdateStyle__DelegateSignature_Params
{
public:
	enum class EAthenaNewsStyle                  NewStyle;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
