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

// 0x10 (0x68 - 0x58)
// Class Niagara.MovieSceneNiagaraTrack
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x58(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraTrack");
		return Clss;
	}

};

// 0x30 (0x98 - 0x68)
// Class Niagara.MovieSceneNiagaraParameterTrack
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraParameterTrack");
		return Clss;
	}

};

// 0x0 (0x98 - 0x98)
// Class Niagara.MovieSceneNiagaraBoolParameterTrack
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraBoolParameterTrack");
		return Clss;
	}

};

// 0x0 (0x98 - 0x98)
// Class Niagara.MovieSceneNiagaraColorParameterTrack
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraColorParameterTrack");
		return Clss;
	}

};

// 0x0 (0x98 - 0x98)
// Class Niagara.MovieSceneNiagaraFloatParameterTrack
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraFloatParameterTrack");
		return Clss;
	}

};

// 0x0 (0x98 - 0x98)
// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraIntegerParameterTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class Niagara.MovieSceneNiagaraSystemSpawnSection
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraSystemSpawnSection");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class Niagara.MovieSceneNiagaraSystemTrack
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraSystemTrack");
		return Clss;
	}

};

// 0x8 (0xA0 - 0x98)
// Class Niagara.MovieSceneNiagaraVectorParameterTrack
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	int32                                        ChannelsUsed;                                      // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19B9[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraVectorParameterTrack");
		return Clss;
	}

};

// 0x8 (0x220 - 0x218)
// Class Niagara.NiagaraActor
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x218(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraActor");
		return Clss;
	}

};

// 0x1B8 (0x590 - 0x3D8)
// Class Niagara.NiagaraComponent
class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                        Asset;                                             // 0x3D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraTickBehavior              TickBehavior;                                      // 0x3E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FNiagaraUserRedirectionParameterStore OverrideParameters;                                // 0x3E8(0x108)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        bForceSolo : 1;                                    // Mask: 0x1, PropSize: 0x10x4F0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_16B : 7;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_19C4[0x27];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x518(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRenderingEnabled : 1;                             // Mask: 0x2, PropSize: 0x10x518(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAutoManageAttachment : 1;                         // Mask: 0x4, PropSize: 0x10x518(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16C : 5;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_19C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        MaxTimeBeforeForceUpdateTransform;                 // 0x51C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C6[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UMulticastInlineDelegateProperty_            OnSystemFinished;                                  // 0x528(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>        AutoAttachParent;                                  // 0x538(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AutoAttachSocketName;                              // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachLocationRule;                            // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachRotationRule;                            // 0x549(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachScaleRule;                               // 0x54A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C7[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        PreviewDetailLevel;                                // 0x54C(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviewLODDistance;                                // 0x550(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnablePreviewDetailLevel : 1;                     // Mask: 0x1, PropSize: 0x10x554(0x1)(Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnablePreviewLODDistance : 1;                     // Mask: 0x2, PropSize: 0x10x554(0x1)(Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C8[0x3B];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraComponent");
		return Clss;
	}

	void SetVariableVec4(class FName InVariableName, struct FVector4& InValue);
	void SetVariableVec3(class FName InVariableName, const struct FVector& InValue);
	void SetVariableVec2(class FName InVariableName, const struct FVector2D& InValue);
	void SetVariableQuat(class FName InVariableName, struct FQuat& InValue);
	void SetVariableObject(class FName InVariableName, class UObject* Object);
	void SetVariableMaterial(class FName InVariableName, class UMaterialInterface* Object);
	void SetVariableLinearColor(class FName InVariableName, struct FLinearColor& InValue);
	void SetVariableInt(class FName InVariableName, int32 InValue);
	void SetVariableFloat(class FName InVariableName, float InValue);
	void SetVariableBool(class FName InVariableName, bool InValue);
	void SetVariableActor(class FName InVariableName, class AActor* Actor);
	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
	void SetPreviewDetailLevel(bool bEnablePreviewDetailLevel, int32 PreviewDetailLevel);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(const class FString& InVariableName, struct FVector4& InValue);
	void SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableQuat(const class FString& InVariableName, struct FQuat& InValue);
	void SetNiagaraVariableObject(const class FString& InVariableName, class UObject* Object);
	void SetNiagaraVariableLinearColor(const class FString& InVariableName, struct FLinearColor& InValue);
	void SetNiagaraVariableInt(const class FString& InVariableName, int32 InValue);
	void SetNiagaraVariableFloat(const class FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const class FString& InVariableName, bool InValue);
	void SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetForceSolo(bool bInForceSolo);
	void SetDesiredAge(float InDesiredAge);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAsset(class UNiagaraSystem* InAsset);
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	float GetSeekDelta();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName);
	float GetMaxSimTime();
	bool GetForceSolo();
	float GetDesiredAge();
	class UNiagaraDataInterface* GetDataInterface(const class FString& Name);
	class UNiagaraSystem* GetAsset();
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
};

// 0x58 (0x80 - 0x28)
// Class Niagara.NiagaraComponentPool
class UNiagaraComponentPool : public UObject
{
public:
	TMap<class UNiagaraSystem*, struct FNCPool>  WorldParticleSystemPools;                          // 0x28(0x50)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19C9[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraComponentPool");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraDataInterface
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	uint8                                        Pad_19CA[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterface");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceCollisionQuery
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_19CB[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceCollisionQuery");
		return Clss;
	}

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceCurveBase
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                ShaderLUT;                                         // 0x38(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        LUTMinTime;                                        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTMaxTime;                                        // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTInvTimeRange;                                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTNumSamplesMinusOne;                             // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUseLUT : 1;                                       // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CC[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceCurveBase");
		return Clss;
	}

};

// 0x200 (0x260 - 0x60)
// Class Niagara.NiagaraDataInterfaceColorCurve
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            RedCurve;                                          // 0x60(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            GreenCurve;                                        // 0xE0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            BlueCurve;                                         // 0x160(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            AlphaCurve;                                        // 0x1E0(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceColorCurve");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceCurlNoise
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32                                       Seed;                                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CD[0xC];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceCurlNoise");
		return Clss;
	}

};

// 0x80 (0xE0 - 0x60)
// Class Niagara.NiagaraDataInterfaceCurve
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            Curve;                                             // 0x60(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceCurve");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraParticleCallbackHandler
class INiagaraParticleCallbackHandler : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraParticleCallbackHandler");
		return Clss;
	}

	void ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);
};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfaceExport
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding          CallbackHandlerParameter;                          // 0x38(0x30)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceExport");
		return Clss;
	}

};

// 0xA8 (0xE0 - 0x38)
// Class Niagara.NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:
	TSet<int32>                                  OutputShaderStages;                                // 0x38(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<int32>                                  IterationShaderStages;                             // 0x88(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CE[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceRWBase");
		return Clss;
	}

};

// 0x28 (0x108 - 0xE0)
// Class Niagara.NiagaraDataInterfaceGrid2D
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	int32                                        NumCellsX;                                         // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCellsY;                                         // 0xE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CellSize;                                          // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAttributes;                                     // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SetGridFromCellSize;                               // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               WorldBBoxMin;                                      // 0xF4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             WorldBBoxSize;                                     // 0x100(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid2D");
		return Clss;
	}

};

// 0x0 (0x108 - 0x108)
// Class Niagara.NiagaraDataInterfaceGrid2DCollection
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid2DCollection");
		return Clss;
	}

	void GetTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY);
	void GetRawTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY);
	void FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex);
	void FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32* TilesX, int32* TilesY);
};

// 0x30 (0x110 - 0xE0)
// Class Niagara.NiagaraDataInterfaceGrid3D
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                            NumVoxels;                                         // 0xE0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VoxelSize;                                         // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SetGridFromVoxelSize;                              // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               WorldBBoxMin;                                      // 0xF4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldBBoxSize;                                     // 0x100(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D2[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid3D");
		return Clss;
	}

};

// 0x8 (0x118 - 0x110)
// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32                                       MaxNeighborsPerVoxel;                              // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D3[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceNeighborGrid3D");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceParticleRead
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterface
{
public:
	class FString                                EmitterName;                                       // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceParticleRead");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceSimpleCounter
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceSimpleCounter");
		return Clss;
	}

};

// 0x88 (0xC0 - 0x38)
// Class Niagara.NiagaraDataInterfaceSkeletalMesh
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	class AActor*                                Source;                                            // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          MeshUserParameter;                                 // 0x40(0x30)(Edit, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SourceComponent;                                   // 0x70(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkeletalMesh_SkinningMode     SkinningMode;                                      // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class FName>                          SamplingRegions;                                   // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        WholeMeshLOD;                                      // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class FName>                          SpecificBones;                                     // 0x98(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          SpecificSockets;                                   // 0xA8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D6[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceSkeletalMesh");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceSpline
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                Source;                                            // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceSpline");
		return Clss;
	}

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfaceStaticMesh
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	class UStaticMesh*                           DefaultMesh;                                       // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Source;                                            // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  SourceComponent;                                   // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNDIStaticMeshSectionFilter           SectionFilter;                                     // 0x50(0x10)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D7[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceStaticMesh");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceTexture
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceTexture");
		return Clss;
	}

};

// 0x100 (0x160 - 0x60)
// Class Niagara.NiagaraDataInterfaceVector2DCurve
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x60(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xE0(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceVector2DCurve");
		return Clss;
	}

};

// 0x200 (0x260 - 0x60)
// Class Niagara.NiagaraDataInterfaceVector4Curve
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x60(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xE0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            ZCurve;                                            // 0x160(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            WCurve;                                            // 0x1E0(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceVector4Curve");
		return Clss;
	}

};

// 0x180 (0x1E0 - 0x60)
// Class Niagara.NiagaraDataInterfaceVectorCurve
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x60(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xE0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            ZCurve;                                            // 0x160(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceVectorCurve");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceVectorField
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                          Field;                                             // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileX;                                            // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileY;                                            // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileZ;                                            // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D8[0x5];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceVectorField");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEditorDataBase
class UNiagaraEditorDataBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEditorDataBase");
		return Clss;
	}

};

// 0x300 (0x328 - 0x28)
// Class Niagara.NiagaraEmitter
class UNiagaraEmitter : public UObject
{
public:
	bool                                         bLocalSpace;                                       // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeterminism;                                      // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D9[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        RandomSeed;                                        // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EParticleAllocationMode           AllocationMode;                                    // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        PreAllocationCount;                                // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties       UpdateScriptProps;                                 // 0x38(0x28)(NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties       SpawnScriptProps;                                  // 0x60(0x28)(NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties       EmitterSpawnScriptProps;                           // 0x88(0x28)(NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties       EmitterUpdateScriptProps;                          // 0xB0(0x28)(NativeAccessSpecifierPublic)
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0xD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FBox                                  FixedBounds;                                       // 0xDC(0x1C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MinDetailLevel;                                    // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDetailLevel;                                    // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraDetailsLevelScaleOverrides    GlobalSpawnCountScaleOverrides;                    // 0x100(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bInterpolatedSpawning : 1;                         // Mask: 0x1, PropSize: 0x10x114(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFixedBounds : 1;                                  // Mask: 0x2, PropSize: 0x10x114(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMinDetailLevel : 1;                            // Mask: 0x4, PropSize: 0x10x114(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxDetailLevel : 1;                            // Mask: 0x8, PropSize: 0x10x114(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideGlobalSpawnCountScale : 1;                // Mask: 0x10, PropSize: 0x10x114(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x20, PropSize: 0x10x114(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16D : 2;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_19DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        MaxDeltaTimePerTick;                               // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxUpdateIterations;                               // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<uint32>                                 SpawnStages;                                       // 0x120(0x50)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        bLimitDeltaTime : 1;                               // Mask: 0x1, PropSize: 0x10x170(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16E : 7;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_19DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FNiagaraFastPath_Module_EmitterScalability EmitterScalability;                                // 0x174(0x2C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraFastPath_Module_EmitterLifeCycle EmitterLifeCycle;                                  // 0x1A0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraFastPath_Module_SpawnRate> SpawnRate;                                         // 0x1B0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraFastPath_Module_SpawnPerUnit> SpawnPerUnit;                                      // 0x1C0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraFastPath_Module_SpawnBurstInstantaneous> SpawnBurstInstantaneous;                           // 0x1D0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraFastPathAttributeNames        SpawnFastPathAttributeNames;                       // 0x1E0(0x40)(NativeAccessSpecifierPublic)
	struct FNiagaraFastPathAttributeNames        UpdateFastPathAttributeNames;                      // 0x220(0x40)(NativeAccessSpecifierPublic)
	class FString                                UniqueEmitterName;                                 // 0x260(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraRendererProperties*>    RendererProperties;                                // 0x270(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps;                           // 0x280(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UNiagaraScript*                        GPUComputeScript;                                  // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          SharedEventGeneratorIds;                           // 0x298(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19DE[0x80];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEmitter");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEventReceiverEmitterAction");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32                                       NumParticles;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DF[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEventReceiverEmitterAction_SpawnParticles");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraFunctionLibrary
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraFunctionLibrary");
		return Clss;
	}

	class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod);
	class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod);
	void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
	void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh);
	void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
	class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraRendererProperties
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	int32                                        SortOrderHint;                                     // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E2[0x3];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraRendererProperties");
		return Clss;
	}

};

// 0x378 (0x3A8 - 0x30)
// Class Niagara.NiagaraLightRendererProperties
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	uint8                                        bUseInverseSquaredFalloff : 1;                     // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsTranslucency : 1;                          // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideRenderingEnabled : 1;                     // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16F : 5;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_19E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        RadiusScale;                                       // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ColorAdd;                                          // 0x38(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FNiagaraVariableAttributeBinding      LightRenderingEnabledBinding;                      // 0x48(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      LightExponentBinding;                              // 0xD8(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x168(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x1F8(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RadiusBinding;                                     // 0x288(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VolumetricScatteringBinding;                       // 0x318(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraLightRendererProperties");
		return Clss;
	}

};

// 0x6E8 (0x718 - 0x30)
// Class Niagara.NiagaraMeshRendererProperties
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	class UStaticMesh*                           ParticleMesh;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSortMode                  SortMode;                                          // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	uint8                                        bOverrideMaterials : 1;                            // Mask: 0x1, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x2, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_170 : 6;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_19E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FNiagaraMeshMaterialOverride>  OverrideMaterials;                                 // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraMeshFacingMode            FacingMode;                                        // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x58(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0xE8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x178(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MeshOrientationBinding;                            // 0x208(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ScaleBinding;                                      // 0x298(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x328(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x3B8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x448(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x4D8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x568(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CustomSortingBinding;                              // 0x5F8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x688(0x90)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraMeshRendererProperties");
		return Clss;
	}

};

// 0xD0 (0xF8 - 0x28)
// Class Niagara.NiagaraParameterCollectionInstance
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*           Collection;                                        // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              OverridenParameters;                               // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraParameterStore                ParameterStorage;                                  // 0x40(0xB8)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraParameterCollectionInstance");
		return Clss;
	}

	void SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue);
	void SetVector4Parameter(const class FString& InVariableName, struct FVector4& InValue);
	void SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue);
	void SetQuatParameter(const class FString& InVariableName, struct FQuat& InValue);
	void SetIntParameter(const class FString& InVariableName, int32 InValue);
	void SetFloatParameter(const class FString& InVariableName, float InValue);
	void SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue);
	void SetBoolParameter(const class FString& InVariableName, bool InValue);
	struct FVector GetVectorParameter(const class FString& InVariableName);
	struct FVector4 GetVector4Parameter(const class FString& InVariableName);
	struct FVector2D GetVector2DParameter(const class FString& InVariableName);
	struct FQuat GetQuatParameter(const class FString& InVariableName);
	int32 GetIntParameter(const class FString& InVariableName);
	float GetFloatParameter(const class FString& InVariableName);
	struct FLinearColor GetColorParameter(const class FString& InVariableName);
	bool GetBoolParameter(const class FString& InVariableName);
};

// 0x30 (0x58 - 0x28)
// Class Niagara.NiagaraParameterCollection
class UNiagaraParameterCollection : public UObject
{
public:
	class FName                                  Namespace;                                         // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraVariable>              Parameters;                                        // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UNiagaraParameterCollectionInstance*   DefaultInstance;                                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 CompileId;                                         // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraParameterCollection");
		return Clss;
	}

};

// 0x0 (0x218 - 0x218)
// Class Niagara.NiagaraPreviewBase
class ANiagaraPreviewBase : public AActor
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewBase");
		return Clss;
	}

	void SetSystem(class UNiagaraSystem* InSystem);
	void SetLabelText(class FText& InXAxisText, class FText& InYAxisText);
};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraPreviewAxis
class UNiagaraPreviewAxis : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis");
		return Clss;
	}

	int32 Num();
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, class FString* OutLabelText);
};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraPreviewAxis_InterpParamBase
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	class FName                                  Param;                                             // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Count;                                             // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19F1[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamBase");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int32                                        Min;                                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Max;                                               // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamInt32");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                        Min;                                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Max;                                               // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamFloat");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                             Min;                                               // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             Max;                                               // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamVector2D");
		return Clss;
	}

};

// 0x18 (0x50 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                               Min;                                               // 0x38(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               Max;                                               // 0x44(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamVector");
		return Clss;
	}

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	uint8                                        Pad_19F2[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector4                              Min;                                               // 0x40(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector4                              Max;                                               // 0x50(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamVector4");
		return Clss;
	}

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                          Min;                                               // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          Max;                                               // 0x48(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamLinearColor");
		return Clss;
	}

};

// 0x50 (0x268 - 0x218)
// Class Niagara.NiagaraPreviewGrid
class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                        System;                                            // 0x218(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraPreviewGridResetMode      ResetMode;                                         // 0x220(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UNiagaraPreviewAxis*                   PreviewAxisX;                                      // 0x228(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraPreviewAxis*                   PreviewAxisY;                                      // 0x230(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ANiagaraPreviewBase>       PreviewClass;                                      // 0x238(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpacingX;                                          // 0x240(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpacingY;                                          // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumX;                                              // 0x248(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumY;                                              // 0x24C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UChildActorComponent*>          PreviewComponents;                                 // 0x250(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19F4[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewGrid");
		return Clss;
	}

	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};

// 0x868 (0x898 - 0x30)
// Class Niagara.NiagaraRibbonRendererProperties
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          MaterialUserParamBinding;                          // 0x38(0x30)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonFacingMode          FacingMode;                                        // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        UV0TilingDistance;                                 // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV0Scale;                                          // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV0Offset;                                         // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonAgeOffsetMode       UV0AgeOffsetMode;                                  // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        UV1TilingDistance;                                 // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV1Scale;                                          // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV1Offset;                                         // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonAgeOffsetMode       UV1AgeOffsetMode;                                  // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonDrawDirection       DrawDirection;                                     // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F7[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CurveTension;                                      // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonTessellationMode    TessellationMode;                                  // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        TessellationFactor;                                // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseConstantFactor;                                // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        TessellationAngle;                                 // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScreenSpaceTessellation;                          // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0xB8(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x148(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x1D8(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x268(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonTwistBinding;                                // 0x2F8(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonWidthBinding;                                // 0x388(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonFacingBinding;                               // 0x418(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonIdBinding;                                   // 0x4A8(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonLinkOrderBinding;                            // 0x538(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x5C8(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x658(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x6E8(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x778(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x808(0x90)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraRibbonRendererProperties");
		return Clss;
	}

};

// 0x538 (0x560 - 0x28)
// Class Niagara.NiagaraScript
class UNiagaraScript : public UObject
{
public:
	enum class ENiagaraScriptUsage               Usage;                                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        UsageIndex;                                        // 0x2C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 UsageId;                                           // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraParameterStore                RapidIterationParameters;                          // 0x40(0xB8)(NativeAccessSpecifierPublic)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;                         // 0xF8(0xD8)(NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraBoundParameter>        ScriptExecutionBoundParameters;                    // 0x1D0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FNiagaraVMExecutableDataId            CachedScriptVMId;                                  // 0x1E0(0x50)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraVMExecutableDataId            LastGeneratedVMId;                                 // 0x230(0x50)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19FC[0x198];                                   // Fixing Size After Last Property  [ Dumper-8 ]
	struct FNiagaraVMExecutableData              CachedScriptVM;                                    // 0x418(0x128)(NativeAccessSpecifierPrivate)
	TArray<class UNiagaraParameterCollection*>   CachedParameterCollectionReferences;               // 0x540(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;                       // 0x550(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraScript");
		return Clss;
	}

	void OnCompilationComplete();
};

// 0x20 (0x48 - 0x28)
// Class Niagara.NiagaraScriptSourceBase
class UNiagaraScriptSourceBase : public UObject
{
public:
	uint8                                        Pad_19FD[0x20];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraScriptSourceBase");
		return Clss;
	}

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraSettings
class UNiagaraSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>               AdditionalParameterTypes;                          // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               AdditionalPayloadTypes;                            // 0x48(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               AdditionalParameterEnums;                          // 0x58(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSettings");
		return Clss;
	}

};

// 0xA08 (0xA38 - 0x30)
// Class Niagara.NiagaraSpriteRendererProperties
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          MaterialUserParamBinding;                          // 0x38(0x30)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraSpriteAlignment           Alignment;                                         // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSpriteFacingMode          FacingMode;                                        // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               CustomFacingVectorMask;                            // 0x6C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PivotInUVSpace;                                    // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSortMode                  SortMode;                                          // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector2D                             SubImageSize;                                      // 0x84(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSubImageBlend : 1;                                // Mask: 0x1, PropSize: 0x10x8C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRemoveHMDRollInVR : 1;                            // Mask: 0x2, PropSize: 0x10x8C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x4, PropSize: 0x10x8C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_171 : 5;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_1A00[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        MinFacingCameraBlendDistance;                      // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFacingCameraBlendDistance;                      // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x98(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x128(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x1B8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteRotationBinding;                             // 0x248(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteSizeBinding;                                 // 0x2D8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteFacingBinding;                               // 0x368(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteAlignmentBinding;                            // 0x3F8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SubImageIndexBinding;                              // 0x488(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x518(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x5A8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x638(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x6C8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CameraOffsetBinding;                               // 0x758(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      UVScaleBinding;                                    // 0x7E8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x878(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CustomSortingBinding;                              // 0x908(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x998(0x90)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A01[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSpriteRendererProperties");
		return Clss;
	}

};

// 0x350 (0x380 - 0x30)
// Class Niagara.NiagaraSystem
class UNiagaraSystem : public UFXSystemAsset
{
public:
	uint8                                        Pad_1A02[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	bool                                         bDumpDebugSystemInfo;                              // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDumpDebugEmitterInfo;                             // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A03[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	uint8                                        bFixedBounds : 1;                                  // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_172 : 7;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_1A04[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	enum class ENiagaraFastPathMode              FastPathMode;                                      // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraFastPath_Module_SystemScalability SystemScalability;                                 // 0x3C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraFastPath_Module_SystemLifeCycle SystemLifeCycle;                                   // 0x4C(0x1)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A05[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FNiagaraEmitterHandle>         EmitterHandles;                                    // 0x50(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                      // 0x60(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UNiagaraScript*                        SystemSpawnScript;                                 // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraScript*                        SystemUpdateScript;                                // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A06[0x10];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FNiagaraSystemCompiledData            SystemCompiledData;                                // 0x90(0x1A8)(Protected, NativeAccessSpecifierProtected)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters;                                 // 0x238(0x108)(Protected, NativeAccessSpecifierProtected)
	struct FBox                                  FixedBounds;                                       // 0x340(0x1C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoDeactivate;                                   // 0x35C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A07[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        WarmupTime;                                        // 0x360(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WarmupTickCount;                                   // 0x364(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WarmupTickDelta;                                   // 0x368(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasSystemScriptDIsWithPerInstanceData;            // 0x36C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A08[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class FName>                          UserDINamesReadInSystemScripts;                    // 0x370(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSystem");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
