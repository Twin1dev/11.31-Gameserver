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

// 0xA8 (0xA8 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.GetBonusText
struct UStoreMain_MTXOffer_C_GetBonusText_Params
{
public:
	class UFortStoreFrontOfferInfo*              OfferInfo;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BonusText;                                         // 0x8(0x18)(Parm, OutParm)
	int32                                        CallFunc_GetBonusQuantity_ReturnValue;             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetBaseQuantity_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6479[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x90(0x18)()
};

// 0x30 (0x30 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTextOutlineColor
struct UStoreMain_MTXOffer_C_SetTextOutlineColor_Params
{
public:
	class UTextBlock*                            Text;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMtxGradient                      Gradient;                                          // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicOutlineMaterial_ReturnValue;    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTileSize
struct UStoreMain_MTXOffer_C_SetTileSize_Params
{
public:
	enum class EFortMtxOfferDisplaySize          DisplaySize;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_647A[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x8(0x50)(HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerReset
struct UStoreMain_MTXOffer_C_TriggerReset_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitialReset
struct UStoreMain_MTXOffer_C_InitialReset_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerIntro
struct UStoreMain_MTXOffer_C_TriggerIntro_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ShowDetails
struct UStoreMain_MTXOffer_C_ShowDetails_Params
{
public:
	class UStoreMain_OfferDetails_C*             StoreOfferDetailsWidget;                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumGrantedItems_ReturnValue;           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortMtxStoreOfferType            CallFunc_GetFortStoreOfferType_ReturnValue;        // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_647B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_1;               // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_647C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_647D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaDirectAcquisitionOfferDetailsWidget_C* CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMtxStoreRootBase*                 CallFunc_GetStoreRoot_ReturnValue;                 // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_2;               // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue_1;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_647E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStoreMain_OfferDetails_C*             CallFunc_Create_ReturnValue_1;                     // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2B8 (0x2B8 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer
struct UStoreMain_MTXOffer_C_InitOffer_Params
{
public:
	class UFortMtxOfferData*                     DisplayAsset;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMtxGradient                      Gradient;                                          // 0x8(0x20)(Edit, BlueprintVisible, NoDestructor)
	struct FSlateBrush                           TileImage;                                         // 0x28(0x88)(Edit, BlueprintVisible)
	int32                                        TotalQuantity;                                     // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BonusQuantity;                                     // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              OfferInfo;                                         // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BonusMTX;                                          // 0xC0(0x18)(Edit, BlueprintVisible)
	class FText                                  BaseMtx;                                           // 0xD8(0x18)(Edit, BlueprintVisible)
	class UMaterial*                             OfferMaterial;                                     // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0xFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_647F[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x100(0x88)()
	class UTexture2D*                            CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSalePrice_SalePrice;                   // 0x190(0x18)()
	bool                                         CallFunc_GetSalePrice_ReturnValue;                 // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6480[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetNormalPrice_ReturnValue;               // 0x1B0(0x18)()
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6481[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x1D0(0x18)()
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6482[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x1F0(0x18)()
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6483[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetName_ReturnValue;                      // 0x210(0x18)()
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6484[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_GetBonusQuantity_ReturnValue;             // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetBonusText_BonusText;                   // 0x230(0x18)()
	enum class EFortMtxStoreOfferType            CallFunc_GetFortStoreOfferType_ReturnValue;        // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6485[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6486[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortMtxOfferData*                     CallFunc_GetOfferDisplayAsset_ReturnValue;         // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6487[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_1;               // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPurchasingAvailable_ReturnValue;        // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortMtxOfferDisplaySize          CallFunc_GetOfferDisplaySize_ReturnValue;          // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x27A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x27B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6488[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue_2;               // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBannerOverrideTag_ReturnValue;         // 0x288(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6489[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_GetTotalQuantity_ReturnValue;             // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default_3;                           // 0x2A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.Construct
struct UStoreMain_MTXOffer_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnHovered
struct UStoreMain_MTXOffer_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnUnhovered
struct UStoreMain_MTXOffer_C_BP_OnUnhovered_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.PreConstruct
struct UStoreMain_MTXOffer_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferSet
struct UStoreMain_MTXOffer_C_OnOfferSet_Params
{
public:
};

// 0x29 (0x29 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer
struct UStoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_648A[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMtxOfferDisplaySize          CallFunc_GetOfferDisplaySize_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_648B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature
struct UStoreMain_MTXOffer_C_AboutToShowDetails__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
