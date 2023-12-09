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

// 0xB0 (0xB0 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.HandleRedeemCodeComplete
struct URedeemFriendCodeWindow_C_HandleRedeemCodeComplete_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ERedeemCodeFailureReason          FailureReason;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERedeemCodeFailureReason          Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EA4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x50(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x68(0x18)(None)
	TArray<struct FPurchasedItemInfo>            K2Node_MakeArray_Array;                            // 0x80(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x98(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature
struct URedeemFriendCodeWindow_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
struct URedeemFriendCodeWindow_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.OnRedeemFriendCodeComplete
struct URedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ERedeemCodeFailureReason          FailureReason;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
struct URedeemFriendCodeWindow_C_BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.ExecuteUbergraph_RedeemFriendCodeWindow
struct URedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EB1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSuccess;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ERedeemCodeFailureReason          K2Node_Event_FailureReason;                        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EB4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x18(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6EB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x48(0x18)(ConstParm)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6EB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


