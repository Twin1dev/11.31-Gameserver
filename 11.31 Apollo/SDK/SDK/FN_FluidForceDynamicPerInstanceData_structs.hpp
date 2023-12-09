#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x130 - 0x0)
// UserDefinedStruct FluidForceDynamicPerInstanceData.FluidForceDynamicPerInstanceData
struct FFluidForceDynamicPerInstanceData
{
public:
	struct FFluidForceDynamic                    ForceInfo_2_A6A35E3243FAF59D161A5FBAA2F6F2B1;      // 0x0(0x70)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FVector                               ComponentLocation_13_959307184C8E5CCACA55FC8378D92CFD; // 0x70(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ComponentVelocity_5_4F6589474918826DF8A6468CF0F2C361; // 0x7C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoundsRadius_30_ADFF818743BE39AC4A481D995CB50D03;  // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8;    // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FVector>            SocketLocationMap_21_ABF6AA244A5F84728A5E83BE2328C7FA; // 0x90(0x50)(Edit, BlueprintVisible, ZeroConstructor)
	TMap<class FName, struct FVector>            SocketVelocityMap_26_82B0E24B45935A12E1949F918A59A537; // 0xE0(0x50)(Edit, BlueprintVisible, ZeroConstructor)
};

}


