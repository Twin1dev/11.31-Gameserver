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

// 0xA0 (0xA0 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.GetSeasonEndLabelText
struct UBattlePassDirectAcquisitionScreen_C_GetSeasonEndLabelText_Params
{
public:
	class FText                                  Result;                                            // 0x0(0x18)(Parm, OutParm)
	class UAthenaAccountContext*                 CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCurrentChapterAndSeasonText_ReturnValue; // 0x20(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x78(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x88(0x18)()
};

// 0x8 (0x8 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Intro Anim "Header"
struct UBattlePassDirectAcquisitionScreen_C_Intro_Anim__Header__Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Intro Anim Reset
struct UBattlePassDirectAcquisitionScreen_C_Intro_Anim_Reset_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Intro Anim "Tiles"
struct UBattlePassDirectAcquisitionScreen_C_Intro_Anim__Tiles__Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Intro Anim "OR"
struct UBattlePassDirectAcquisitionScreen_C_Intro_Anim__OR__Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x221 (0x221 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.On_CommonBorderTouchToClose_MouseButtonUp
struct UBattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CDC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)()
	bool                                         CallFunc_HandleBack_bPassThrough;                  // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.HandleBack
struct UBattlePassDirectAcquisitionScreen_C_HandleBack_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.GenerateOfferWidget
struct UBattlePassDirectAcquisitionScreen_C_GenerateOfferWidget_Params
{
public:
	class UFortStoreFrontOfferInfo*              OfferData;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGiftOnly_ReturnValue;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasDisplayAsset_ReturnValue;              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CDD[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        K2Node_Select_Default;                             // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaDirectAcquisitionOfferWidget_C* CallFunc_Create_ReturnValue;                       // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.OnOffersGenerated
struct UBattlePassDirectAcquisitionScreen_C_OnOffersGenerated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.BP_OnActivated
struct UBattlePassDirectAcquisitionScreen_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Construct
struct UBattlePassDirectAcquisitionScreen_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature
struct UBattlePassDirectAcquisitionScreen_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.OnBeginIntro
struct UBattlePassDirectAcquisitionScreen_C_OnBeginIntro_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UBattlePassDirectAcquisitionScreen_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.OnStartReadingOffers
struct UBattlePassDirectAcquisitionScreen_C_OnStartReadingOffers_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.NoOffersAvailable
struct UBattlePassDirectAcquisitionScreen_C_NoOffersAvailable_Params
{
public:
};

// 0x71 (0x71 - 0x0)
// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.ExecuteUbergraph_BattlePassDirectAcquisitionScreen
struct UBattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CDF[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x18(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	struct FDateTime                             CallFunc_GetSeasonStoreEndDate_ReturnValue;        // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSeasonEndLabelText_Result;             // 0x48(0x18)()
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBack_bPassThrough;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CE0[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
