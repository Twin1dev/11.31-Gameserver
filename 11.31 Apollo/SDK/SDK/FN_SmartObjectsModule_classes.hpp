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

// 0x40 (0xB0 - 0x70)
// Class SmartObjectsModule.AITask_UseSmartObject
class UAITask_UseSmartObject : public UAITask
{
public:
	class USmartObjectComponent*                 SOComponent;                                       // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastInlineDelegateProperty_            OnFinished;                                        // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UAITask_MoveTo*                        MoveToTask;                                        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_234B[0x20];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AITask_UseSmartObject");
		return Clss;
	}

	class UAITask_UseSmartObject* UseSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic);
};

// 0x50 (0xC0 - 0x70)
// Class SmartObjectsModule.BTTask_FindAndUseSmartObject
class UBTTask_FindAndUseSmartObject : public UBTTaskNode
{
public:
	struct FGameplayTagQuery                     ActivityRequirements;                              // 0x70(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_234C[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_FindAndUseSmartObject");
		return Clss;
	}

};

// 0x0 (0x98 - 0x98)
// Class SmartObjectsModule.BTTask_UseSmartObject
class UBTTask_UseSmartObject : public UBTTask_BlackboardBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_UseSmartObject");
		return Clss;
	}

};

// 0x20 (0x238 - 0x218)
// Class SmartObjectsModule.GenericSmartObject
class AGenericSmartObject : public AActor
{
public:
	uint8                                        Pad_234D[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USmartObjectComponent*                 SOComponent;                                       // 0x220(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        ReferenceActors;                                   // 0x228(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GenericSmartObject");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SmartObjectsModule.RichSmartObjectInterface
class IRichSmartObjectInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RichSmartObjectInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
class USmartObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectBlueprintFunctionLibrary");
		return Clss;
	}

	bool K2_UseSmartObject(class AActor* Avatar, class AActor* SmartObject);
	bool K2_SetSmartObjectEnabled(class AActor* SmartObject, bool bEnabled);
	bool K2_RemoveLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags);
	bool K2_AddLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags);
};

// 0x60 (0x110 - 0xB0)
// Class SmartObjectsModule.SmartObjectComponent
class USmartObjectComponent : public UActorComponent
{
public:
	uint8                                        Pad_2352[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSoftObjectPtr<class USmartObjectConfig>     Config;                                            // 0xB8(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSmartObjectID                        RegisteredID;                                      // 0xE0(0x4)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       ExecutionPriorityOverride;                         // 0xE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IGameplayTagAssetInterface> GameplayTagAssetInterfaceImplementation;           // 0xE8(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        bRichSmartObjectOwner : 1;                         // Mask: 0x1, PropSize: 0x10xF8(0x1)(Edit, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRichSmartObjectComponent : 1;                     // Mask: 0x2, PropSize: 0x10xF8(0x1)(Edit, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2353[0x17];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectComponent");
		return Clss;
	}

};

// 0x38 (0x68 - 0x30)
// Class SmartObjectsModule.SmartObjectConfig
class USmartObjectConfig : public UDataAsset
{
public:
	TArray<struct FSmartObjectUseConfig>         Uses;                                              // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 DescriptionTags;                                   // 0x40(0x20)(Protected, NativeAccessSpecifierProtected)
	uint32                                       MaxConcurrentUsers;                                // 0x60(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2354[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectConfig");
		return Clss;
	}

};

// 0x528 (0x550 - 0x28)
// Class SmartObjectsModule.SmartObjectManager
class USmartObjectManager : public UObject
{
public:
	TMap<struct FSmartObjectID, struct FSmartObjectRuntime> RuntimeSmartObjects;                               // 0x28(0x50)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2355[0x4C8];                                   // Fixing Size After Last Property  [ Dumper-8 ]
	uint8                                        BitPad_1A1 : 1;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        bCreateIfMissing : 1;                              // Mask: 0x2, PropSize: 0x10x540(0x1)(Edit, Config, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_1A2 : 6;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_2356[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        DefaultUnusedSmartObjectLifespan;                  // 0x544(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2357[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectManager");
		return Clss;
	}

};

// 0x0 (0x3E0 - 0x3E0)
// Class SmartObjectsModule.SmartObjectRenderingComponent
class USmartObjectRenderingComponent : public UPrimitiveComponent
{
public:
	enum class ESOReferenceDrawingMode           ReferenceDrawingMode;                              // 0x3D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2358[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectRenderingComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
