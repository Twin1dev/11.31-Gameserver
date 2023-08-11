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

// 0x18 (0x18 - 0x0)
// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.Set Sales Text
struct UAthenaDirectAcquisitionOffer_SalesTextBanner_C_Set_Sales_Text_Params
{
public:
	class FText                                  Sales_Text;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.Construct
struct UAthenaDirectAcquisitionOffer_SalesTextBanner_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.PreConstruct
struct UAthenaDirectAcquisitionOffer_SalesTextBanner_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x55 (0x55 - 0x0)
// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner
struct UAthenaDirectAcquisitionOffer_SalesTextBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Temp_float_Variable;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_Sales_Text;                     // 0x10(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x30(0x18)()
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
