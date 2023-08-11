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

// 0x2A (0x2A - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.CanPurchaseMtxPriceOffer
struct UStoreMain_RMT_OfferDetails_C_CanPurchaseMtxPriceOffer_Params
{
public:
	int32                                        PirceIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOfferId_ReturnValue;                   // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EOfferPurchaseError               CallFunc_CanPurchaseOffer_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.SetupCurrencyImage
struct UStoreMain_RMT_OfferDetails_C_SetupCurrencyImage_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A6B[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMtxStoreOfferType            CallFunc_GetFortStoreOfferType_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_1;               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPriceInRealMoney_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A6D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x28(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A6E[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_2;               // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPriceItem_RequiredItemCount;           // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAccountItemDefinition*            CallFunc_GetPriceItem_ReturnValue;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x888 (0x888 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.Set colors from data Asset
struct UStoreMain_RMT_OfferDetails_C_Set_colors_from_data_Asset_Params
{
public:
	struct FLinearColor                          Upsell_Primary;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Upsell_Secondary;                                  // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Text_Color;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Base_Color;                                    // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A70[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLinearColor                          Background;                                        // 0x34(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Gradient;                                          // 0x44(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A71[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x58(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x80(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0xA8(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0xD0(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0xF8(0x28)()
	float                                        CallFunc_BreakColor_R;                             // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G;                             // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B;                             // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A;                             // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x130(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0x140(0x28)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x168(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x1F0(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x278(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_3;                    // 0x300(0x88)()
	struct FScrollBarStyle                       K2Node_MakeStruct_ScrollBarStyle;                  // 0x388(0x4D0)()
	bool                                         Temp_bool_Variable;                                // 0x858(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x859(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A72[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLinearColor                          K2Node_Select_Default;                             // 0x85C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_1;                           // 0x86C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A73[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.UpdatePurchaseButton
struct UStoreMain_RMT_OfferDetails_C_UpdatePurchaseButton_Params
{
public:
	bool                                         MtxPrice;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bCannotGiftItem;                                   // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bCannotAffordItem;                                 // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A74[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        PriceIndex;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A75[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)()
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)()
	bool                                         Temp_bool_Variable_1;                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A76[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Temp_text_Variable_2;                              // 0x48(0x18)()
	bool                                         CallFunc_CanPurchaseMtxPriceOffer_ReturnValue;     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A77[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGiftable_ReturnValue;                   // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPriceInMTX_ReturnValue;                 // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A78[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_1;               // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AreGrantedItemsOwned_ReturnValue;         // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A79[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_Select_Default;                             // 0x88(0x18)()
	class FText                                  K2Node_Select_Default_1;                           // 0xA0(0x18)()
};

// 0x7D (0x7D - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.InitDetailAttributes
struct UStoreMain_RMT_OfferDetails_C_InitDetailAttributes_Params
{
public:
	struct FLinearColor                          TertiaryColor;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMtxOfferData*                     CallFunc_GetOfferDisplayAsset_ReturnValue;         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URMT_Offer_EntryRow_C*                 CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMtxDetailsAttribute              CallFunc_Array_Get_Item;                           // 0x40(0x30)()
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.SetPurchaseButtonText
struct UStoreMain_RMT_OfferDetails_C_SetPurchaseButtonText_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.IsGiftingStorefrontOffer
struct UStoreMain_RMT_OfferDetails_C_IsGiftingStorefrontOffer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A7B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGiftingStorefrontOffer_ReturnValue;     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA1 (0xA1 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.InitCurrency
struct UStoreMain_RMT_OfferDetails_C_InitCurrency_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A7C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x18(0x18)()
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_1;               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_2;               // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetBonusQuantity_ReturnValue;             // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTotalQuantity_ReturnValue;             // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A7D[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_3;               // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_4;               // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetBonusQuantity_ReturnValue_1;           // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTotalQuantity_ReturnValue_1;           // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x68(0x18)()
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A7E[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_GetBaseQuantity_ReturnValue;              // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x88(0x18)()
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.UnregisterInput
struct UStoreMain_RMT_OfferDetails_C_UnregisterInput_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.RegisterInput
struct UStoreMain_RMT_OfferDetails_C_RegisterInput_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.PopDetails
struct UStoreMain_RMT_OfferDetails_C_PopDetails_Params
{
public:
};

// 0xBB (0xBB - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.Init
struct UStoreMain_RMT_OfferDetails_C_Init_Params
{
public:
	class UFortMtxOfferData*                     DisplayAsset;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A7F[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x10(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x28(0x18)()
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_1;        // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A80[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSalePrice_SalePrice;                   // 0x50(0x18)()
	bool                                         CallFunc_GetSalePrice_ReturnValue;                 // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A81[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetNormalPrice_ReturnValue;               // 0x70(0x18)()
	class FText                                  CallFunc_GetName_ReturnValue;                      // 0x88(0x18)()
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_1;               // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMtxOfferData*                     CallFunc_GetOfferDisplayAsset_ReturnValue;         // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.HandleBack
struct UStoreMain_RMT_OfferDetails_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.OnPurchasingStarted
struct UStoreMain_RMT_OfferDetails_C_OnPurchasingStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.ResetPurchaseButtonText
struct UStoreMain_RMT_OfferDetails_C_ResetPurchaseButtonText_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.OnOfferSet
struct UStoreMain_RMT_OfferDetails_C_OnOfferSet_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function StoreMain_RMT_OfferDetails.StoreMain_RMT_OfferDetails_C.ExecuteUbergraph_StoreMain_RMT_OfferDetails
struct UStoreMain_RMT_OfferDetails_C_ExecuteUbergraph_StoreMain_RMT_OfferDetails_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
