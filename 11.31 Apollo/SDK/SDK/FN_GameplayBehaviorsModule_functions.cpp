#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayBehaviorConfig*     Config                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_TriggerBehavior(class AActor* Avatar, class UGameplayBehaviorConfig* Config)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_TriggerBehavior");

	Params::UGameplayBehavior_K2_TriggerBehavior_Params Parms;

	Parms.Avatar = Avatar;
	Parms.Config = Config;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayBehaviorConfig*     Config                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnTriggeredPawn(class APawn* Avatar, class UGameplayBehaviorConfig* Config)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_OnTriggeredPawn");

	Params::UGameplayBehavior_K2_OnTriggeredPawn_Params Parms;

	Parms.Avatar = Avatar;
	Parms.Config = Config;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACharacter*                  Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayBehaviorConfig*     Config                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnTriggeredCharacter(class ACharacter* Avatar, class UGameplayBehaviorConfig* Config)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_OnTriggeredCharacter");

	Params::UGameplayBehavior_K2_OnTriggeredCharacter_Params Parms;

	Parms.Avatar = Avatar;
	Parms.Config = Config;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayBehaviorConfig*     Config                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnTriggered(class AActor* Avatar, class UGameplayBehaviorConfig* Config)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_OnTriggered");

	Params::UGameplayBehavior_K2_OnTriggered_Params Parms;

	Parms.Avatar = Avatar;
	Parms.Config = Config;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasInterrupted                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnFinishedPawn(class APawn* Avatar, bool bWasInterrupted)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_OnFinishedPawn");

	Params::UGameplayBehavior_K2_OnFinishedPawn_Params Parms;

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACharacter*                  Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasInterrupted                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_OnFinishedCharacter");

	Params::UGameplayBehavior_K2_OnFinishedCharacter_Params Parms;

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasInterrupted                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnFinished(class AActor* Avatar, bool bWasInterrupted)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_OnFinished");

	Params::UGameplayBehavior_K2_OnFinished_Params Parms;

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              CurrentIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGameplayBehavior::K2_GetNextActorIndexInSequence(int32 CurrentIndex)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_GetNextActorIndexInSequence");

	Params::UGameplayBehavior_K2_GetNextActorIndexInSequence_Params Parms;

	Parms.CurrentIndex = CurrentIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_EndBehavior(class AActor* Avatar)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_EndBehavior");

	Params::UGameplayBehavior_K2_EndBehavior_Params Parms;

	Parms.Avatar = Avatar;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_AbortBehavior(class AActor* Avatar)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_AbortBehavior");

	Params::UGameplayBehavior_K2_AbortBehavior_Params Parms;

	Parms.Avatar = Avatar;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InAvatar                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior_AnimationBased::OnMontageFinished(class UAnimMontage* Montage, bool bInterrupted, class AActor* InAvatar)
{
	static auto Func = Class->GetFunction("GameplayBehavior_AnimationBased", "OnMontageFinished");

	Params::UGameplayBehavior_AnimationBased_OnMontageFinished_Params Parms;

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;
	Parms.InAvatar = InAvatar;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
