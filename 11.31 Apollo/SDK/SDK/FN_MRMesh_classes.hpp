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
// Class MRMesh.MeshReconstructorBase
class UMeshReconstructorBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshReconstructorBase");
		return Clss;
	}

	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	void ConnectMRMesh(class UMRMeshComponent* Mesh);
};

// 0x70 (0x260 - 0x1F0)
// Class MRMesh.MockDataMeshTrackerComponent
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	UMulticastInlineDelegateProperty_            OnMeshTrackerUpdated;                              // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         ScanWorld;                                         // 0x200(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequestNormals;                                    // 0x201(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequestVertexConfidence;                           // 0x202(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeshTrackerVertexColorMode       VertexColorMode;                                   // 0x203(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FColor>                        BlockVertexColors;                                 // 0x208(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          VertexColorFromConfidenceZero;                     // 0x218(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          VertexColorFromConfidenceOne;                      // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateInterval;                                    // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMRMeshComponent*                      MRMesh;                                            // 0x240(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4D[0x18];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MockDataMeshTrackerComponent");
		return Clss;
	}

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32 Index, TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector>& Normals, TArray<float>& Confidence);
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

// 0x70 (0x450 - 0x3E0)
// Class MRMesh.MRMeshComponent
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	class UMaterialInterface*                    Material;                                          // 0x3E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCreateMeshProxySections;                          // 0x3E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUpdateNavMeshOnMeshUpdate;                        // 0x3E9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bNeverCreateCollisionMesh;                         // 0x3EA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F4E[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBodySetup*                            CachedBodySetup;                                   // 0x3F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UBodySetup*>                    BodySetups;                                        // 0x3F8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    WireframeMaterial;                                 // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F4F[0x40];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MRMeshComponent");
		return Clss;
	}

	bool IsConnected();
	void ForceNavMeshUpdate();
	void Clear();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
