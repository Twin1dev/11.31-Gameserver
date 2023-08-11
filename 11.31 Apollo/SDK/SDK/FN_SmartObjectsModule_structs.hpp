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

enum class ESmartObjectTagPolicy : uint8
{
	Any                            = 0,
	All                            = 1,
	MAX                            = 2,
};

enum class ESOReferenceDrawingMode : uint8
{
	Default                        = 0,
	Sequence                       = 1,
	MAX                            = 2,
};

enum class ESmartObjectRequiredTagsPolicy : uint8
{
	RequireAny                     = 0,
	RequireAnyExact                = 1,
	RequireAll                     = 2,
	RequireAllExact                = 3,
	RequireNone                    = 4,
	ESmartObjectRequiredTagsPolicy_MAX = 5,
};

enum class ESmartObjectSlotState : uint8
{
	Free                           = 0,
	Claimed                        = 1,
	Occupied                       = 2,
	MAX                            = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlot
struct FSmartObjectSlot
{
public:
	struct FVector                               Offset;                                            // 0x0(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0xC(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayBehaviorConfig*               BehaviorConfig;                                    // 0x18(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectUseConfig
struct FSmartObjectUseConfig
{
public:
	struct FGameplayTagQuery                     AvatarTagFilter;                                   // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     ObjectTagFilter;                                   // 0x48(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ActivityTags;                                      // 0x90(0x20)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FSmartObjectSlot>              Slots;                                             // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UGameplayBehaviorConfig*               DefaultBehavior;                                   // 0xC0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxConcurrentUsers;                                // 0xC8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       DefaultExecutionPriority;                          // 0xCC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectExecutionSlot
struct FSmartObjectExecutionSlot
{
public:
	enum class ESmartObjectSlotState             State;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2359[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                UserAvatar;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayBehavior*                     AssignedBehavior;                                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_235A[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectUse
struct FSmartObjectUse
{
public:
	uint8                                        Pad_235B[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSmartObjectExecutionSlot             Slot;                                              // 0x8(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_235C[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRuntime
struct FSmartObjectRuntime
{
public:
	class USmartObjectComponent*                 SOComponent;                                       // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IRichSmartObjectInterface> AsRichSO;                                          // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FSmartObjectUse>               ActiveUses;                                        // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectID
struct FSmartObjectID
{
public:
	uint8                                        Pad_235D[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
