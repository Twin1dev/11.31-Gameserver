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

// 0xD8 (0x100 - 0x28)
// Class ClothingSystemRuntimeNv.ClothConfigNv
class UClothConfigNv : public UClothConfigBase
{
public:
	enum class EClothingWindMethod               WindMethod;                                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4349[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FClothConstraintSetup                 VerticalConstraintConfig;                          // 0x2C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup                 HorizontalConstraintConfig;                        // 0x3C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup                 BendConstraintConfig;                              // 0x4C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup                 ShearConstraintConfig;                             // 0x5C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SelfCollisionRadius;                               // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionStiffness;                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionCullScale;                            // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Damping;                                           // 0x78(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Friction;                                          // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindDragCoefficient;                               // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindLiftCoefficient;                               // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearDrag;                                        // 0x90(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularDrag;                                       // 0x9C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearInertiaScale;                                // 0xA8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularInertiaScale;                               // 0xB4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CentrifugalInertiaScale;                           // 0xC0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SolverFrequency;                                   // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StiffnessFrequency;                                // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GravityOverride;                                   // 0xD8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGravityOverride;                               // 0xE4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_434A[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        TetherStiffness;                                   // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TetherLimit;                                       // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionThickness;                                // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimDriveSpringStiffness;                          // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimDriveDamperStiffness;                          // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_434B[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothConfigNv");
		return Clss;
	}

};

// 0xE8 (0x1A0 - 0xB8)
// Class ClothingSystemRuntimeNv.ClothingAssetNv
class UClothingAssetNv : public UClothingAssetCommon
{
public:
	struct FClothConfig                          ClothConfig;                                       // 0xB8(0xD4)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_434C[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FClothLODData>                 LODData;                                           // 0x190(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothingAssetNv");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothingSimulationFactoryNv");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
public:
	uint8                                        Pad_434D[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothingSimulationInteractorNv");
		return Clss;
	}

	void SetAnimDriveSpringStiffness(float InStiffness);
	void SetAnimDriveDamperStiffness(float InStiffness);
	void EnableGravityOverride(struct FVector& InVector);
	void DisableGravityOverride();
};

// 0x0 (0x90 - 0x90)
// Class ClothingSystemRuntimeNv.ClothLODDataNv
class UClothLODDataNv : public UClothLODDataCommon
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothLODDataNv");
		return Clss;
	}

};

// 0x40 (0x120 - 0xE0)
// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv
class UClothPhysicalMeshDataNv : public UClothPhysicalMeshDataBase
{
public:
	TArray<float>                                MaxDistances;                                      // 0xE0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BackstopDistances;                                 // 0xF0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BackstopRadiuses;                                  // 0x100(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                AnimDriveMultipliers;                              // 0x110(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothPhysicalMeshDataNv");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
