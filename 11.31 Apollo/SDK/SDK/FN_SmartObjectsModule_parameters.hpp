#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Function SmartObjectsModule.AITask_UseSmartObject.UseSmartObject
struct UAITask_UseSmartObject_UseSmartObject_Params
{
public:
	class AAIController*                         Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SmartObjectActor;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USmartObjectComponent*                 SmartObjectComponent;                              // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockAILogic;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_234A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAITask_UseSmartObject*                ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_UseSmartObject
struct USmartObjectBlueprintFunctionLibrary_K2_UseSmartObject_Params
{
public:
	class AActor*                                Avatar;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SmartObject;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_234E[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x10 (0x10 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_SetSmartObjectEnabled
struct USmartObjectBlueprintFunctionLibrary_K2_SetSmartObjectEnabled_Params
{
public:
	class AActor*                                SmartObject;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_234F[0x6];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x30 (0x30 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_RemoveLooseGameplayTags
struct USmartObjectBlueprintFunctionLibrary_K2_RemoveLooseGameplayTags_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2350[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x30 (0x30 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_AddLooseGameplayTags
struct USmartObjectBlueprintFunctionLibrary_K2_AddLooseGameplayTags_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2351[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
