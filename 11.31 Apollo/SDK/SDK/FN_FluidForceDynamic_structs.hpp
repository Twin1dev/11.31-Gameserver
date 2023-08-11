#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// UserDefinedStruct FluidForceDynamic.FluidForceDynamic
struct FFluidForceDynamic
{
public:
	enum class EFluidDynamicForceMeshType        ForceType_28_DDC16EE543D2DFD3BA29C49D32198C9C;     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5413[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        ForceRadius_32_C31B527C4C367A5CA5E1DF8E49E76234;   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForceStrength_33_2CAA30794D1EFF60AE1C3491D011CECF; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5414[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USceneComponent*                       ForceComponent_34_ABF6640F40D37677EF6F809E09046055; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MaterialOverride_25_5A792CE8489A59E5D9B24F9E4DCFE94A; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFluidForceSocketInfo                 SkeletalMeshSetup_31_51A4130440BAFFBA1DA0FE83E942A30A; // 0x20(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
