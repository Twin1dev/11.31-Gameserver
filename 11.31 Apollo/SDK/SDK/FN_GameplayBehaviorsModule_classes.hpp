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

// 0x8 (0x78 - 0x70)
// Class GameplayBehaviorsModule.BTTask_StopGameplayBehavior
class UBTTask_StopGameplayBehavior : public UBTTaskNode
{
public:
	TSubclassOf<class UGameplayBehavior>         BehaviorToStop;                                    // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_StopGameplayBehavior");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class GameplayBehaviorsModule.GameplayBehavior
class UGameplayBehavior : public UObject
{
public:
	uint8                                        Pad_2361[0x14];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTag                          ActionTag;                                         // 0x3C(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2362[0x1C];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AActor*>                        RelevantActors;                                    // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                 ActiveTasks;                                       // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class AActor*                                TransientAvatar;                                   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayBehavior");
		return Clss;
	}

	void K2_TriggerBehavior(class AActor* Avatar, class UGameplayBehaviorConfig* Config);
	void K2_OnTriggeredPawn(class APawn* Avatar, class UGameplayBehaviorConfig* Config);
	void K2_OnTriggeredCharacter(class ACharacter* Avatar, class UGameplayBehaviorConfig* Config);
	void K2_OnTriggered(class AActor* Avatar, class UGameplayBehaviorConfig* Config);
	void K2_OnFinishedPawn(class APawn* Avatar, bool bWasInterrupted);
	void K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted);
	void K2_OnFinished(class AActor* Avatar, bool bWasInterrupted);
	int32 K2_GetNextActorIndexInSequence(int32 CurrentIndex);
	void K2_EndBehavior(class AActor* Avatar);
	void K2_AbortBehavior(class AActor* Avatar);
};

// 0x10 (0x98 - 0x88)
// Class GameplayBehaviorsModule.GameplayBehavior_AnimationBased
class UGameplayBehavior_AnimationBased : public UGameplayBehavior
{
public:
	TArray<struct FMontagePlaybackData>          ActivePlayback;                                    // 0x88(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayBehavior_AnimationBased");
		return Clss;
	}

	void OnMontageFinished(class UAnimMontage* Montage, bool bInterrupted, class AActor* InAvatar);
};

// 0x10 (0x98 - 0x88)
// Class GameplayBehaviorsModule.GameplayBehavior_BehaviorTree
class UGameplayBehavior_BehaviorTree : public UGameplayBehavior
{
public:
	class UBehaviorTree*                         PreviousBT;                                        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAIController*                         AIController;                                      // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayBehavior_BehaviorTree");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class GameplayBehaviorsModule.GameplayBehaviorConfig
class UGameplayBehaviorConfig : public UObject
{
public:
	TSubclassOf<class UGameplayBehavior>         BehaviorClass;                                     // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayBehaviorConfig");
		return Clss;
	}

};

// 0x38 (0x68 - 0x30)
// Class GameplayBehaviorsModule.GameplayBehaviorConfig_Animation
class UGameplayBehaviorConfig_Animation : public UGameplayBehaviorConfig
{
public:
	TSoftObjectPtr<class UAnimMontage>           AnimMontage;                                       // 0x30(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlayRate;                                          // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  StartSectionName;                                  // 0x5C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLoop : 1;                                         // Mask: 0x1, PropSize: 0x10x64(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2364[0x3];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayBehaviorConfig_Animation");
		return Clss;
	}

};

// 0x30 (0x60 - 0x30)
// Class GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
class UGameplayBehaviorConfig_BehaviorTree : public UGameplayBehaviorConfig
{
public:
	TSoftObjectPtr<class UBehaviorTree>          BehaviorTree;                                      // 0x30(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRevertToPreviousBTOnFinish : 1;                   // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2365[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayBehaviorConfig_BehaviorTree");
		return Clss;
	}

};

// 0x58 (0x90 - 0x38)
// Class GameplayBehaviorsModule.GameplayBehaviorManager
class UGameplayBehaviorManager : public UAISubsystem
{
public:
	TMap<class AActor*, struct FAgentGameplayBehaviors> AgentGameplayBehaviors;                            // 0x38(0x50)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        bCreateIfMissing : 1;                              // Mask: 0x1, PropSize: 0x10x88(0x1)(Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2366[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayBehaviorManager");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary
class UGameplayBehaviorsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayBehaviorsBlueprintFunctionLibrary");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
