#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// (None)

class UClass* UAbilitySystemBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilitySystemBlueprintLibrary");

	return Clss;
}


// AbilitySystemBlueprintLibrary GameplayAbilities.Default__AbilitySystemBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAbilitySystemBlueprintLibrary* UAbilitySystemBlueprintLibrary::GetDefaultObj()
{
	static class UAbilitySystemBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilitySystemBlueprintLibrary*>(UAbilitySystemBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasOrigin");

	Params::UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleHitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasHitResult");

	Params::UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasEndPoint");

	Params::UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasActor");

	Params::UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "SetStackCountToMax");

	Params::UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params Parms{};

	Parms.SpecHandle = SpecHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// int32                              StackCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int32 StackCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "SetStackCount");

	Params::UAbilitySystemBlueprintLibrary_SetStackCount_Params Parms{};

	Parms.SpecHandle = SpecHandle;
	Parms.StackCount = StackCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "SetDuration");

	Params::UAbilitySystemBlueprintLibrary_SetDuration_Params Parms{};

	Parms.SpecHandle = SpecHandle;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                EventTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData          Payload                                                          (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "SendGameplayEventToActor");

	Params::UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.EventTag = EventTag;
	Parms.Payload = Payload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute          AttributeA                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          AttributeB                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "NotEqual_GameplayAttributeGameplayAttribute");

	Params::UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params Parms{};

	Parms.AttributeA = AttributeA;
	Parms.AttributeB = AttributeB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameplayEffect*             InGameplayEffect                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InInstigator                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InEffectCauser                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InLevel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "MakeSpecHandle");

	Params::UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params Parms{};

	Parms.InGameplayEffect = InGameplayEffect;
	Parms.InInstigator = InInstigator;
	Parms.InEffectCauser = InEffectCauser;
	Parms.InLevel = InLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NormalizedMagnitude                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RawMagnitude                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                MatchedTagName                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                OriginalTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AggregatedSourceTags                                             (Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AggregatedTargetTags                                             (Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Instigator                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      EffectCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     SourceObject                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPhysicalMaterial*           PhysicalMaterial                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameplayEffectLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AbilityLevel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             TargetAttachComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayCueParameters UAbilitySystemBlueprintLibrary::MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, const struct FGameplayEffectContextHandle& EffectContext, const struct FGameplayTag& MatchedTagName, const struct FGameplayTag& OriginalTag, const struct FGameplayTagContainer& AggregatedSourceTags, const struct FGameplayTagContainer& AggregatedTargetTags, const struct FVector& Location, const struct FVector& Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32 GameplayEffectLevel, int32 AbilityLevel, class USceneComponent* TargetAttachComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "MakeGameplayCueParameters");

	Params::UAbilitySystemBlueprintLibrary_MakeGameplayCueParameters_Params Parms{};

	Parms.NormalizedMagnitude = NormalizedMagnitude;
	Parms.RawMagnitude = RawMagnitude;
	Parms.EffectContext = EffectContext;
	Parms.MatchedTagName = MatchedTagName;
	Parms.OriginalTag = OriginalTag;
	Parms.AggregatedSourceTags = AggregatedSourceTags;
	Parms.AggregatedTargetTags = AggregatedTargetTags;
	Parms.Location = Location;
	Parms.Normal = Normal;
	Parms.Instigator = Instigator;
	Parms.EffectCauser = EffectCauser;
	Parms.SourceObject = SourceObject;
	Parms.PhysicalMaterial = PhysicalMaterial;
	Parms.GameplayEffectLevel = GameplayEffectLevel;
	Parms.AbilityLevel = AbilityLevel;
	Parms.TargetAttachComponent = TargetAttachComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTargetDataFilter   Filter                                                           (Parm, NativeAccessSpecifierPublic)
// class AActor*                      FilterActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "MakeFilterHandle");

	Params::UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params Parms{};

	Parms.Filter = Filter;
	Parms.FilterActor = FilterActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::IsValid(const struct FGameplayAttribute& Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "IsValid");

	Params::UAbilitySystemBlueprintLibrary_IsValid_Params Parms{};

	Parms.Attribute = Attribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "IsInstigatorLocallyControlledPlayer");

	Params::UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params Parms{};

	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "IsInstigatorLocallyControlled");

	Params::UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params Parms{};

	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::HasHitResult(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "HasHitResult");

	Params::UAbilitySystemBlueprintLibrary_HasHitResult_Params Parms{};

	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataOrigin");

	Params::UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataEndPointTransform");

	Params::UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAbilitySystemBlueprintLibrary::GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataEndPoint");

	Params::UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAbilitySystemBlueprintLibrary::GetOrigin(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetOrigin");

	Params::UAbilitySystemBlueprintLibrary_GetOrigin_Params Parms{};

	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetModifiedAttributeMagnitude");

	Params::UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params Parms{};

	Parms.SpecHandle = SpecHandle;
	Parms.Attribute = Attribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UAbilitySystemBlueprintLibrary::GetInstigatorTransform(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetInstigatorTransform");

	Params::UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params Parms{};

	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::GetInstigatorActor(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetInstigatorActor");

	Params::UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params Parms{};

	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleHitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetHitResultFromTargetData");

	Params::UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FHitResult                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResult(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetHitResult");

	Params::UAbilitySystemBlueprintLibrary_GetHitResult_Params Parms{};

	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayCueEndLocationAndNormal");

	Params::UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Normal != nullptr)
		*Normal = std::move(Parms.Normal);

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayCueDirection");

	Params::UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccessfullyFoundAttribute                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeFromAbilitySystemComponent");

	Params::UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params Parms{};

	Parms.AbilitySystem = AbilitySystem;
	Parms.Attribute = Attribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccessfullyFoundAttribute                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeBaseFromAbilitySystemComponent");

	Params::UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.Attribute = Attribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccessfullyFoundAttribute                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeBase");

	Params::UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params Parms{};

	Parms.Actor = Actor;
	Parms.Attribute = Attribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccessfullyFoundAttribute                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttribute");

	Params::UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params Parms{};

	Parms.Actor = Actor;
	Parms.Attribute = Attribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UAbilitySystemBlueprintLibrary::GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetEffectContext");

	Params::UAbilitySystemBlueprintLibrary_GetEffectContext_Params Parms{};

	Parms.SpecHandle = SpecHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemBlueprintLibrary::GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetDataCountFromTargetData");

	Params::UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params Parms{};

	Parms.TargetData = TargetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// TArray<struct FGameplayEffectSpecHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FGameplayEffectSpecHandle> UAbilitySystemBlueprintLibrary::GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetAllLinkedGameplayEffectSpecHandles");

	Params::UAbilitySystemBlueprintLibrary_GetAllLinkedGameplayEffectSpecHandles_Params Parms{};

	Parms.SpecHandle = SpecHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UAbilitySystemBlueprintLibrary::GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetAllActorsFromTargetData");

	Params::UAbilitySystemBlueprintLibrary_GetAllActorsFromTargetData_Params Parms{};

	Parms.TargetData = TargetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UAbilitySystemBlueprintLibrary::GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActorsFromTargetData");

	Params::UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemBlueprintLibrary::GetActorCount(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActorCount");

	Params::UAbilitySystemBlueprintLibrary_GetActorCount_Params Parms{};

	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::GetActorByIndex(const struct FGameplayCueParameters& Parameters, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActorByIndex");

	Params::UAbilitySystemBlueprintLibrary_GetActorByIndex_Params Parms{};

	Parms.Parameters = Parameters;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectTotalDuration");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectTotalDuration_Params Parms{};

	Parms.ActiveHandle = ActiveHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStartTime");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStartTime_Params Parms{};

	Parms.ActiveHandle = ActiveHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStackLimitCount");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params Parms{};

	Parms.ActiveHandle = ActiveHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStackCount");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params Parms{};

	Parms.ActiveHandle = ActiveHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectRemainingDuration");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectRemainingDuration_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActiveHandle = ActiveHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectExpectedEndTime");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectExpectedEndTime_Params Parms{};

	Parms.ActiveHandle = ActiveHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectDebugString");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params Parms{};

	Parms.ActiveHandle = ActiveHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetAbilitySystemComponent");

	Params::UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGameplayCueInterface>TargetCueInterface                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::ForwardGameplayCueToTarget(TScriptInterface<class IGameplayCueInterface> TargetCueInterface, enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "ForwardGameplayCueToTarget");

	Params::UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params Parms{};

	Parms.TargetCueInterface = TargetCueInterface;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetDataHandle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleActorFilterClass                                                 (Parm, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "FilterTargetData");

	Params::UAbilitySystemBlueprintLibrary_FilterTargetData_Params Parms{};

	Parms.TargetDataHandle = TargetDataHandle;
	Parms.ActorFilterClass = ActorFilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       SourceTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       TargetTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              BaseValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EvaluateAttributeValueWithTagsAndBase");

	Params::UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params Parms{};

	Parms.AbilitySystem = AbilitySystem;
	Parms.Attribute = Attribute;
	Parms.SourceTags = SourceTags;
	Parms.TargetTags = TargetTags;
	Parms.BaseValue = BaseValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       SourceTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       TargetTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EvaluateAttributeValueWithTags");

	Params::UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params Parms{};

	Parms.AbilitySystem = AbilitySystem;
	Parms.Attribute = Attribute;
	Parms.SourceTags = SourceTags;
	Parms.TargetTags = TargetTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute          AttributeA                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          AttributeB                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EqualEqual_GameplayAttributeGameplayAttribute");

	Params::UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params Parms{};

	Parms.AttributeA = AttributeA;
	Parms.AttributeB = AttributeB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextSetOrigin");

	Params::UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params Parms{};

	Parms.EffectContext = EffectContext;
	Parms.Origin = Origin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextIsValid");

	Params::UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params Parms{};

	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextIsInstigatorLocallyControlled");

	Params::UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params Parms{};

	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextHasHitResult");

	Params::UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params Parms{};

	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAbilitySystemBlueprintLibrary::EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetSourceObject");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params Parms{};

	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetOriginalInstigatorActor");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params Parms{};

	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAbilitySystemBlueprintLibrary::EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetOrigin");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params Parms{};

	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetInstigatorActor");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params Parms{};

	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FHitResult                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UAbilitySystemBlueprintLibrary::EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetHitResult");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params Parms{};

	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetEffectCauser");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params Parms{};

	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FHitResult                  HitResult                                                        (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bReset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextAddHitResult");

	Params::UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params Parms{};

	Parms.EffectContext = EffectContext;
	Parms.HitResult = HitResult;
	Parms.bReset = bReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "DoesTargetDataContainActor");

	Params::UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.Index = Index;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagReqs                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagReqs                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "DoesGameplayCueMeetTagRequirements");

	Params::UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params Parms{};

	Parms.Parameters = Parameters;
	Parms.SourceTagReqs = SourceTagReqs;
	Parms.TargetTagReqs = TargetTagReqs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      InNewInstigator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InEffectCauser                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   GameplayEffectSpecHandle_Clone                                   (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "CloneSpecHandle");

	Params::UAbilitySystemBlueprintLibrary_CloneSpecHandle_Params Parms{};

	Parms.InNewInstigator = InNewInstigator;
	Parms.InEffectCauser = InEffectCauser;
	Parms.GameplayEffectSpecHandle_Clone = GameplayEffectSpecHandle_Clone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                              NormalizedMagnitude                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RawMagnitude                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                MatchedTagName                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                OriginalTag                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AggregatedSourceTags                                             (Parm, OutParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AggregatedTargetTags                                             (Parm, OutParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Instigator                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      EffectCauser                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     SourceObject                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPhysicalMaterial*           PhysicalMaterial                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameplayEffectLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AbilityLevel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             TargetAttachComponent                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::BreakGameplayCueParameters(struct FGameplayCueParameters& Parameters, float* NormalizedMagnitude, float* RawMagnitude, struct FGameplayEffectContextHandle* EffectContext, struct FGameplayTag* MatchedTagName, struct FGameplayTag* OriginalTag, struct FGameplayTagContainer* AggregatedSourceTags, struct FGameplayTagContainer* AggregatedTargetTags, struct FVector* Location, struct FVector* Normal, class AActor** Instigator, class AActor** EffectCauser, class UObject** SourceObject, class UPhysicalMaterial** PhysicalMaterial, int32* GameplayEffectLevel, int32* AbilityLevel, class USceneComponent** TargetAttachComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "BreakGameplayCueParameters");

	Params::UAbilitySystemBlueprintLibrary_BreakGameplayCueParameters_Params Parms{};

	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NormalizedMagnitude != nullptr)
		*NormalizedMagnitude = Parms.NormalizedMagnitude;

	if (RawMagnitude != nullptr)
		*RawMagnitude = Parms.RawMagnitude;

	if (EffectContext != nullptr)
		*EffectContext = std::move(Parms.EffectContext);

	if (MatchedTagName != nullptr)
		*MatchedTagName = std::move(Parms.MatchedTagName);

	if (OriginalTag != nullptr)
		*OriginalTag = std::move(Parms.OriginalTag);

	if (AggregatedSourceTags != nullptr)
		*AggregatedSourceTags = std::move(Parms.AggregatedSourceTags);

	if (AggregatedTargetTags != nullptr)
		*AggregatedTargetTags = std::move(Parms.AggregatedTargetTags);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Normal != nullptr)
		*Normal = std::move(Parms.Normal);

	if (Instigator != nullptr)
		*Instigator = Parms.Instigator;

	if (EffectCauser != nullptr)
		*EffectCauser = Parms.EffectCauser;

	if (SourceObject != nullptr)
		*SourceObject = Parms.SourceObject;

	if (PhysicalMaterial != nullptr)
		*PhysicalMaterial = Parms.PhysicalMaterial;

	if (GameplayEffectLevel != nullptr)
		*GameplayEffectLevel = Parms.GameplayEffectLevel;

	if (AbilityLevel != nullptr)
		*AbilityLevel = Parms.AbilityLevel;

	if (TargetAttachComponent != nullptr)
		*TargetAttachComponent = Parms.TargetAttachComponent;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                DataTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Magnitude                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AssignTagSetByCallerMagnitude");

	Params::UAbilitySystemBlueprintLibrary_AssignTagSetByCallerMagnitude_Params Parms{};

	Parms.SpecHandle = SpecHandle;
	Parms.DataTag = DataTag;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// class FName                        DataName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Magnitude                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, class FName DataName, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AssignSetByCallerMagnitude");

	Params::UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params Parms{};

	Parms.SpecHandle = SpecHandle;
	Parms.DataName = DataName;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetHandle                                                     (Parm, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleHandleToAdd                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AppendTargetDataHandle");

	Params::UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.HandleToAdd = HandleToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   LinkedGameplayEffectSpec                                         (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddLinkedGameplayEffectSpec");

	Params::UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params Parms{};

	Parms.SpecHandle = SpecHandle;
	Parms.LinkedGameplayEffectSpec = LinkedGameplayEffectSpec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class UGameplayEffect> LinkedGameplayEffect                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, TSubclassOf<class UGameplayEffect> LinkedGameplayEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddLinkedGameplayEffect");

	Params::UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffect_Params Parms{};

	Parms.SpecHandle = SpecHandle;
	Parms.LinkedGameplayEffect = LinkedGameplayEffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       NewGameplayTags                                                  (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddGrantedTags");

	Params::UAbilitySystemBlueprintLibrary_AddGrantedTags_Params Parms{};

	Parms.SpecHandle = SpecHandle;
	Parms.NewGameplayTags = NewGameplayTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                NewGameplayTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddGrantedTag");

	Params::UAbilitySystemBlueprintLibrary_AddGrantedTag_Params Parms{};

	Parms.SpecHandle = SpecHandle;
	Parms.NewGameplayTag = NewGameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       NewGameplayTags                                                  (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddAssetTags");

	Params::UAbilitySystemBlueprintLibrary_AddAssetTags_Params Parms{};

	Parms.SpecHandle = SpecHandle;
	Parms.NewGameplayTags = NewGameplayTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                NewGameplayTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddAssetTag");

	Params::UAbilitySystemBlueprintLibrary_AddAssetTag_Params Parms{};

	Parms.SpecHandle = SpecHandle;
	Parms.NewGameplayTag = NewGameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfoSourceLocation                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetingLocationInfoTargetLocation                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromLocations");

	Params::UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params Parms{};

	Parms.SourceLocation = SourceLocation;
	Parms.TargetLocation = TargetLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromHitResult(struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromHitResult");

	Params::UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AActor*>              ActorArray                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               OneTargetPerHandle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(TArray<class AActor*>& ActorArray, bool OneTargetPerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromActorArray");

	Params::UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params Parms{};

	Parms.ActorArray = ActorArray;
	Parms.OneTargetPerHandle = OneTargetPerHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromActor");

	Params::UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilitySystemComponent
// (None)

class UClass* UAbilitySystemComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilitySystemComponent");

	return Clss;
}


// AbilitySystemComponent GameplayAbilities.Default__AbilitySystemComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAbilitySystemComponent* UAbilitySystemComponent::GetDefaultObj()
{
	static class UAbilitySystemComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilitySystemComponent*>(UAbilitySystemComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayAbility>InAbilityToActivate                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowRemoteActivation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::TryActivateAbilityByClass(TSubclassOf<class UGameplayAbility> InAbilityToActivate, bool bAllowRemoteActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "TryActivateAbilityByClass");

	Params::UAbilitySystemComponent_TryActivateAbilityByClass_Params Parms{};

	Parms.InAbilityToActivate = InAbilityToActivate;
	Parms.bAllowRemoteActivation = bAllowRemoteActivation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       GameplayTagContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAllowRemoteActivation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::TryActivateAbilitiesByTag(struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "TryActivateAbilitiesByTag");

	Params::UAbilitySystemComponent_TryActivateAbilitiesByTag_Params Parms{};

	Parms.GameplayTagContainer = GameplayTagContainer;
	Parms.bAllowRemoteActivation = bAllowRemoteActivation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
// (Native, Public, BlueprintCallable)
// Parameters:

void UAbilitySystemComponent::TargetConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "TargetConfirm");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
// (Native, Public, BlueprintCallable)
// Parameters:

void UAbilitySystemComponent::TargetCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "TargetCancel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               NewInhibit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "SetUserAbilityActivationInhibited");

	Params::UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params Parms{};

	Parms.NewInhibit = NewInhibit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectQuery        Query                                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              NewLevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "SetActiveGameplayEffectLevelUsingQuery");

	Params::UAbilitySystemComponent_SetActiveGameplayEffectLevelUsingQuery_Params Parms{};

	Parms.Query = Query;
	Parms.NewLevel = NewLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewLevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "SetActiveGameplayEffectLevel");

	Params::UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params Parms{};

	Parms.ActiveHandle = ActiveHandle;
	Parms.NewLevel = NewLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InputPressed                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData          TriggerEventData                                                 (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerTryActivateAbilityWithEventData");

	Params::UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params Parms{};

	Parms.AbilityToActivate = AbilityToActivate;
	Parms.InputPressed = InputPressed;
	Parms.PredictionKey = PredictionKey;
	Parms.TriggerEventData = TriggerEventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InputPressed                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerTryActivateAbility");

	Params::UAbilitySystemComponent_ServerTryActivateAbility_Params Parms{};

	Parms.AbilityToActivate = AbilityToActivate;
	Parms.InputPressed = InputPressed;
	Parms.PredictionKey = PredictionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              CurrentPredictionKey                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedTargetDataCancelled");

	Params::UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params Parms{};

	Parms.AbilityHandle = AbilityHandle;
	Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	Parms.CurrentPredictionKey = CurrentPredictionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReplicatedTargetDataHandle                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              CurrentPredictionKey                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedTargetData");

	Params::UAbilitySystemComponent_ServerSetReplicatedTargetData_Params Parms{};

	Parms.AbilityHandle = AbilityHandle;
	Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	Parms.ReplicatedTargetDataHandle = ReplicatedTargetDataHandle;
	Parms.ApplicationTag = ApplicationTag;
	Parms.CurrentPredictionKey = CurrentPredictionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// enum class EAbilityGenericReplicatedEventEventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              CurrentPredictionKey                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize100      VectorPayload                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedEventWithPayload");

	Params::UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params Parms{};

	Parms.EventType = EventType;
	Parms.AbilityHandle = AbilityHandle;
	Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	Parms.CurrentPredictionKey = CurrentPredictionKey;
	Parms.VectorPayload = VectorPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// enum class EAbilityGenericReplicatedEventEventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              CurrentPredictionKey                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedEvent");

	Params::UAbilitySystemComponent_ServerSetReplicatedEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.AbilityHandle = AbilityHandle;
	Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	Parms.CurrentPredictionKey = CurrentPredictionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetInputReleased");

	Params::UAbilitySystemComponent_ServerSetInputReleased_Params Parms{};

	Parms.AbilityHandle = AbilityHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetInputPressed");

	Params::UAbilitySystemComponent_ServerSetInputPressed_Params Parms{};

	Parms.AbilityHandle = AbilityHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<class FString>              Strings                                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerPrintDebug_RequestWithStrings(TArray<class FString>& Strings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerPrintDebug_RequestWithStrings");

	Params::UAbilitySystemComponent_ServerPrintDebug_RequestWithStrings_Params Parms{};

	Parms.Strings = Strings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void UAbilitySystemComponent::ServerPrintDebug_Request()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerPrintDebug_Request");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToEnd                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfoActivationInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerEndAbility");

	Params::UAbilitySystemComponent_ServerEndAbility_Params Parms{};

	Parms.AbilityToEnd = AbilityToEnd;
	Parms.ActivationInfo = ActivationInfo;
	Parms.PredictionKey = PredictionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*                ClientAnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InPlayRate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerCurrentMontageSetPlayRate");

	Params::UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params Parms{};

	Parms.ClientAnimMontage = ClientAnimMontage;
	Parms.InPlayRate = InPlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*                ClientAnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClientPosition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SectionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NextSectionName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, class FName SectionName, class FName NextSectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerCurrentMontageSetNextSectionName");

	Params::UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params Parms{};

	Parms.ClientAnimMontage = ClientAnimMontage;
	Parms.ClientPosition = ClientPosition;
	Parms.SectionName = SectionName;
	Parms.NextSectionName = NextSectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*                ClientAnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SectionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, class FName SectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerCurrentMontageJumpToSectionName");

	Params::UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params Parms{};

	Parms.ClientAnimMontage = ClientAnimMontage;
	Parms.SectionName = SectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToCancel                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfoActivationInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerCancelAbility");

	Params::UAbilitySystemComponent_ServerCancelAbility_Params Parms{};

	Parms.AbilityToCancel = AbilityToCancel;
	Parms.ActivationInfo = ActivationInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FServerAbilityRPCBatch      BatchInfo                                                        (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerAbilityRPCBatch(const struct FServerAbilityRPCBatch& BatchInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerAbilityRPCBatch");

	Params::UAbilitySystemComponent_ServerAbilityRPCBatch_Params Parms{};

	Parms.BatchInfo = BatchInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffect                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     InstigatorAbilitySystemComponent                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(TSubclassOf<class UGameplayEffect> GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32 StacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveGameplayEffectBySourceEffect");

	Params::UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params Parms{};

	Parms.GameplayEffect = GameplayEffect;
	Parms.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;
	Parms.StacksToRemove = StacksToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int32 StacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveGameplayEffect");

	Params::UAbilitySystemComponent_RemoveActiveGameplayEffect_Params Parms{};

	Parms.Handle = Handle;
	Parms.StacksToRemove = StacksToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithTags");

	Params::UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params Parms{};

	Parms.Tags = Tags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithSourceTags");

	Params::UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params Parms{};

	Parms.Tags = Tags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithGrantedTags");

	Params::UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params Parms{};

	Parms.Tags = Tags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithAppliedTags");

	Params::UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params Parms{};

	Parms.Tags = Tags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
// (Native, Public)
// Parameters:

void UAbilitySystemComponent::OnRep_ServerDebugString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ServerDebugString");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
// (Native, Protected)
// Parameters:

void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ReplicatedAnimMontage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
// (Final, Native, Public)
// Parameters:

void UAbilitySystemComponent::OnRep_OwningActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_OwningActor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
// (Native, Public)
// Parameters:

void UAbilitySystemComponent::OnRep_ClientDebugString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ClientDebugString");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
// (Native, Protected)
// Parameters:

void UAbilitySystemComponent::OnRep_ActivateAbilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ActivateAbilities");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTagContainer       GameplayCueTags                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesExecuted_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params Parms{};

	Parms.GameplayCueTags = GameplayCueTags;
	Parms.PredictionKey = PredictionKey;
	Parms.GameplayCueParameters = GameplayCueParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTagContainer       GameplayCueTags                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesExecuted");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params Parms{};

	Parms.GameplayCueTags = GameplayCueTags;
	Parms.PredictionKey = PredictionKey;
	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTagContainer       GameplayCueTags                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params Parms{};

	Parms.GameplayCueTags = GameplayCueTags;
	Parms.PredictionKey = PredictionKey;
	Parms.GameplayCueParameters = GameplayCueParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.PredictionKey = PredictionKey;
	Parms.GameplayCueParameters = GameplayCueParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayEffectSpecForRPC   Spec                                                             (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted_FromSpec");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params Parms{};

	Parms.Spec = Spec;
	Parms.PredictionKey = PredictionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.PredictionKey = PredictionKey;
	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.PredictionKey = PredictionKey;
	Parms.GameplayCueParameters = GameplayCueParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayEffectSpecForRPC   Spec                                                             (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params Parms{};

	Parms.Spec = Spec;
	Parms.PredictionKey = PredictionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAdded_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.PredictionKey = PredictionKey;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAdded");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.PredictionKey = PredictionKey;
	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleContext                                                          (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "MakeOutgoingSpec");

	Params::UAbilitySystemComponent_MakeOutgoingSpec_Params Parms{};

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Level = Level;
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayEffectContextHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UAbilitySystemComponent::MakeEffectContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "MakeEffectContext");

	Params::UAbilitySystemComponent_MakeEffectContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAttributeSet>   Attributes                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataTable*                  DataTable                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::K2_InitStats(TSubclassOf<class UAttributeSet> Attributes, class UDataTable* DataTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "K2_InitStats");

	Params::UAbilitySystemComponent_K2_InitStats_Params Parms{};

	Parms.Attributes = Attributes;
	Parms.DataTable = DataTable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "IsGameplayCueActive");

	Params::UAbilitySystemComponent_IsGameplayCueActive_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::GetUserAbilityActivationInhibited()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetUserAbilityActivationInhibited");

	Params::UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemComponent::GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayEffectMagnitude");

	Params::UAbilitySystemComponent_GetGameplayEffectMagnitude_Params Parms{};

	Parms.Handle = Handle;
	Parms.Attribute = Attribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class UGameplayEffect> SourceGameplayEffect                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     OptionalInstigatorFilterComponent                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnforceOnGoingCheck                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::GetGameplayEffectCount(TSubclassOf<class UGameplayEffect> SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayEffectCount");

	Params::UAbilitySystemComponent_GetGameplayEffectCount_Params Parms{};

	Parms.SourceGameplayEffect = SourceGameplayEffect;
	Parms.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;
	Parms.bEnforceOnGoingCheck = bEnforceOnGoingCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffectsWithAllTags(const struct FGameplayTagContainer& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetActiveEffectsWithAllTags");

	Params::UAbilitySystemComponent_GetActiveEffectsWithAllTags_Params Parms{};

	Parms.Tags = Tags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FGameplayEffectQuery        Query                                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffects(struct FGameplayEffectQuery& Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetActiveEffects");

	Params::UAbilitySystemComponent_GetActiveEffects_Params Parms{};

	Parms.Query = Query;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientTryActivateAbility");

	Params::UAbilitySystemComponent_ClientTryActivateAbility_Params Parms{};

	Parms.AbilityToActivate = AbilityToActivate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class EAbilityGenericReplicatedEventEventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientSetReplicatedEvent");

	Params::UAbilitySystemComponent_ClientSetReplicatedEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.AbilityHandle = AbilityHandle;
	Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<class FString>              Strings                                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              GameFlags                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientPrintDebug_Response(TArray<class FString>& Strings, int32 GameFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientPrintDebug_Response");

	Params::UAbilitySystemComponent_ClientPrintDebug_Response_Params Parms{};

	Parms.Strings = Strings;
	Parms.GameFlags = GameFlags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToEnd                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfoActivationInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientEndAbility");

	Params::UAbilitySystemComponent_ClientEndAbility_Params Parms{};

	Parms.AbilityToEnd = AbilityToEnd;
	Parms.ActivationInfo = ActivationInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToCancel                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfoActivationInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientCancelAbility");

	Params::UAbilitySystemComponent_ClientCancelAbility_Params Parms{};

	Parms.AbilityToCancel = AbilityToCancel;
	Parms.ActivationInfo = ActivationInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData          TriggerEventData                                                 (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientActivateAbilitySucceedWithEventData");

	Params::UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params Parms{};

	Parms.AbilityToActivate = AbilityToActivate;
	Parms.PredictionKey = PredictionKey;
	Parms.TriggerEventData = TriggerEventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientActivateAbilitySucceed");

	Params::UAbilitySystemComponent_ClientActivateAbilitySucceed_Params Parms{};

	Parms.AbilityToActivate = AbilityToActivate;
	Parms.PredictionKey = PredictionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int16                              PredictionKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16 PredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientActivateAbilityFailed");

	Params::UAbilitySystemComponent_ClientActivateAbilityFailed_Params Parms{};

	Parms.AbilityToActivate = AbilityToActivate;
	Parms.PredictionKey = PredictionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     Target                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleContext                                                          (Parm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(TSubclassOf<class UGameplayEffect> GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectToTarget");

	Params::UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params Parms{};

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Target = Target;
	Parms.Level = Level;
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectToSelf");

	Params::UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params Parms{};

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Level = Level;
	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     Target                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectSpecToTarget");

	Params::UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params Parms{};

	Parms.SpecHandle = SpecHandle;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& SpecHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectSpecToSelf");

	Params::UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params Parms{};

	Parms.SpecHandle = SpecHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UAbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "AbilityConfirmOrCancel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int32 InputID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "AbilityAbilityKey__DelegateSignature");

	Params::UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params Parms{};

	Parms.InputID = InputID;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GameplayAbilities.AbilitySystemDebugHUD
// (Actor)

class UClass* AAbilitySystemDebugHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilitySystemDebugHUD");

	return Clss;
}


// AbilitySystemDebugHUD GameplayAbilities.Default__AbilitySystemDebugHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class AAbilitySystemDebugHUD* AAbilitySystemDebugHUD::GetDefaultObj()
{
	static class AAbilitySystemDebugHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbilitySystemDebugHUD*>(AAbilitySystemDebugHUD::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.AbilitySystemGlobals
// (None)

class UClass* UAbilitySystemGlobals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilitySystemGlobals");

	return Clss;
}


// AbilitySystemGlobals GameplayAbilities.Default__AbilitySystemGlobals
// (Public, ClassDefaultObject, ArchetypeObject)

class UAbilitySystemGlobals* UAbilitySystemGlobals::GetDefaultObj()
{
	static class UAbilitySystemGlobals* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilitySystemGlobals*>(UAbilitySystemGlobals::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
// (Exec, Native, Public)
// Parameters:

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemGlobals", "ToggleIgnoreAbilitySystemCosts");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
// (Exec, Native, Public)
// Parameters:

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemGlobals", "ToggleIgnoreAbilitySystemCooldowns");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      AbilityNameMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemGlobals::ServerEndPlayerAbility(const class FString& AbilityNameMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemGlobals", "ServerEndPlayerAbility");

	Params::UAbilitySystemGlobals_ServerEndPlayerAbility_Params Parms{};

	Parms.AbilityNameMatch = AbilityNameMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      AbilityNameMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemGlobals::ServerCancelPlayerAbility(const class FString& AbilityNameMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemGlobals", "ServerCancelPlayerAbility");

	Params::UAbilitySystemGlobals_ServerCancelPlayerAbility_Params Parms{};

	Parms.AbilityNameMatch = AbilityNameMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      AbilityNameMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemGlobals::ServerActivatePlayerAbility(const class FString& AbilityNameMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemGlobals", "ServerActivatePlayerAbility");

	Params::UAbilitySystemGlobals_ServerActivatePlayerAbility_Params Parms{};

	Parms.AbilityNameMatch = AbilityNameMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities
// (Final, Exec, Native, Public)
// Parameters:

void UAbilitySystemGlobals::ListPlayerAbilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemGlobals", "ListPlayerAbilities");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilitySystemInterface
// (None)

class UClass* IAbilitySystemInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilitySystemInterface");

	return Clss;
}


// AbilitySystemInterface GameplayAbilities.Default__AbilitySystemInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAbilitySystemInterface* IAbilitySystemInterface::GetDefaultObj()
{
	static class IAbilitySystemInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAbilitySystemInterface*>(IAbilitySystemInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// (None)

class UClass* IAbilitySystemReplicationProxyInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilitySystemReplicationProxyInterface");

	return Clss;
}


// AbilitySystemReplicationProxyInterface GameplayAbilities.Default__AbilitySystemReplicationProxyInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAbilitySystemReplicationProxyInterface* IAbilitySystemReplicationProxyInterface::GetDefaultObj()
{
	static class IAbilitySystemReplicationProxyInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAbilitySystemReplicationProxyInterface*>(IAbilitySystemReplicationProxyInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.AttributeSet
// (None)

class UClass* UAttributeSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeSet");

	return Clss;
}


// AttributeSet GameplayAbilities.Default__AttributeSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UAttributeSet* UAttributeSet::GetDefaultObj()
{
	static class UAttributeSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeSet*>(UAttributeSet::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.AbilitySystemTestAttributeSet
// (None)

class UClass* UAbilitySystemTestAttributeSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilitySystemTestAttributeSet");

	return Clss;
}


// AbilitySystemTestAttributeSet GameplayAbilities.Default__AbilitySystemTestAttributeSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UAbilitySystemTestAttributeSet* UAbilitySystemTestAttributeSet::GetDefaultObj()
{
	static class UAbilitySystemTestAttributeSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilitySystemTestAttributeSet*>(UAbilitySystemTestAttributeSet::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.AbilitySystemTestPawn
// (Actor, Pawn)

class UClass* AAbilitySystemTestPawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilitySystemTestPawn");

	return Clss;
}


// AbilitySystemTestPawn GameplayAbilities.Default__AbilitySystemTestPawn
// (Public, ClassDefaultObject, ArchetypeObject)

class AAbilitySystemTestPawn* AAbilitySystemTestPawn::GetDefaultObj()
{
	static class AAbilitySystemTestPawn* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbilitySystemTestPawn*>(AAbilitySystemTestPawn::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.AbilityTask
// (None)

class UClass* UAbilityTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask");

	return Clss;
}


// AbilityTask GameplayAbilities.Default__AbilityTask
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask* UAbilityTask::GetDefaultObj()
{
	static class UAbilityTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask*>(UAbilityTask::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// (None)

class UClass* UAbilityTask_ApplyRootMotion_Base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotion_Base");

	return Clss;
}


// AbilityTask_ApplyRootMotion_Base GameplayAbilities.Default__AbilityTask_ApplyRootMotion_Base
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_ApplyRootMotion_Base* UAbilityTask_ApplyRootMotion_Base::GetDefaultObj()
{
	static class UAbilityTask_ApplyRootMotion_Base* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_ApplyRootMotion_Base*>(UAbilityTask_ApplyRootMotion_Base::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// (None)

class UClass* UAbilityTask_ApplyRootMotionConstantForce::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotionConstantForce");

	return Clss;
}


// AbilityTask_ApplyRootMotionConstantForce GameplayAbilities.Default__AbilityTask_ApplyRootMotionConstantForce
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_ApplyRootMotionConstantForce* UAbilityTask_ApplyRootMotionConstantForce::GetDefaultObj()
{
	static class UAbilityTask_ApplyRootMotionConstantForce* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_ApplyRootMotionConstantForce*>(UAbilityTask_ApplyRootMotionConstantForce::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldDirection                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Strength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsAdditive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 StrengthOverTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionConstantForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionConstantForce* UAbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionConstantForce", "ApplyRootMotionConstantForce");

	Params::UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.WorldDirection = WorldDirection;
	Parms.Strength = Strength;
	Parms.Duration = Duration;
	Parms.bIsAdditive = bIsAdditive;
	Parms.StrengthOverTime = StrengthOverTime;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = SetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// (None)

class UClass* UAbilityTask_ApplyRootMotionJumpForce::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotionJumpForce");

	return Clss;
}


// AbilityTask_ApplyRootMotionJumpForce GameplayAbilities.Default__AbilityTask_ApplyRootMotionJumpForce
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_ApplyRootMotionJumpForce* UAbilityTask_ApplyRootMotionJumpForce::GetDefaultObj()
{
	static class UAbilityTask_ApplyRootMotionJumpForce* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_ApplyRootMotionJumpForce*>(UAbilityTask_ApplyRootMotionJumpForce::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilityTask_ApplyRootMotionJumpForce::OnLandedCallback(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "OnLandedCallback");

	Params::UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params Parms{};

	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAbilityTask_ApplyRootMotionJumpForce::Finish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "Finish");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinimumLandedTriggerTime                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFinishOnLanded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                PathOffsetCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TimeMappingCurve                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionJumpForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionJumpForce* UAbilityTask_ApplyRootMotionJumpForce::ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "ApplyRootMotionJumpForce");

	Params::UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Rotation = Rotation;
	Parms.Distance = Distance;
	Parms.Height = Height;
	Parms.Duration = Duration;
	Parms.MinimumLandedTriggerTime = MinimumLandedTriggerTime;
	Parms.bFinishOnLanded = bFinishOnLanded;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = SetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	Parms.PathOffsetCurve = PathOffsetCurve;
	Parms.TimeMappingCurve = TimeMappingCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// (None)

class UClass* UAbilityTask_ApplyRootMotionMoveToActorForce::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotionMoveToActorForce");

	return Clss;
}


// AbilityTask_ApplyRootMotionMoveToActorForce GameplayAbilities.Default__AbilityTask_ApplyRootMotionMoveToActorForce
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::GetDefaultObj()
{
	static class UAbilityTask_ApplyRootMotionMoveToActorForce* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_ApplyRootMotionMoveToActorForce*>(UAbilityTask_ApplyRootMotionMoveToActorForce::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
// (Final, Native, Public)
// Parameters:
// class AActor*                      OriginalTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      NewTarget                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "OnTargetActorSwapped");

	Params::UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Params Parms{};

	Parms.OriginalTarget = OriginalTarget;
	Parms.NewTarget = NewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
// (Final, Native, Protected)
// Parameters:

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnRep_TargetLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "OnRep_TargetLocation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetDataHandle                                                 (Parm, NativeAccessSpecifierPublic)
// int32                              TargetDataIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetActorIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocationOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionMoveToActorTargetOffsetTypeOffsetAlignment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TargetLerpSpeedHorizontal                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TargetLerpSpeedVertical                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetNewMovementMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           MovementMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestrictSpeedToExpected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                PathOffsetCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TimeMappingCurve                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDisableDestinationReachedInterrupt                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionMoveToActorForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int32 TargetDataIndex, int32 TargetActorIndex, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "ApplyRootMotionMoveToTargetDataActorForce");

	Params::UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.TargetDataHandle = TargetDataHandle;
	Parms.TargetDataIndex = TargetDataIndex;
	Parms.TargetActorIndex = TargetActorIndex;
	Parms.TargetLocationOffset = TargetLocationOffset;
	Parms.OffsetAlignment = OffsetAlignment;
	Parms.Duration = Duration;
	Parms.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
	Parms.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
	Parms.bSetNewMovementMode = bSetNewMovementMode;
	Parms.MovementMode = MovementMode;
	Parms.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	Parms.PathOffsetCurve = PathOffsetCurve;
	Parms.TimeMappingCurve = TimeMappingCurve;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = SetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	Parms.bDisableDestinationReachedInterrupt = bDisableDestinationReachedInterrupt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocationOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionMoveToActorTargetOffsetTypeOffsetAlignment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TargetLerpSpeedHorizontal                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TargetLerpSpeedVertical                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetNewMovementMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           MovementMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestrictSpeedToExpected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                PathOffsetCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TimeMappingCurve                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDisableDestinationReachedInterrupt                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionMoveToActorForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "ApplyRootMotionMoveToActorForce");

	Params::UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.TargetActor = TargetActor;
	Parms.TargetLocationOffset = TargetLocationOffset;
	Parms.OffsetAlignment = OffsetAlignment;
	Parms.Duration = Duration;
	Parms.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
	Parms.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
	Parms.bSetNewMovementMode = bSetNewMovementMode;
	Parms.MovementMode = MovementMode;
	Parms.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	Parms.PathOffsetCurve = PathOffsetCurve;
	Parms.TimeMappingCurve = TimeMappingCurve;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = SetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	Parms.bDisableDestinationReachedInterrupt = bDisableDestinationReachedInterrupt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// (None)

class UClass* UAbilityTask_ApplyRootMotionMoveToForce::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotionMoveToForce");

	return Clss;
}


// AbilityTask_ApplyRootMotionMoveToForce GameplayAbilities.Default__AbilityTask_ApplyRootMotionMoveToForce
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_ApplyRootMotionMoveToForce* UAbilityTask_ApplyRootMotionMoveToForce::GetDefaultObj()
{
	static class UAbilityTask_ApplyRootMotionMoveToForce* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_ApplyRootMotionMoveToForce*>(UAbilityTask_ApplyRootMotionMoveToForce::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetNewMovementMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           MovementMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestrictSpeedToExpected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                PathOffsetCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionMoveToForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionMoveToForce* UAbilityTask_ApplyRootMotionMoveToForce::ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToForce", "ApplyRootMotionMoveToForce");

	Params::UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.TargetLocation = TargetLocation;
	Parms.Duration = Duration;
	Parms.bSetNewMovementMode = bSetNewMovementMode;
	Parms.MovementMode = MovementMode;
	Parms.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	Parms.PathOffsetCurve = PathOffsetCurve;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = SetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// (None)

class UClass* UAbilityTask_ApplyRootMotionRadialForce::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotionRadialForce");

	return Clss;
}


// AbilityTask_ApplyRootMotionRadialForce GameplayAbilities.Default__AbilityTask_ApplyRootMotionRadialForce
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_ApplyRootMotionRadialForce* UAbilityTask_ApplyRootMotionRadialForce::GetDefaultObj()
{
	static class UAbilityTask_ApplyRootMotionRadialForce* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_ApplyRootMotionRadialForce*>(UAbilityTask_ApplyRootMotionRadialForce::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      LocationActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Strength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsPush                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsAdditive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNoZForce                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 StrengthDistanceFalloff                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 StrengthOverTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseFixedWorldDirection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    FixedWorldDirection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionRadialForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionRadialForce* UAbilityTask_ApplyRootMotionRadialForce::ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionRadialForce", "ApplyRootMotionRadialForce");

	Params::UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Location = Location;
	Parms.LocationActor = LocationActor;
	Parms.Strength = Strength;
	Parms.Duration = Duration;
	Parms.Radius = Radius;
	Parms.bIsPush = bIsPush;
	Parms.bIsAdditive = bIsAdditive;
	Parms.bNoZForce = bNoZForce;
	Parms.StrengthDistanceFalloff = StrengthDistanceFalloff;
	Parms.StrengthOverTime = StrengthOverTime;
	Parms.bUseFixedWorldDirection = bUseFixedWorldDirection;
	Parms.FixedWorldDirection = FixedWorldDirection;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = SetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_MoveToLocation
// (None)

class UClass* UAbilityTask_MoveToLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_MoveToLocation");

	return Clss;
}


// AbilityTask_MoveToLocation GameplayAbilities.Default__AbilityTask_MoveToLocation
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::GetDefaultObj()
{
	static class UAbilityTask_MoveToLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_MoveToLocation*>(UAbilityTask_MoveToLocation::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 OptionalInterpolationCurve                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                OptionalVectorInterpolationCurve                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_MoveToLocation* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::MoveToLocation(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_MoveToLocation", "MoveToLocation");

	Params::UAbilityTask_MoveToLocation_MoveToLocation_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Location = Location;
	Parms.Duration = Duration;
	Parms.OptionalInterpolationCurve = OptionalInterpolationCurve;
	Parms.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// (None)

class UClass* UAbilityTask_NetworkSyncPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_NetworkSyncPoint");

	return Clss;
}


// AbilityTask_NetworkSyncPoint GameplayAbilities.Default__AbilityTask_NetworkSyncPoint
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::GetDefaultObj()
{
	static class UAbilityTask_NetworkSyncPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_NetworkSyncPoint*>(UAbilityTask_NetworkSyncPoint::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAbilityTaskNetSyncType SyncType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_NetworkSyncPoint*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::WaitNetSync(class UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_NetworkSyncPoint", "WaitNetSync");

	Params::UAbilityTask_NetworkSyncPoint_WaitNetSync_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SyncType = SyncType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_NetworkSyncPoint::OnSignalCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_NetworkSyncPoint", "OnSignalCallback");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// (None)

class UClass* UAbilityTask_PlayMontageAndWait::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_PlayMontageAndWait");

	return Clss;
}


// AbilityTask_PlayMontageAndWait GameplayAbilities.Default__AbilityTask_PlayMontageAndWait
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::GetDefaultObj()
{
	static class UAbilityTask_PlayMontageAndWait* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_PlayMontageAndWait*>(UAbilityTask_PlayMontageAndWait::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
// (Final, Native, Public)
// Parameters:

void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageInterrupted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_PlayMontageAndWait::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageEnded");

	Params::UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageBlendingOut");

	Params::UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                MontageToPlay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rate                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartSection                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAbilityEnds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AnimRootMotionTranslationScale                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_PlayMontageAndWait*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, class FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "CreatePlayMontageAndWaitProxy");

	Params::UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.MontageToPlay = MontageToPlay;
	Parms.Rate = Rate;
	Parms.StartSection = StartSection;
	Parms.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	Parms.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_Repeat
// (None)

class UClass* UAbilityTask_Repeat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_Repeat");

	return Clss;
}


// AbilityTask_Repeat GameplayAbilities.Default__AbilityTask_Repeat
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_Repeat* UAbilityTask_Repeat::GetDefaultObj()
{
	static class UAbilityTask_Repeat* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_Repeat*>(UAbilityTask_Repeat::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeBetweenActions                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalActionCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_Repeat*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_Repeat* UAbilityTask_Repeat::RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32 TotalActionCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_Repeat", "RepeatAction");

	Params::UAbilityTask_Repeat_RepeatAction_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TimeBetweenActions = TimeBetweenActions;
	Parms.TotalActionCount = TotalActionCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_SpawnActor
// (None)

class UClass* UAbilityTask_SpawnActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_SpawnActor");

	return Clss;
}


// AbilityTask_SpawnActor GameplayAbilities.Default__AbilityTask_SpawnActor
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::GetDefaultObj()
{
	static class UAbilityTask_SpawnActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_SpawnActor*>(UAbilityTask_SpawnActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_SpawnActor*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class AActor> Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_SpawnActor", "SpawnActor");

	Params::UAbilityTask_SpawnActor_SpawnActor_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TargetData = TargetData;
	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_SpawnActor::FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_SpawnActor", "FinishSpawningActor");

	Params::UAbilityTask_SpawnActor_FinishSpawningActor_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TargetData = TargetData;
	Parms.SpawnedActor = SpawnedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SpawnedActor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilityTask_SpawnActor::BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class AActor> Class, class AActor** SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_SpawnActor", "BeginSpawningActor");

	Params::UAbilityTask_SpawnActor_BeginSpawningActor_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TargetData = TargetData;
	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpawnedActor != nullptr)
		*SpawnedActor = Parms.SpawnedActor;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_StartAbilityState
// (None)

class UClass* UAbilityTask_StartAbilityState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_StartAbilityState");

	return Clss;
}


// AbilityTask_StartAbilityState GameplayAbilities.Default__AbilityTask_StartAbilityState
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::GetDefaultObj()
{
	static class UAbilityTask_StartAbilityState* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_StartAbilityState*>(UAbilityTask_StartAbilityState::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StateName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEndCurrentState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_StartAbilityState*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::StartAbilityState(class UGameplayAbility* OwningAbility, class FName StateName, bool bEndCurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_StartAbilityState", "StartAbilityState");

	Params::UAbilityTask_StartAbilityState_StartAbilityState_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.StateName = StateName;
	Parms.bEndCurrentState = bEndCurrentState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// (None)

class UClass* UAbilityTask_VisualizeTargeting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_VisualizeTargeting");

	return Clss;
}


// AbilityTask_VisualizeTargeting GameplayAbilities.Default__AbilityTask_VisualizeTargeting
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::GetDefaultObj()
{
	static class UAbilityTask_VisualizeTargeting* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_VisualizeTargeting*>(UAbilityTask_VisualizeTargeting::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_VisualizeTargeting*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, class FName TaskInstanceName, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "VisualizeTargetingUsingActor");

	Params::UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TargetActor = TargetActor;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AGameplayAbilityTargetActor>Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_VisualizeTargeting*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargeting(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class FName TaskInstanceName, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "VisualizeTargeting");

	Params::UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Class = Class;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* SpawnedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_VisualizeTargeting::FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "FinishSpawningActor");

	Params::UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SpawnedActor = SpawnedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AGameplayAbilityTargetActor>Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* SpawnedActor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "BeginSpawningActor");

	Params::UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpawnedActor != nullptr)
		*SpawnedActor = Parms.SpawnedActor;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// (None)

class UClass* UAbilityTask_WaitAbilityActivate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitAbilityActivate");

	return Clss;
}


// AbilityTask_WaitAbilityActivate GameplayAbilities.Default__AbilityTask_WaitAbilityActivate
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::GetDefaultObj()
{
	static class UAbilityTask_WaitAbilityActivate* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitAbilityActivate*>(UAbilityTask_WaitAbilityActivate::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TagRequirements                                                  (Parm, NativeAccessSpecifierPublic)
// bool                               IncludeTriggeredAbilities                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityActivate*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivateWithTagRequirements");

	Params::UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TagRequirements = TagRequirements;
	Parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	Parms.TriggerOnce = TriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           Query                                                            (Parm, NativeAccessSpecifierPublic)
// bool                               IncludeTriggeredAbilities                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityActivate*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivate_Query");

	Params::UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Query = Query;
	Parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	Parms.TriggerOnce = TriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithoutTag                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IncludeTriggeredAbilities                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityActivate*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivate");

	Params::UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.WithTag = WithTag;
	Parms.WithoutTag = WithoutTag;
	Parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	Parms.TriggerOnce = TriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*            ActivatedAbility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(class UGameplayAbility* ActivatedAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityActivate", "OnAbilityActivate");

	Params::UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params Parms{};

	Parms.ActivatedAbility = ActivatedAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// (None)

class UClass* UAbilityTask_WaitAbilityCommit::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitAbilityCommit");

	return Clss;
}


// AbilityTask_WaitAbilityCommit GameplayAbilities.Default__AbilityTask_WaitAbilityCommit
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::GetDefaultObj()
{
	static class UAbilityTask_WaitAbilityCommit* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitAbilityCommit*>(UAbilityTask_WaitAbilityCommit::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           Query                                                            (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityCommit*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool TriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityCommit", "WaitForAbilityCommit_Query");

	Params::UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Query = Query;
	Parms.TriggerOnce = TriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithoutTage                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityCommit*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityCommit", "WaitForAbilityCommit");

	Params::UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.WithTag = WithTag;
	Parms.WithoutTage = WithoutTage;
	Parms.TriggerOnce = TriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*            ActivatedAbility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(class UGameplayAbility* ActivatedAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityCommit", "OnAbilityCommit");

	Params::UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params Parms{};

	Parms.ActivatedAbility = ActivatedAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// (None)

class UClass* UAbilityTask_WaitAttributeChange::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitAttributeChange");

	return Clss;
}


// AbilityTask_WaitAttributeChange GameplayAbilities.Default__AbilityTask_WaitAttributeChange
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::GetDefaultObj()
{
	static class UAbilityTask_WaitAttributeChange* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitAttributeChange*>(UAbilityTask_WaitAttributeChange::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          InAttribute                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                InWithTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                InWithoutTag                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWaitAttributeChangeComparisonInComparisonType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InComparisonValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAttributeChange", "WaitForAttributeChangeWithComparison");

	Params::UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.InAttribute = InAttribute;
	Parms.InWithTag = InWithTag;
	Parms.InWithoutTag = InWithoutTag;
	Parms.InComparisonType = InComparisonType;
	Parms.InComparisonValue = InComparisonValue;
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithSrcTag                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithoutSrcTag                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAttributeChange", "WaitForAttributeChange");

	Params::UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Attribute = Attribute;
	Parms.WithSrcTag = WithSrcTag;
	Parms.WithoutSrcTag = WithoutSrcTag;
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// (None)

class UClass* UAbilityTask_WaitAttributeChangeRatioThreshold::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitAttributeChangeRatioThreshold");

	return Clss;
}


// AbilityTask_WaitAttributeChangeRatioThreshold GameplayAbilities.Default__AbilityTask_WaitAttributeChangeRatioThreshold
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitAttributeChangeRatioThreshold* UAbilityTask_WaitAttributeChangeRatioThreshold::GetDefaultObj()
{
	static class UAbilityTask_WaitAttributeChangeRatioThreshold* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitAttributeChangeRatioThreshold*>(UAbilityTask_WaitAttributeChangeRatioThreshold::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          AttributeNumerator                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          AttributeDenominator                                             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWaitAttributeChangeComparisonComparisonType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ComparisonValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriggerOnce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChangeRatioThreshold*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChangeRatioThreshold* UAbilityTask_WaitAttributeChangeRatioThreshold::WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAttributeChangeRatioThreshold", "WaitForAttributeChangeRatioThreshold");

	Params::UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.AttributeNumerator = AttributeNumerator;
	Parms.AttributeDenominator = AttributeDenominator;
	Parms.ComparisonType = ComparisonType;
	Parms.ComparisonValue = ComparisonValue;
	Parms.bTriggerOnce = bTriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// (None)

class UClass* UAbilityTask_WaitAttributeChangeThreshold::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitAttributeChangeThreshold");

	return Clss;
}


// AbilityTask_WaitAttributeChangeThreshold GameplayAbilities.Default__AbilityTask_WaitAttributeChangeThreshold
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitAttributeChangeThreshold* UAbilityTask_WaitAttributeChangeThreshold::GetDefaultObj()
{
	static class UAbilityTask_WaitAttributeChangeThreshold* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitAttributeChangeThreshold*>(UAbilityTask_WaitAttributeChangeThreshold::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWaitAttributeChangeComparisonComparisonType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ComparisonValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriggerOnce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChangeThreshold*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChangeThreshold* UAbilityTask_WaitAttributeChangeThreshold::WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAttributeChangeThreshold", "WaitForAttributeChangeThreshold");

	Params::UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Attribute = Attribute;
	Parms.ComparisonType = ComparisonType;
	Parms.ComparisonValue = ComparisonValue;
	Parms.bTriggerOnce = bTriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_WaitCancel
// (None)

class UClass* UAbilityTask_WaitCancel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitCancel");

	return Clss;
}


// AbilityTask_WaitCancel GameplayAbilities.Default__AbilityTask_WaitCancel
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::GetDefaultObj()
{
	static class UAbilityTask_WaitCancel* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitCancel*>(UAbilityTask_WaitCancel::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitCancel*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::WaitCancel(class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitCancel", "WaitCancel");

	Params::UAbilityTask_WaitCancel_WaitCancel_Params Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitCancel::OnLocalCancelCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitCancel", "OnLocalCancelCallback");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitCancel::OnCancelCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitCancel", "OnCancelCallback");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilityTask_WaitConfirm
// (None)

class UClass* UAbilityTask_WaitConfirm::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitConfirm");

	return Clss;
}


// AbilityTask_WaitConfirm GameplayAbilities.Default__AbilityTask_WaitConfirm
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::GetDefaultObj()
{
	static class UAbilityTask_WaitConfirm* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitConfirm*>(UAbilityTask_WaitConfirm::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitConfirm*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::WaitConfirm(class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirm", "WaitConfirm");

	Params::UAbilityTask_WaitConfirm_WaitConfirm_Params Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*            InAbility                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitConfirm::OnConfirmCallback(class UGameplayAbility* InAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirm", "OnConfirmCallback");

	Params::UAbilityTask_WaitConfirm_OnConfirmCallback_Params Parms{};

	Parms.InAbility = InAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// (None)

class UClass* UAbilityTask_WaitConfirmCancel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitConfirmCancel");

	return Clss;
}


// AbilityTask_WaitConfirmCancel GameplayAbilities.Default__AbilityTask_WaitConfirmCancel
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::GetDefaultObj()
{
	static class UAbilityTask_WaitConfirmCancel* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitConfirmCancel*>(UAbilityTask_WaitConfirmCancel::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitConfirmCancel*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::WaitConfirmCancel(class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "WaitConfirmCancel");

	Params::UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnLocalConfirmCallback");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnLocalCancelCallback");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitConfirmCancel::OnConfirmCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnConfirmCallback");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitConfirmCancel::OnCancelCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnCancelCallback");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilityTask_WaitDelay
// (None)

class UClass* UAbilityTask_WaitDelay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitDelay");

	return Clss;
}


// AbilityTask_WaitDelay GameplayAbilities.Default__AbilityTask_WaitDelay
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::GetDefaultObj()
{
	static class UAbilityTask_WaitDelay* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitDelay*>(UAbilityTask_WaitDelay::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitDelay*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::WaitDelay(class UGameplayAbility* OwningAbility, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitDelay", "WaitDelay");

	Params::UAbilityTask_WaitDelay_WaitDelay_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// (None)

class UClass* UAbilityTask_WaitGameplayEffectApplied::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEffectApplied");

	return Clss;
}


// AbilityTask_WaitGameplayEffectApplied GameplayAbilities.Default__AbilityTask_WaitGameplayEffectApplied
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitGameplayEffectApplied* UAbilityTask_WaitGameplayEffectApplied::GetDefaultObj()
{
	static class UAbilityTask_WaitGameplayEffectApplied* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitGameplayEffectApplied*>(UAbilityTask_WaitGameplayEffectApplied::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UAbilitySystemComponent*     Target                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpec         SpecApplied                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied", "OnApplyGameplayEffectCallback");

	Params::UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params Parms{};

	Parms.Target = Target;
	Parms.SpecApplied = SpecApplied;
	Parms.ActiveHandle = ActiveHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// (None)

class UClass* UAbilityTask_WaitGameplayEffectApplied_Self::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEffectApplied_Self");

	return Clss;
}


// AbilityTask_WaitGameplayEffectApplied_Self GameplayAbilities.Default__AbilityTask_WaitGameplayEffectApplied_Self
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::GetDefaultObj()
{
	static class UAbilityTask_WaitGameplayEffectApplied_Self* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitGameplayEffectApplied_Self*>(UAbilityTask_WaitGameplayEffectApplied_Self::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleSourceFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           SourceTagQuery                                                   (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           TargetTagQuery                                                   (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffect                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Self*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied_Self", "WaitGameplayEffectAppliedToSelf_Query");

	Params::UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SourceFilter = SourceFilter;
	Parms.SourceTagQuery = SourceTagQuery;
	Parms.TargetTagQuery = TargetTagQuery;
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;
	Parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleSourceFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffect                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Self*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied_Self", "WaitGameplayEffectAppliedToSelf");

	Params::UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SourceFilter = SourceFilter;
	Parms.SourceTagRequirements = SourceTagRequirements;
	Parms.TargetTagRequirements = TargetTagRequirements;
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;
	Parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// (None)

class UClass* UAbilityTask_WaitGameplayEffectApplied_Target::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEffectApplied_Target");

	return Clss;
}


// AbilityTask_WaitGameplayEffectApplied_Target GameplayAbilities.Default__AbilityTask_WaitGameplayEffectApplied_Target
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::GetDefaultObj()
{
	static class UAbilityTask_WaitGameplayEffectApplied_Target* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitGameplayEffectApplied_Target*>(UAbilityTask_WaitGameplayEffectApplied_Target::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleSourceFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           SourceTagQuery                                                   (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           TargetTagQuery                                                   (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffect                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Target*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied_Target", "WaitGameplayEffectAppliedToTarget_Query");

	Params::UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SourceFilter = SourceFilter;
	Parms.SourceTagQuery = SourceTagQuery;
	Parms.TargetTagQuery = TargetTagQuery;
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;
	Parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleTargetFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffects                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Target*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied_Target", "WaitGameplayEffectAppliedToTarget");

	Params::UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TargetFilter = TargetFilter;
	Parms.SourceTagRequirements = SourceTagRequirements;
	Parms.TargetTagRequirements = TargetTagRequirements;
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;
	Parms.ListenForPeriodicEffects = ListenForPeriodicEffects;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// (None)

class UClass* UAbilityTask_WaitGameplayEffectBlockedImmunity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEffectBlockedImmunity");

	return Clss;
}


// AbilityTask_WaitGameplayEffectBlockedImmunity GameplayAbilities.Default__AbilityTask_WaitGameplayEffectBlockedImmunity
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitGameplayEffectBlockedImmunity* UAbilityTask_WaitGameplayEffectBlockedImmunity::GetDefaultObj()
{
	static class UAbilityTask_WaitGameplayEffectBlockedImmunity* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitGameplayEffectBlockedImmunity*>(UAbilityTask_WaitGameplayEffectBlockedImmunity::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalTarget                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectBlockedImmunity*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectBlockedImmunity* UAbilityTask_WaitGameplayEffectBlockedImmunity::WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectBlockedImmunity", "WaitGameplayEffectBlockedByImmunity");

	Params::UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SourceTagRequirements = SourceTagRequirements;
	Parms.TargetTagRequirements = TargetTagRequirements;
	Parms.OptionalExternalTarget = OptionalExternalTarget;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// (None)

class UClass* UAbilityTask_WaitGameplayEffectRemoved::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEffectRemoved");

	return Clss;
}


// AbilityTask_WaitGameplayEffectRemoved GameplayAbilities.Default__AbilityTask_WaitGameplayEffectRemoved
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::GetDefaultObj()
{
	static class UAbilityTask_WaitGameplayEffectRemoved* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitGameplayEffectRemoved*>(UAbilityTask_WaitGameplayEffectRemoved::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectRemoved*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectRemoved", "WaitForGameplayEffectRemoved");

	Params::UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGameplayEffectRemovalInfo  InGameplayEffectRemovalInfo                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectRemoved", "OnGameplayEffectRemoved");

	Params::UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params Parms{};

	Parms.InGameplayEffectRemovalInfo = InGameplayEffectRemovalInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// (None)

class UClass* UAbilityTask_WaitGameplayEffectStackChange::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEffectStackChange");

	return Clss;
}


// AbilityTask_WaitGameplayEffectStackChange GameplayAbilities.Default__AbilityTask_WaitGameplayEffectStackChange
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitGameplayEffectStackChange* UAbilityTask_WaitGameplayEffectStackChange::GetDefaultObj()
{
	static class UAbilityTask_WaitGameplayEffectStackChange* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitGameplayEffectStackChange*>(UAbilityTask_WaitGameplayEffectStackChange::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectStackChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectStackChange* UAbilityTask_WaitGameplayEffectStackChange::WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectStackChange", "WaitForGameplayEffectStackChange");

	Params::UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
// (Final, Native, Public)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OldCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayEffectStackChange::OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int32 NewCount, int32 OldCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectStackChange", "OnGameplayEffectStackChange");

	Params::UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params Parms{};

	Parms.Handle = Handle;
	Parms.NewCount = NewCount;
	Parms.OldCount = OldCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// (None)

class UClass* UAbilityTask_WaitGameplayEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEvent");

	return Clss;
}


// AbilityTask_WaitGameplayEvent GameplayAbilities.Default__AbilityTask_WaitGameplayEvent
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitGameplayEvent* UAbilityTask_WaitGameplayEvent::GetDefaultObj()
{
	static class UAbilityTask_WaitGameplayEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitGameplayEvent*>(UAbilityTask_WaitGameplayEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                EventTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalTarget                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyMatchExact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEvent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEvent* UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEvent", "WaitGameplayEvent");

	Params::UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.EventTag = EventTag;
	Parms.OptionalExternalTarget = OptionalExternalTarget;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;
	Parms.OnlyMatchExact = OnlyMatchExact;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// (None)

class UClass* UAbilityTask_WaitGameplayTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitGameplayTag");

	return Clss;
}


// AbilityTask_WaitGameplayTag GameplayAbilities.Default__AbilityTask_WaitGameplayTag
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitGameplayTag* UAbilityTask_WaitGameplayTag::GetDefaultObj()
{
	static class UAbilityTask_WaitGameplayTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitGameplayTag*>(UAbilityTask_WaitGameplayTag::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
// (Native, Public)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const struct FGameplayTag& Tag, int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayTag", "GameplayTagCallback");

	Params::UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params Parms{};

	Parms.Tag = Tag;
	Parms.NewCount = NewCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// (None)

class UClass* UAbilityTask_WaitGameplayTagAdded::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitGameplayTagAdded");

	return Clss;
}


// AbilityTask_WaitGameplayTagAdded GameplayAbilities.Default__AbilityTask_WaitGameplayTagAdded
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::GetDefaultObj()
{
	static class UAbilityTask_WaitGameplayTagAdded* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitGameplayTagAdded*>(UAbilityTask_WaitGameplayTagAdded::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InOptionalExternalTarget                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayTagAdded*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayTagAdded", "WaitGameplayTagAdd");

	Params::UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Tag = Tag;
	Parms.InOptionalExternalTarget = InOptionalExternalTarget;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// (None)

class UClass* UAbilityTask_WaitGameplayTagRemoved::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitGameplayTagRemoved");

	return Clss;
}


// AbilityTask_WaitGameplayTagRemoved GameplayAbilities.Default__AbilityTask_WaitGameplayTagRemoved
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::GetDefaultObj()
{
	static class UAbilityTask_WaitGameplayTagRemoved* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitGameplayTagRemoved*>(UAbilityTask_WaitGameplayTagRemoved::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InOptionalExternalTarget                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayTagRemoved*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayTagRemoved", "WaitGameplayTagRemove");

	Params::UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Tag = Tag;
	Parms.InOptionalExternalTarget = InOptionalExternalTarget;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_WaitInputPress
// (None)

class UClass* UAbilityTask_WaitInputPress::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitInputPress");

	return Clss;
}


// AbilityTask_WaitInputPress GameplayAbilities.Default__AbilityTask_WaitInputPress
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::GetDefaultObj()
{
	static class UAbilityTask_WaitInputPress* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitInputPress*>(UAbilityTask_WaitInputPress::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTestAlreadyPressed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitInputPress* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitInputPress", "WaitInputPress");

	Params::UAbilityTask_WaitInputPress_WaitInputPress_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.bTestAlreadyPressed = bTestAlreadyPressed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitInputPress::OnPressCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitInputPress", "OnPressCallback");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilityTask_WaitInputRelease
// (None)

class UClass* UAbilityTask_WaitInputRelease::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitInputRelease");

	return Clss;
}


// AbilityTask_WaitInputRelease GameplayAbilities.Default__AbilityTask_WaitInputRelease
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::GetDefaultObj()
{
	static class UAbilityTask_WaitInputRelease* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitInputRelease*>(UAbilityTask_WaitInputRelease::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTestAlreadyReleased                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitInputRelease*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitInputRelease", "WaitInputRelease");

	Params::UAbilityTask_WaitInputRelease_WaitInputRelease_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.bTestAlreadyReleased = bTestAlreadyReleased;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitInputRelease::OnReleaseCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitInputRelease", "OnReleaseCallback");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// (None)

class UClass* UAbilityTask_WaitMovementModeChange::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitMovementModeChange");

	return Clss;
}


// AbilityTask_WaitMovementModeChange GameplayAbilities.Default__AbilityTask_WaitMovementModeChange
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::GetDefaultObj()
{
	static class UAbilityTask_WaitMovementModeChange* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitMovementModeChange*>(UAbilityTask_WaitMovementModeChange::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
// (Final, Native, Public)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitMovementModeChange", "OnMovementModeChange");

	Params::UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           NewMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitMovementModeChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, enum class EMovementMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitMovementModeChange", "CreateWaitMovementModeChange");

	Params::UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_WaitOverlap
// (None)

class UClass* UAbilityTask_WaitOverlap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitOverlap");

	return Clss;
}


// AbilityTask_WaitOverlap GameplayAbilities.Default__AbilityTask_WaitOverlap
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::GetDefaultObj()
{
	static class UAbilityTask_WaitOverlap* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitOverlap*>(UAbilityTask_WaitOverlap::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitOverlap*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::WaitForOverlap(class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitOverlap", "WaitForOverlap");

	Params::UAbilityTask_WaitOverlap_WaitForOverlap_Params Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class UPrimitiveComponent*         HitComp                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilityTask_WaitOverlap::OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitOverlap", "OnHitCallback");

	Params::UAbilityTask_WaitOverlap_OnHitCallback_Params Parms{};

	Parms.HitComp = HitComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.AbilityTask_WaitTargetData
// (None)

class UClass* UAbilityTask_WaitTargetData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitTargetData");

	return Clss;
}


// AbilityTask_WaitTargetData GameplayAbilities.Default__AbilityTask_WaitTargetData
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::GetDefaultObj()
{
	static class UAbilityTask_WaitTargetData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitTargetData*>(UAbilityTask_WaitTargetData::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayTargetingConfirmationConfirmationType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitTargetData* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "WaitTargetDataUsingActor");

	Params::UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.ConfirmationType = ConfirmationType;
	Parms.TargetActor = TargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayTargetingConfirmationConfirmationType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AGameplayAbilityTargetActor>Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitTargetData* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetData(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, TSubclassOf<class AGameplayAbilityTargetActor> Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "WaitTargetData");

	Params::UAbilityTask_WaitTargetData_WaitTargetData_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.ConfirmationType = ConfirmationType;
	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReplicatedCancelledCallback");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                ActivationTag                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReplicatedCallback");

	Params::UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params Parms{};

	Parms.Data = Data;
	Parms.ActivationTag = ActivationTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReadyCallback");

	Params::UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataCancelledCallback");

	Params::UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* SpawnedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "FinishSpawningActor");

	Params::UAbilityTask_WaitTargetData_FinishSpawningActor_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SpawnedActor = SpawnedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AGameplayAbilityTargetActor>Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* SpawnedActor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilityTask_WaitTargetData::BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "BeginSpawningActor");

	Params::UAbilityTask_WaitTargetData_BeginSpawningActor_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpawnedActor != nullptr)
		*SpawnedActor = Parms.SpawnedActor;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// (None)

class UClass* UAbilityTask_WaitVelocityChange::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_WaitVelocityChange");

	return Clss;
}


// AbilityTask_WaitVelocityChange GameplayAbilities.Default__AbilityTask_WaitVelocityChange
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::GetDefaultObj()
{
	static class UAbilityTask_WaitVelocityChange* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_WaitVelocityChange*>(UAbilityTask_WaitVelocityChange::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinimumMagnitude                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitVelocityChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitVelocityChange", "CreateWaitVelocityChange");

	Params::UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Direction = Direction;
	Parms.MinimumMagnitude = MinimumMagnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.GameplayAbility
// (None)

class UClass* UGameplayAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbility");

	return Clss;
}


// GameplayAbility GameplayAbilities.Default__GameplayAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayAbility* UGameplayAbility::GetDefaultObj()
{
	static class UGameplayAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayAbility*>(UGameplayAbility::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldBlockAbilities                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "SetShouldBlockOtherAbilities");

	Params::UGameplayAbility_SetShouldBlockOtherAbilities_Params Parms{};

	Parms.bShouldBlockAbilities = bShouldBlockAbilities;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCanBeCanceled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "SetCanBeCanceled");

	Params::UGameplayAbility_SetCanBeCanceled_Params Parms{};

	Parms.bCanBeCanceled = bCanBeCanceled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag                EventTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData          Payload                                                          (Parm, NativeAccessSpecifierPublic)

void UGameplayAbility::SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "SendGameplayEvent");

	Params::UGameplayAbility_SendGameplayEvent_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.Payload = Payload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
// (Native, Public, BlueprintCallable)
// Parameters:

void UGameplayAbility::RemoveGrantedByEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "RemoveGrantedByEffect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.MontageStop
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              OverrideBlendOutTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::MontageStop(float OverrideBlendOutTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "MontageStop");

	Params::UGameplayAbility_MontageStop_Params Parms{};

	Parms.OverrideBlendOutTime = OverrideBlendOutTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        FromSectionName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ToSectionName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::MontageSetNextSectionName(class FName FromSectionName, class FName ToSectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "MontageSetNextSectionName");

	Params::UGameplayAbility_MontageSetNextSectionName_Params Parms{};

	Parms.FromSectionName = FromSectionName;
	Parms.ToSectionName = ToSectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        SectionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::MontageJumpToSection(class FName SectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "MontageJumpToSection");

	Params::UGameplayAbility_MontageJumpToSection_Params Parms{};

	Parms.SectionName = SectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SocketName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetingLocationInfoReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "MakeTargetLocationInfoFromOwnerSkeletalMeshComponent");

	Params::UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params Parms{};

	Parms.SocketName = SocketName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfoReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "MakeTargetLocationInfoFromOwnerActor");

	Params::UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "MakeOutgoingGameplayEffectSpec");

	Params::UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params Parms{};

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayEventData          Payload                                                          (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ShouldAbilityRespondToEvent");

	Params::UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_RemoveGameplayCue");

	Params::UGameplayAbility_K2_RemoveGameplayCue_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_OnEndAbility");

	Params::UGameplayAbility_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
// (Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ExecuteGameplayCueWithParams");

	Params::UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.GameplayCueParameters = GameplayCueParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleContext                                                          (Parm, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ExecuteGameplayCue");

	Params::UGameplayAbility_K2_ExecuteGameplayCue_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.K2_EndAbility
// (Native, Protected, BlueprintCallable)
// Parameters:

void UGameplayAbility::K2_EndAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_EndAbility");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
// (Event, Public, BlueprintEvent)
// Parameters:

void UGameplayAbility::K2_CommitExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CommitExecute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               BroadcastCommitEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CommitAbilityCost");

	Params::UGameplayAbility_K2_CommitAbilityCost_Params Parms{};

	Parms.BroadcastCommitEvent = BroadcastCommitEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               BroadcastCommitEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ForceCooldown                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CommitAbilityCooldown");

	Params::UGameplayAbility_K2_CommitAbilityCooldown_Params Parms{};

	Parms.BroadcastCommitEvent = BroadcastCommitEvent;
	Parms.ForceCooldown = ForceCooldown;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CommitAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CommitAbility");

	Params::UGameplayAbility_K2_CommitAbility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CheckAbilityCost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CheckAbilityCost");

	Params::UGameplayAbility_K2_CheckAbilityCost_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CheckAbilityCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CheckAbilityCooldown");

	Params::UGameplayAbility_K2_CheckAbilityCooldown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CancelAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameplayAbility::K2_CancelAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CancelAbility");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CanActivateAbility");

	Params::UGameplayAbility_K2_CanActivateAbility_Params Parms{};

	Parms.ActorInfo = ActorInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   EffectSpecHandle                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ApplyGameplayEffectSpecToTarget");

	Params::UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params Parms{};

	Parms.EffectSpecHandle = EffectSpecHandle;
	Parms.TargetData = TargetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   EffectSpecHandle                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ApplyGameplayEffectSpecToOwner");

	Params::UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params Parms{};

	Parms.EffectSpecHandle = EffectSpecHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
// (Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameter                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bRemoveOnAbilityEnd                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_AddGameplayCueWithParams");

	Params::UGameplayAbility_K2_AddGameplayCueWithParams_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.GameplayCueParameter = GameplayCueParameter;
	Parms.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleContext                                                          (Parm, NativeAccessSpecifierPublic)
// bool                               bRemoveOnAbilityEnd                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_AddGameplayCue");

	Params::UGameplayAbility_K2_AddGameplayCue_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.Context = Context;
	Parms.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ActivateAbilityFromEvent");

	Params::UGameplayAbility_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGameplayAbility::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void UGameplayAbility::InvalidateClientPredictionKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "InvalidateClientPredictionKey");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetOwningComponentFromActorInfo");

	Params::UGameplayAbility_GetOwningComponentFromActorInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UGameplayAbility::GetOwningActorFromActorInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetOwningActorFromActorInfo");

	Params::UGameplayAbility_GetOwningActorFromActorInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayEffectContextHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UGameplayAbility::GetGrantedByEffectContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetGrantedByEffectContext");

	Params::UGameplayAbility_GetGrantedByEffectContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGameplayAbility::GetCurrentSourceObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetCurrentSourceObject");

	Params::UGameplayAbility_GetCurrentSourceObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimMontage* UGameplayAbility::GetCurrentMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetCurrentMontage");

	Params::UGameplayAbility_GetCurrentMontage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGameplayAbility::GetCooldownTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetCooldownTimeRemaining");

	Params::UGameplayAbility_GetCooldownTimeRemaining_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilityTargetDataHandleOptionalTargetData                                               (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetContextFromOwner");

	Params::UGameplayAbility_GetContextFromOwner_Params Parms{};

	Parms.OptionalTargetData = OptionalTargetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UGameplayAbility::GetAvatarActorFromActorInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetAvatarActorFromActorInfo");

	Params::UGameplayAbility_GetAvatarActorFromActorInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetActorInfo");

	Params::UGameplayAbility_GetActorInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAbilitySystemComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilitySystemComponent* UGameplayAbility::GetAbilitySystemComponentFromActorInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetAbilitySystemComponentFromActorInfo");

	Params::UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGameplayAbility::GetAbilityLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetAbilityLevel");

	Params::UGameplayAbility_GetAbilityLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        InstanceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::EndTaskByInstanceName(class FName InstanceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "EndTaskByInstanceName");

	Params::UGameplayAbility_EndTaskByInstanceName_Params Parms{};

	Parms.InstanceName = InstanceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.EndAbilityState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        OptionalStateNameToEnd                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::EndAbilityState(class FName OptionalStateNameToEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "EndAbilityState");

	Params::UGameplayAbility_EndAbilityState_Params Parms{};

	Parms.OptionalStateNameToEnd = OptionalStateNameToEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        InstanceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEndTask                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::ConfirmTaskByInstanceName(class FName InstanceName, bool bEndTask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "ConfirmTaskByInstanceName");

	Params::UGameplayAbility_ConfirmTaskByInstanceName_Params Parms{};

	Parms.InstanceName = InstanceName;
	Parms.bEndTask = bEndTask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        InstanceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::CancelTaskByInstanceName(class FName InstanceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "CancelTaskByInstanceName");

	Params::UGameplayAbility_CancelTaskByInstanceName_Params Parms{};

	Parms.InstanceName = InstanceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& Handle, int32 StacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithHandle");

	Params::UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Params Parms{};

	Parms.Handle = Handle;
	Parms.StacksToRemove = StacksToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       WithGrantedTags                                                  (Parm, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int32 StacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithGrantedTags");

	Params::UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params Parms{};

	Parms.WithGrantedTags = WithGrantedTags;
	Parms.StacksToRemove = StacksToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       WithAssetTags                                                    (Parm, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int32 StacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithAssetTags");

	Params::UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params Parms{};

	Parms.WithAssetTags = WithAssetTags;
	Parms.StacksToRemove = StacksToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameplayEffectLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Stacks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "BP_ApplyGameplayEffectToTarget");

	Params::UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.GameplayEffectLevel = GameplayEffectLevel;
	Parms.Stacks = Stacks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameplayEffectLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Stacks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "BP_ApplyGameplayEffectToOwner");

	Params::UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params Parms{};

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.GameplayEffectLevel = GameplayEffectLevel;
	Parms.Stacks = Stacks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.GameplayAbility_CharacterJump
// (None)

class UClass* UGameplayAbility_CharacterJump::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbility_CharacterJump");

	return Clss;
}


// GameplayAbility_CharacterJump GameplayAbilities.Default__GameplayAbility_CharacterJump
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayAbility_CharacterJump* UGameplayAbility_CharacterJump::GetDefaultObj()
{
	static class UGameplayAbility_CharacterJump* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayAbility_CharacterJump*>(UGameplayAbility_CharacterJump::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayAbility_Montage
// (None)

class UClass* UGameplayAbility_Montage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbility_Montage");

	return Clss;
}


// GameplayAbility_Montage GameplayAbilities.Default__GameplayAbility_Montage
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayAbility_Montage* UGameplayAbility_Montage::GetDefaultObj()
{
	static class UGameplayAbility_Montage* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayAbility_Montage*>(UGameplayAbility_Montage::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayAbilityBlueprint
// (Blueprint)

class UClass* UGameplayAbilityBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbilityBlueprint");

	return Clss;
}


// GameplayAbilityBlueprint GameplayAbilities.Default__GameplayAbilityBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayAbilityBlueprint* UGameplayAbilityBlueprint::GetDefaultObj()
{
	static class UGameplayAbilityBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayAbilityBlueprint*>(UGameplayAbilityBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayAbilitySet
// (None)

class UClass* UGameplayAbilitySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbilitySet");

	return Clss;
}


// GameplayAbilitySet GameplayAbilities.Default__GameplayAbilitySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayAbilitySet* UGameplayAbilitySet::GetDefaultObj()
{
	static class UGameplayAbilitySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayAbilitySet*>(UGameplayAbilitySet::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayAbilityTargetActor
// (Actor)

class UClass* AGameplayAbilityTargetActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbilityTargetActor");

	return Clss;
}


// GameplayAbilityTargetActor GameplayAbilities.Default__GameplayAbilityTargetActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayAbilityTargetActor* AGameplayAbilityTargetActor::GetDefaultObj()
{
	static class AGameplayAbilityTargetActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayAbilityTargetActor*>(AGameplayAbilityTargetActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
// (Native, Public)
// Parameters:

void AGameplayAbilityTargetActor::ConfirmTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityTargetActor", "ConfirmTargeting");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
// (Native, Public)
// Parameters:

void AGameplayAbilityTargetActor::CancelTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityTargetActor", "CancelTargeting");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// (Actor)

class UClass* AGameplayAbilityTargetActor_Trace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbilityTargetActor_Trace");

	return Clss;
}


// GameplayAbilityTargetActor_Trace GameplayAbilities.Default__GameplayAbilityTargetActor_Trace
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayAbilityTargetActor_Trace* AGameplayAbilityTargetActor_Trace::GetDefaultObj()
{
	static class AGameplayAbilityTargetActor_Trace* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayAbilityTargetActor_Trace*>(AGameplayAbilityTargetActor_Trace::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// (Actor)

class UClass* AGameplayAbilityTargetActor_GroundTrace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbilityTargetActor_GroundTrace");

	return Clss;
}


// GameplayAbilityTargetActor_GroundTrace GameplayAbilities.Default__GameplayAbilityTargetActor_GroundTrace
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayAbilityTargetActor_GroundTrace* AGameplayAbilityTargetActor_GroundTrace::GetDefaultObj()
{
	static class AGameplayAbilityTargetActor_GroundTrace* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayAbilityTargetActor_GroundTrace*>(AGameplayAbilityTargetActor_GroundTrace::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// (Actor)

class UClass* AGameplayAbilityTargetActor_ActorPlacement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbilityTargetActor_ActorPlacement");

	return Clss;
}


// GameplayAbilityTargetActor_ActorPlacement GameplayAbilities.Default__GameplayAbilityTargetActor_ActorPlacement
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayAbilityTargetActor_ActorPlacement* AGameplayAbilityTargetActor_ActorPlacement::GetDefaultObj()
{
	static class AGameplayAbilityTargetActor_ActorPlacement* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayAbilityTargetActor_ActorPlacement*>(AGameplayAbilityTargetActor_ActorPlacement::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// (Actor)

class UClass* AGameplayAbilityTargetActor_Radius::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbilityTargetActor_Radius");

	return Clss;
}


// GameplayAbilityTargetActor_Radius GameplayAbilities.Default__GameplayAbilityTargetActor_Radius
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayAbilityTargetActor_Radius* AGameplayAbilityTargetActor_Radius::GetDefaultObj()
{
	static class AGameplayAbilityTargetActor_Radius* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayAbilityTargetActor_Radius*>(AGameplayAbilityTargetActor_Radius::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// (Actor)

class UClass* AGameplayAbilityTargetActor_SingleLineTrace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbilityTargetActor_SingleLineTrace");

	return Clss;
}


// GameplayAbilityTargetActor_SingleLineTrace GameplayAbilities.Default__GameplayAbilityTargetActor_SingleLineTrace
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayAbilityTargetActor_SingleLineTrace* AGameplayAbilityTargetActor_SingleLineTrace::GetDefaultObj()
{
	static class AGameplayAbilityTargetActor_SingleLineTrace* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayAbilityTargetActor_SingleLineTrace*>(AGameplayAbilityTargetActor_SingleLineTrace::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayAbilityWorldReticle
// (Actor)

class UClass* AGameplayAbilityWorldReticle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbilityWorldReticle");

	return Clss;
}


// GameplayAbilityWorldReticle GameplayAbilities.Default__GameplayAbilityWorldReticle
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayAbilityWorldReticle* AGameplayAbilityWorldReticle::GetDefaultObj()
{
	static class AGameplayAbilityWorldReticle* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayAbilityWorldReticle*>(AGameplayAbilityWorldReticle::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(class FName ParamName, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "SetReticleMaterialParamVector");

	Params::AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(class FName ParamName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "SetReticleMaterialParamFloat");

	Params::AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "OnValidTargetChanged");

	Params::AGameplayAbilityWorldReticle_OnValidTargetChanged_Params Parms{};

	Parms.bNewValue = bNewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "OnTargetingAnActor");

	Params::AGameplayAbilityWorldReticle_OnTargetingAnActor_Params Parms{};

	Parms.bNewValue = bNewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
// (Event, Public, BlueprintEvent)
// Parameters:

void AGameplayAbilityWorldReticle::OnParametersInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "OnParametersInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFaceIn2D                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "FaceTowardSource");

	Params::AGameplayAbilityWorldReticle_FaceTowardSource_Params Parms{};

	Parms.bFaceIn2D = bFaceIn2D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// (Actor)

class UClass* AGameplayAbilityWorldReticle_ActorVisualization::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayAbilityWorldReticle_ActorVisualization");

	return Clss;
}


// GameplayAbilityWorldReticle_ActorVisualization GameplayAbilities.Default__GameplayAbilityWorldReticle_ActorVisualization
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayAbilityWorldReticle_ActorVisualization* AGameplayAbilityWorldReticle_ActorVisualization::GetDefaultObj()
{
	static class AGameplayAbilityWorldReticle_ActorVisualization* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayAbilityWorldReticle_ActorVisualization*>(AGameplayAbilityWorldReticle_ActorVisualization::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayCueInterface
// (None)

class UClass* IGameplayCueInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayCueInterface");

	return Clss;
}


// GameplayCueInterface GameplayAbilities.Default__GameplayCueInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGameplayCueInterface* IGameplayCueInterface::GetDefaultObj()
{
	static class IGameplayCueInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameplayCueInterface*>(IGameplayCueInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void IGameplayCueInterface::ForwardGameplayCueToParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueInterface", "ForwardGameplayCueToParent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void IGameplayCueInterface::BlueprintCustomHandler(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueInterface", "BlueprintCustomHandler");

	Params::IGameplayCueInterface_BlueprintCustomHandler_Params Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GameplayAbilities.GameplayCueManager
// (None)

class UClass* UGameplayCueManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayCueManager");

	return Clss;
}


// GameplayCueManager GameplayAbilities.Default__GameplayCueManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayCueManager* UGameplayCueManager::GetDefaultObj()
{
	static class UGameplayCueManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayCueManager*>(UGameplayCueManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayCueNotify_Actor
// (Actor)

class UClass* AGameplayCueNotify_Actor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayCueNotify_Actor");

	return Clss;
}


// GameplayCueNotify_Actor GameplayAbilities.Default__GameplayCueNotify_Actor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayCueNotify_Actor* AGameplayCueNotify_Actor::GetDefaultObj()
{
	static class AGameplayCueNotify_Actor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayCueNotify_Actor*>(AGameplayCueNotify_Actor::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGameplayCueNotify_Actor::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "WhileActive");

	Params::AGameplayCueNotify_Actor_WhileActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGameplayCueNotify_Actor::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "OnRemove");

	Params::AGameplayCueNotify_Actor_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
// (Native, Public)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayCueNotify_Actor::OnOwnerDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "OnOwnerDestroyed");

	Params::AGameplayCueNotify_Actor_OnOwnerDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGameplayCueNotify_Actor::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "OnExecute");

	Params::AGameplayCueNotify_Actor_OnExecute_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGameplayCueNotify_Actor::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "OnActive");

	Params::AGameplayCueNotify_Actor_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AGameplayCueNotify_Actor::K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "K2_HandleGameplayCue");

	Params::AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
// (Native, Public, BlueprintCallable)
// Parameters:

void AGameplayCueNotify_Actor::K2_EndGameplayCue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "K2_EndGameplayCue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.GameplayCueNotify_Static
// (None)

class UClass* UGameplayCueNotify_Static::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayCueNotify_Static");

	return Clss;
}


// GameplayCueNotify_Static GameplayAbilities.Default__GameplayCueNotify_Static
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayCueNotify_Static* UGameplayCueNotify_Static::GetDefaultObj()
{
	static class UGameplayCueNotify_Static* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayCueNotify_Static*>(UGameplayCueNotify_Static::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Static", "WhileActive");

	Params::UGameplayCueNotify_Static_WhileActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Static", "OnRemove");

	Params::UGameplayCueNotify_Static_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Static", "OnExecute");

	Params::UGameplayCueNotify_Static_OnExecute_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Static", "OnActive");

	Params::UGameplayCueNotify_Static_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueNotify_Static::K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Static", "K2_HandleGameplayCue");

	Params::UGameplayCueNotify_Static_K2_HandleGameplayCue_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GameplayAbilities.GameplayCueNotify_HitImpact
// (None)

class UClass* UGameplayCueNotify_HitImpact::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayCueNotify_HitImpact");

	return Clss;
}


// GameplayCueNotify_HitImpact GameplayAbilities.Default__GameplayCueNotify_HitImpact
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayCueNotify_HitImpact* UGameplayCueNotify_HitImpact::GetDefaultObj()
{
	static class UGameplayCueNotify_HitImpact* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayCueNotify_HitImpact*>(UGameplayCueNotify_HitImpact::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayCueSet
// (None)

class UClass* UGameplayCueSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayCueSet");

	return Clss;
}


// GameplayCueSet GameplayAbilities.Default__GameplayCueSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayCueSet* UGameplayCueSet::GetDefaultObj()
{
	static class UGameplayCueSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayCueSet*>(UGameplayCueSet::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayCueTranslator
// (None)

class UClass* UGameplayCueTranslator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayCueTranslator");

	return Clss;
}


// GameplayCueTranslator GameplayAbilities.Default__GameplayCueTranslator
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayCueTranslator* UGameplayCueTranslator::GetDefaultObj()
{
	static class UGameplayCueTranslator* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayCueTranslator*>(UGameplayCueTranslator::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayCueTranslator_Test
// (None)

class UClass* UGameplayCueTranslator_Test::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayCueTranslator_Test");

	return Clss;
}


// GameplayCueTranslator_Test GameplayAbilities.Default__GameplayCueTranslator_Test
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayCueTranslator_Test* UGameplayCueTranslator_Test::GetDefaultObj()
{
	static class UGameplayCueTranslator_Test* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayCueTranslator_Test*>(UGameplayCueTranslator_Test::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayEffect
// (None)

class UClass* UGameplayEffect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayEffect");

	return Clss;
}


// GameplayEffect GameplayAbilities.Default__GameplayEffect
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayEffect* UGameplayEffect::GetDefaultObj()
{
	static class UGameplayEffect* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayEffect*>(UGameplayEffect::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayEffectCalculation
// (None)

class UClass* UGameplayEffectCalculation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayEffectCalculation");

	return Clss;
}


// GameplayEffectCalculation GameplayAbilities.Default__GameplayEffectCalculation
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayEffectCalculation* UGameplayEffectCalculation::GetDefaultObj()
{
	static class UGameplayEffectCalculation* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayEffectCalculation*>(UGameplayEffectCalculation::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// (None)

class UClass* UGameplayEffectCustomApplicationRequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayEffectCustomApplicationRequirement");

	return Clss;
}


// GameplayEffectCustomApplicationRequirement GameplayAbilities.Default__GameplayEffectCustomApplicationRequirement
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayEffectCustomApplicationRequirement* UGameplayEffectCustomApplicationRequirement::GetDefaultObj()
{
	static class UGameplayEffectCustomApplicationRequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayEffectCustomApplicationRequirement*>(UGameplayEffectCustomApplicationRequirement::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UGameplayEffect*             GameplayEffect                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpec         Spec                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     ASC                                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayEffectCustomApplicationRequirement", "CanApplyGameplayEffect");

	Params::UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params Parms{};

	Parms.GameplayEffect = GameplayEffect;
	Parms.Spec = Spec;
	Parms.ASC = ASC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.GameplayEffectExecutionCalculation
// (None)

class UClass* UGameplayEffectExecutionCalculation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayEffectExecutionCalculation");

	return Clss;
}


// GameplayEffectExecutionCalculation GameplayAbilities.Default__GameplayEffectExecutionCalculation
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayEffectExecutionCalculation* UGameplayEffectExecutionCalculation::GetDefaultObj()
{
	static class UGameplayEffectExecutionCalculation* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayEffectExecutionCalculation*>(UGameplayEffectExecutionCalculation::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectCustomExecutionParametersExecutionParams                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayEffectCustomExecutionOutputOutExecutionOutput                                               (Parm, OutParm, NativeAccessSpecifierPublic)

void UGameplayEffectExecutionCalculation::Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayEffectExecutionCalculation", "Execute");

	Params::UGameplayEffectExecutionCalculation_Execute_Params Parms{};

	Parms.ExecutionParams = ExecutionParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = std::move(Parms.OutExecutionOutput);

}


// Class GameplayAbilities.GameplayEffectUIData
// (None)

class UClass* UGameplayEffectUIData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayEffectUIData");

	return Clss;
}


// GameplayEffectUIData GameplayAbilities.Default__GameplayEffectUIData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayEffectUIData* UGameplayEffectUIData::GetDefaultObj()
{
	static class UGameplayEffectUIData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayEffectUIData*>(UGameplayEffectUIData::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// (None)

class UClass* UGameplayEffectUIData_TextOnly::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayEffectUIData_TextOnly");

	return Clss;
}


// GameplayEffectUIData_TextOnly GameplayAbilities.Default__GameplayEffectUIData_TextOnly
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayEffectUIData_TextOnly* UGameplayEffectUIData_TextOnly::GetDefaultObj()
{
	static class UGameplayEffectUIData_TextOnly* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayEffectUIData_TextOnly*>(UGameplayEffectUIData_TextOnly::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayAbilities.GameplayModMagnitudeCalculation
// (None)

class UClass* UGameplayModMagnitudeCalculation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayModMagnitudeCalculation");

	return Clss;
}


// GameplayModMagnitudeCalculation GameplayAbilities.Default__GameplayModMagnitudeCalculation
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayModMagnitudeCalculation* UGameplayModMagnitudeCalculation::GetDefaultObj()
{
	static class UGameplayModMagnitudeCalculation* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayModMagnitudeCalculation*>(UGameplayModMagnitudeCalculation::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "CalculateBaseMagnitude");

	Params::UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params Parms{};

	Parms.Spec = Spec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayAbilities.GameplayTagReponseTable
// (None)

class UClass* UGameplayTagReponseTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagReponseTable");

	return Clss;
}


// GameplayTagReponseTable GameplayAbilities.Default__GameplayTagReponseTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagReponseTable* UGameplayTagReponseTable::GetDefaultObj()
{
	static class UGameplayTagReponseTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagReponseTable*>(UGameplayTagReponseTable::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     ASC                                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Idx                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTagReponseTable::TagResponseEvent(const struct FGameplayTag& Tag, int32 NewCount, class UAbilitySystemComponent* ASC, int32 Idx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagReponseTable", "TagResponseEvent");

	Params::UGameplayTagReponseTable_TagResponseEvent_Params Parms{};

	Parms.Tag = Tag;
	Parms.NewCount = NewCount;
	Parms.ASC = ASC;
	Parms.Idx = Idx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayAbilities.TickableAttributeSetInterface
// (None)

class UClass* ITickableAttributeSetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableAttributeSetInterface");

	return Clss;
}


// TickableAttributeSetInterface GameplayAbilities.Default__TickableAttributeSetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITickableAttributeSetInterface* ITickableAttributeSetInterface::GetDefaultObj()
{
	static class ITickableAttributeSetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITickableAttributeSetInterface*>(ITickableAttributeSetInterface::StaticClass()->DefaultObject);

	return Default;
}

}


