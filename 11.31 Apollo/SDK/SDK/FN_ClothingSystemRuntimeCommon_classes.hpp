#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
class UClothingAssetCustomData : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothingAssetCustomData");
		return Clss;
	}

};

// 0x70 (0xB8 - 0x48)
// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
class UClothingAssetCommon : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                         PhysicsAsset;                                      // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClothSharedSimConfigBase*             ClothSharedSimConfig;                              // 0x50(0x8)(Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClothConfigBase*                      ClothSimConfig;                                    // 0x58(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClothConfigBase*                      ChaosClothSimConfig;                               // 0x60(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClothLODDataCommon*>           ClothLODData;                                      // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                LodMap;                                            // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          UsedBoneNames;                                     // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                UsedBoneIndices;                                   // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReferenceBoneIndex;                                // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4347[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClothingAssetCustomData*              CustomData;                                        // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothingAssetCommon");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class ClothingSystemRuntimeCommon.ClothLODDataCommon
class UClothLODDataCommon : public UObject
{
public:
	class UClothPhysicalMeshDataBase*            PhysicalMeshData;                                  // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothCollisionData                   CollisionData;                                     // 0x30(0x40)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_4348[0x20];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothLODDataCommon");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
