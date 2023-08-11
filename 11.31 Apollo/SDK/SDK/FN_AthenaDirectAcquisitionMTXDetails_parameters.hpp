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

// 0x5C (0x5C - 0x0)
// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.InitAffiliateInfo
struct UAthenaDirectAcquisitionMTXDetails_C_InitAffiliateInfo_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2211[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetCurrentSubGame_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2212[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_GetAffiliateName_ReturnValue;             // 0x18(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2213[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)()
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2214[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Len_ReturnValue;                          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.GetWidgetForFramingViewedItem
struct UAthenaDirectAcquisitionMTXDetails_C_GetWidgetForFramingViewedItem_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.InitPurchaseButton
struct UAthenaDirectAcquisitionMTXDetails_C_InitPurchaseButton_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2215[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPriceInMTX_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2216[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_GetOfferId_ReturnValue;                   // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOfferCompletelyFree_ReturnValue;        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOfferPurchaseError               CallFunc_CanPurchaseOffer_ReturnValue;             // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.PopDetails
struct UAthenaDirectAcquisitionMTXDetails_C_PopDetails_Params
{
public:
};

// 0x180 (0x180 - 0x0)
// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.Init
struct UAthenaDirectAcquisitionMTXDetails_C_Init_Params
{
public:
	class UFortMtxOfferData*                     DisplayAsset;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2217[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortMtxDetailsAttribute              CallFunc_Array_Get_Item;                           // 0x18(0x30)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2218[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMtxOfferData*                     CallFunc_GetOfferDisplayAsset_ReturnValue;         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2219[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_1;               // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetBonusQuantity_ReturnValue;             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetBaseQuantity_ReturnValue;              // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x78(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x90(0x18)()
	int32                                        CallFunc_GetBonusQuantity_ReturnValue_1;           // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMtxStoreOfferType            CallFunc_GetFortStoreOfferType_ReturnValue;        // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xAE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xAF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_221A[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_2;               // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_3;               // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0xC8(0x18)()
	class FText                                  CallFunc_GetSalePrice_SalePrice;                   // 0xE0(0x18)()
	bool                                         CallFunc_GetSalePrice_ReturnValue;                 // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_221B[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetNormalPrice_ReturnValue;               // 0x100(0x18)()
	class FText                                  CallFunc_GetName_ReturnValue;                      // 0x118(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x130(0x18)()
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x14A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x14B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_221C[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*    CallFunc_Create_ReturnValue;                       // 0x160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_221D[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandleBack
struct UAthenaDirectAcquisitionMTXDetails_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandlePurchaseComplete
struct UAthenaDirectAcquisitionMTXDetails_C_HandlePurchaseComplete_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_221E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FPurchasedItemInfo>            PurchasedItems;                                    // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FString                                OfferId;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAcquisitionMTXDetails_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAcquisitionMTXDetails_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__GiftButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAcquisitionMTXDetails_C_BndEvt__GiftButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BP_OnActivated
struct UAthenaDirectAcquisitionMTXDetails_C_BP_OnActivated_Params
{
public:
};

// 0x193 (0x193 - 0x0)
// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails
struct UAthenaDirectAcquisitionMTXDetails_C_ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_221F[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaAccountContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAccountContext*                 CallFunc_GetContext_ReturnValue_1;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCurrentSeasonNumberAsText_ReturnValue; // 0x18(0x18)()
	class FText                                  CallFunc_GetCurrentSeasonNumberAsText_ReturnValue_1; // 0x30(0x18)()
	bool                                         K2Node_CustomEvent_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2220[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FPurchasedItemInfo>            K2Node_CustomEvent_PurchasedItems;                 // 0x50(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class FString                                K2Node_CustomEvent_OfferId;                        // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x70(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x80(0x10)(ZeroConstructor, NoDestructor)
	class UAthenaAccountContext*                 CallFunc_GetContext_ReturnValue_2;                 // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCurrentChapterNumberAsText_ReturnValue; // 0xA0(0x18)()
	class FString                                CallFunc_GetOfferId_ReturnValue;                   // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xC8(0x10)(ZeroConstructor, NoDestructor)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_1;               // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue_3;                 // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOfferId_ReturnValue_1;                 // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2221[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleBack_PassThrough;                   // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2222[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2223[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_2;               // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGiftable_ReturnValue;                   // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2224[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_GetOfferId_ReturnValue_2;                 // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOfferPurchaseError               CallFunc_CanGiftOffer_ReturnValue;                 // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2225[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue_4;                 // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EOfferPurchaseError               CallFunc_PurchaseOffer_ReturnValue;                // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2226[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue_1;               // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2227[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UGiftingScreen_C*                      CallFunc_Create_ReturnValue;                       // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_3;               // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2228[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue_5;                 // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOfferPurchaseError               CallFunc_CanPurchaseOffer_ReturnValue;             // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x192(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
