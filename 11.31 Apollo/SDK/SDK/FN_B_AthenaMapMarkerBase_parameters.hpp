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
// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.UserConstructionScript
struct AB_AthenaMapMarkerBase_C_UserConstructionScript_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__FinishedFunc
struct AB_AthenaMapMarkerBase_C_SpawnMarkerAnim__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__UpdateFunc
struct AB_AthenaMapMarkerBase_C_SpawnMarkerAnim__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__FinishedFunc
struct AB_AthenaMapMarkerBase_C_OnProtoMarkerPlaced__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__UpdateFunc
struct AB_AthenaMapMarkerBase_C_OnProtoMarkerPlaced__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerPlaced
struct AB_AthenaMapMarkerBase_C_OnMarkerPlaced_Params
{
public:
};

// 0x108 (0x108 - 0x0)
// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnSetupMarker
struct AB_AthenaMapMarkerBase_C_OnSetupMarker_Params
{
public:
	struct FFortWorldMarkerData                  MarkerData;                                        // 0x0(0x108)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerColorChanged
struct AB_AthenaMapMarkerBase_C_OnMarkerColorChanged_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x196 (0x196 - 0x0)
// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.ExecuteUbergraph_B_AthenaMapMarkerBase
struct AB_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortWorldMarkerData                  K2Node_Event_MarkerData;                           // 0x8(0x108)(ConstParm)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5672[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x114(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x120(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortWorldMarkerType              Temp_byte_Variable;                                // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default;                             // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5673[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_1;                       // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_2;                       // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x148(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x154(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5674[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5675[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLinearColor                          K2Node_Event_InColor;                              // 0x174(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0x184(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x195(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
