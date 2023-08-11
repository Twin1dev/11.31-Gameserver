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

// 0x250 (0x278 - 0x28)
// Class ControlRig.ControlRig
class UControlRig : public UObject
{
public:
	uint8                                        Pad_1B92[0x14];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	enum class ERigExecutionType                 ExecutionType;                                     // 0x3C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B93[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRigHierarchyContainer                Hierarchy;                                         // 0x40(0xC0)(Edit, DisableEditOnInstance, EditConst, NativeAccessSpecifierPrivate)
	struct FRigCurveContainer                    CurveContainer;                                    // 0x100(0x60)(Edit, DisableEditOnInstance, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FControlRigOperator>           Operators;                                         // 0x160(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B94[0x30];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	TMap<class FName, struct FCachedPropertyPath> InputProperties;                                   // 0x1A0(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FCachedPropertyPath> OutputProperties;                                  // 0x1F0(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B95[0x38];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRig");
		return Clss;
	}

	float GetDeltaTime();
};

// 0x0 (0x78 - 0x78)
// Class ControlRig.ControlRigBindingTrack
class UControlRigBindingTrack : public UMovieSceneSpawnTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigBindingTrack");
		return Clss;
	}

};

// 0x10 (0x2F0 - 0x2E0)
// Class ControlRig.ControlRigBlueprintGeneratedClass
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	TArray<struct FControlRigOperator>           Operators;                                         // 0x2E0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigBlueprintGeneratedClass");
		return Clss;
	}

};

// 0x48 (0xF8 - 0xB0)
// Class ControlRig.ControlRigComponent
class UControlRigComponent : public UActorComponent
{
public:
	UMulticastInlineDelegateProperty_            OnPreInitializeDelegate;                           // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPostInitializeDelegate;                          // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPreEvaluateDelegate;                             // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPostEvaluateDelegate;                            // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UControlRig*                           ControlRig;                                        // 0xF0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigComponent");
		return Clss;
	}

	void OnPreInitialize();
	void OnPreEvaluate();
	void OnPostInitialize();
	void OnPostEvaluate();
	class UControlRig* BP_GetControlRig();
};

// 0x50 (0x268 - 0x218)
// Class ControlRig.ControlRigControl
class AControlRigControl : public AActor
{
public:
	class FString                                PropertyPath;                                      // 0x218(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B96[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            Transform;                                         // 0x230(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x260(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSelected : 1;                                     // Mask: 0x2, PropSize: 0x10x260(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHovered : 1;                                      // Mask: 0x4, PropSize: 0x10x260(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bManipulating : 1;                                 // Mask: 0x8, PropSize: 0x10x260(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B97[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigControl");
		return Clss;
	}

	void OnTransformChanged(struct FTransform& NewTransform);
	void OnSelectionChanged(bool bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnHoveredChanged(bool bIsSelected);
	void OnEnabledChanged(bool bIsEnabled);
};

// 0x0 (0x28 - 0x28)
// Class ControlRig.ControlRigLibrary
class UControlRigLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigLibrary");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigObjectHolder
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigObjectHolder");
		return Clss;
	}

};

// 0x58 (0x4F0 - 0x498)
// Class ControlRig.ControlRigSequence
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>          LastExportedToAnimationSequence;                   // 0x498(0x28)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          LastExportedUsingSkeletalMesh;                     // 0x4C0(0x28)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastExportedFrameRate;                             // 0x4E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B98[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigSequence");
		return Clss;
	}

};

// 0x0 (0x270 - 0x270)
// Class ControlRig.ControlRigSequencerAnimInstance
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigSequencerAnimInstance");
		return Clss;
	}

};

// 0x18 (0x280 - 0x268)
// Class ControlRig.ControlRigStaticMeshControl
class AControlRigStaticMeshControl : public AControlRigControl
{
public:
	class USceneComponent*                       Scene;                                             // 0x268(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  Mesh;                                              // 0x270(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B99[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigStaticMeshControl");
		return Clss;
	}

};

// 0xB8 (0x208 - 0x150)
// Class ControlRig.MovieSceneControlRigSection
class UMovieSceneControlRigSection : public UMovieSceneSubSection
{
public:
	bool                                         bAdditive;                                         // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyBoneFilter;                                  // 0x151(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B9A[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FInputBlendPose                       BoneFilter;                                        // 0x158(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Weight;                                            // 0x168(0xA0)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneControlRigSection");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class ControlRig.MovieSceneControlRigTrack
class UMovieSceneControlRigTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneControlRigTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
