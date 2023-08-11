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

// 0x10 (0x3F0 - 0x3E0)
// Class Water.LakeCollisionComponent
class ULakeCollisionComponent : public UPrimitiveComponent
{
public:
	class UBodySetup*                            CachedBodySetup;                                   // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               BoxExtent;                                         // 0x3E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_222B[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LakeCollisionComponent");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class Water.NiagaraDataInterfaceWater
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{
public:
	class AWaterBody*                            SourceBody;                                        // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceWater");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Water.NiagaraWaterFunctionLibrary
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraWaterFunctionLibrary");
		return Clss;
	}

	void SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody);
};

// 0x0 (0x28 - 0x28)
// Class Water.WaterBodyGenerator
class UWaterBodyGenerator : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaterBodyGenerator");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class Water.RiverGenerator
class URiverGenerator : public UWaterBodyGenerator
{
public:
	TSoftObjectPtr<class UStaticMesh>            RiverMesh;                                         // 0x28(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RiverGenerator");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class Water.LakeGenerator
class ULakeGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                  LakeMeshComp;                                      // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                         LakeCollisionComp;                                 // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULakeCollisionComponent*               LakeCollision;                                     // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UStaticMesh>            LakeMesh;                                          // 0x40(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LakeGenerator");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class Water.OceanGenerator
class UOceanGenerator : public UWaterBodyGenerator
{
public:
	class UBoxComponent*                         OceanCollision;                                    // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OceanGenerator");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class Water.CustomMeshGenerator
class UCustomMeshGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                  MeshComp;                                          // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CustomMeshGenerator");
		return Clss;
	}

};

// 0x648 (0x860 - 0x218)
// Class Water.WaterBody
class AWaterBody : public AActor
{
public:
	uint8                                        Pad_222C[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class UPrimitiveComponent*>           CollisionComponents;                               // 0x220(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWaterWaveParams>              WaveParams;                                        // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        WaveSpeedFactor;                                   // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetWaveMaskDepth;                               // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WaveParamTextureOffset;                            // 0x250(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWaterBodyType                    WaterBodyType;                                     // 0x254(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideWaterMesh;                                // 0x255(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_222D[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UStaticMesh*                           WaterMeshOverride;                                 // 0x258(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    WaterMaterial;                                     // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    RiverToLakeTransitionMat;                          // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    RiverToOceanTransitionMat;                         // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OverlapMaterialPriority;                           // 0x278(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CollisionProfileName;                              // 0x27C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               OceanCollisionExtents;                             // 0x284(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxWaveHeight;                                     // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_222E[0xC];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FUnderwaterPostProcessSettings        UnderwaterPostProcessSettings;                     // 0x2A0(0x540)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UWaterSplineComponent*                 SplineComp;                                        // 0x7E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FWaterCurveSettings                   CurveSettings;                                     // 0x7E8(0x20)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bAffectsLandscape;                                 // 0x808(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_222F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWaterBodyGenerator*                   Generator;                                         // 0x810(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterSplineMetadata*                  WaterSplineMetadata;                               // 0x818(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              WaterMaterialInstance;                             // 0x820(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              RiverToLakeTransitionMID;                          // 0x828(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              RiverToOceanTransitionMID;                         // 0x830(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TLazyObjectPtr<class AWaterBodyIsland>> Islands;                                           // 0x838(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ALandscapeProxy>        Landscape;                                         // 0x848(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanAffectNavigation;                              // 0x850(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2230[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSubclassOf<class UNavAreaBase>              WaterNavAreaClass;                                 // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaterBody");
		return Clss;
	}

	void OnWaterBodyFinishedUpdating();
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
	class UWaterSplineComponent* GetWaterSpline();
	TArray<class UStaticMeshComponent*> GetWaterMeshComponents();
	class UMaterialInstanceDynamic* GetWaterMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
	TArray<class AWaterBodyIsland*> GetIslands();
};

// 0x8 (0x220 - 0x218)
// Class Water.WaterBodyIsland
class AWaterBodyIsland : public AActor
{
public:
	class UWaterSplineComponent*                 SplineComp;                                        // 0x218(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaterBodyIsland");
		return Clss;
	}

	class UWaterSplineComponent* GetWaterSpline();
};

// 0x0 (0x218 - 0x218)
// Class Water.WaterBodyProxy
class AWaterBodyProxy : public AActor
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaterBodyProxy");
		return Clss;
	}

};

// 0x10 (0x228 - 0x218)
// Class Water.WaterMeshActor
class AWaterMeshActor : public AActor
{
public:
	class UTexture2D*                            WaterVelocityTexture;                              // 0x218(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWaterMeshComponent*                   WaterMesh;                                         // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaterMeshActor");
		return Clss;
	}

};

// 0x100 (0x500 - 0x400)
// Class Water.WaterMeshComponent
class UWaterMeshComponent : public UMeshComponent
{
public:
	int32                                        ForceCollapseDensityLevel;                         // 0x400(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileSize;                                          // 0x404(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             ExtentInTiles;                                     // 0x408(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    FarDistanceMaterial;                               // 0x410(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarDistanceMeshExtent;                             // 0x418(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2231[0xD4];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        TessellationFactor;                                // 0x4F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LODScale;                                          // 0x4F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2232[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaterMeshComponent");
		return Clss;
	}

	bool IsEnabled();
};

// 0x8 (0x40 - 0x38)
// Class Water.WaterRuntimeSettings
class UWaterRuntimeSettings : public UDeveloperSettings
{
public:
	enum class ECollisionChannel                 CollisionChannelForWaterTraces;                    // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2233[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaterRuntimeSettings");
		return Clss;
	}

};

// 0x28 (0x4F0 - 0x4C8)
// Class Water.WaterSplineComponent
class UWaterSplineComponent : public USplineComponent
{
public:
	struct FWaterSplineCurveDefaults             WaterSplineDefaults;                               // 0x4C8(0x14)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaterSplineCurveDefaults             PreviousWaterSplineDefaults;                       // 0x4DC(0x14)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaterSplineComponent");
		return Clss;
	}

};

// 0x90 (0xB8 - 0x28)
// Class Water.WaterSplineMetadata
class UWaterSplineMetadata : public USplineMetadata
{
public:
	struct FInterpCurveFloat                     Depth;                                             // 0x28(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     WaterVelocityScalar;                               // 0x40(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     ShorelineWidth;                                    // 0x58(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     RiverWidth;                                        // 0x70(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     AudioIntensity;                                    // 0x88(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveVector                    WaterVelocity;                                     // 0xA0(0x18)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaterSplineMetadata");
		return Clss;
	}

};

// 0x70 (0xA0 - 0x30)
// Class Water.WaterSubsystem
class UWaterSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_2235[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UMulticastInlineDelegateProperty_            OnCameraUnderwaterStateChanged;                    // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnWaterScalabilityChanged;                         // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AWaterMeshActor*                       WaterMeshActor;                                    // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2236[0x18];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialParameterCollection*          MaterialParameterCollection;                       // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2237[0x20];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaterSubsystem");
		return Clss;
	}

	void PrintToWaterLog(const class FString& Message, bool bWarning);
	bool IsWaterRenderingEnabled();
	bool IsUnderwaterPostProcessEnabled();
	bool IsShallowWaterSimulationEnabled();
	float GetSmoothedWorldTimeSeconds();
	int32 GetShallowWaterSimulationRenderTargetSize();
	int32 GetShallowWaterMaxImpulseForces();
	int32 GetShallowWaterMaxDynamicForces();
	float GetCameraUnderwaterDepth();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
