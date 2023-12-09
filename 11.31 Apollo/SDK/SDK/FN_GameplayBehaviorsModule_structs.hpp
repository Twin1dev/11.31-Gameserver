#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayBehaviorInstantiationPolicy : uint8
{
	Instantiate                    = 0,
	ConditionallyInstantiate       = 1,
	DontInstantiate                = 2,
	EGameplayBehaviorInstantiationPolicy_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayBehaviorsModule.MontagePlaybackData
struct FMontagePlaybackData
{
public:
	class AActor*                                Avatar;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          AnimMontage;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               AbilityComponent;                                  // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CB[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayBehaviorsModule.AgentGameplayBehaviors
struct FAgentGameplayBehaviors
{
public:
	TArray<class UGameplayBehavior*>             Behaviors;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


