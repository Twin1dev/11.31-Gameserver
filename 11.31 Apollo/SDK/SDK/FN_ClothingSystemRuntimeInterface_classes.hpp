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
// Class ClothingSystemRuntimeInterface.ClothConfigBase
class UClothConfigBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothConfigBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
class UClothSharedSimConfigBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothSharedSimConfigBase");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothingAssetBase
class UClothingAssetBase : public UObject
{
public:
	class FString                                ImportedFilePath;                                  // 0x28(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AssetGuid;                                         // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothingAssetBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
class UClothingSimulationFactory : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothingSimulationFactory");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
class UClothingSimulationInteractor : public UObject
{
public:
	uint8                                        Pad_4301[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothingSimulationInteractor");
		return Clss;
	}

	void PhysicsAssetUpdated();
	void ClothConfigUpdated();
};

// 0xB8 (0xE0 - 0x28)
// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase
class UClothPhysicalMeshDataBase : public UObject
{
public:
	TArray<struct FVector>                       Vertices;                                          // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Normals;                                           // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               Indices;                                           // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                InverseMasses;                                     // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FClothVertBoneData>            BoneData;                                          // 0x68(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumFixedVerts;                                     // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxBoneWeights;                                    // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                               SelfCollisionIndices;                              // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4302[0x50];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothPhysicalMeshDataBase");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
