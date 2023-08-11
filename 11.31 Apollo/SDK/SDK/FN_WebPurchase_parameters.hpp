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

// 0x10 (0x10 - 0x0)
// Function WebPurchase.WebPurchase_C.HandleBack
struct UWebPurchase_C_HandleBack_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D97[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WebPurchase.WebPurchase_C.BindDelegates
struct UWebPurchase_C_BindDelegates_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WebPurchase.WebPurchase_C.BP_OnActivated
struct UWebPurchase_C_BP_OnActivated_Params
{
public:
};

// 0x15 (0x15 - 0x0)
// Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase
struct UWebPurchase_C_ExecuteUbergraph_WebPurchase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HasInputActionHandler_ReturnValue;        // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
