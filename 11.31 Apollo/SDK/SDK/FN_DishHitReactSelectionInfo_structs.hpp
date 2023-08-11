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

// 0x14 (0x14 - 0x0)
// UserDefinedStruct DishHitReactSelectionInfo.DishHitReactSelectionInfo
struct FDishHitReactSelectionInfo
{
public:
	float                                        MinYawToInstigator_7_CD66F5534D2342817E20CB958F42A05E; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxYawToInstigator_9_62A6FC5442FA6451356E01968FB0A85F; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstBlock_25_919B150F474766AEAD087EA3A84DC138;  // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  MontageSectionName_17_C1FAF635407E1271A9D38598E5247255; // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
