#pragma once
#include "Includes.h"
#include "Util.h"
static FGameplayAbilitySpecHandle* (*GiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec) = decltype(GiveAbility)(BaseAddress() + 0xb76e70);
static __int64 (*specthing)(void*, void*, char, int, void*) = decltype(specthing)(BaseAddress() + 0xB9AF40);

FGameplayAbilitySpec* GiveAbilityToPlayerState(AFortPlayerStateAthena* PlayerState, UClass* AbilityClass, UObject* Source = nullptr, bool bActivateOnce = false)
{
	if (!PlayerState || !AbilityClass)
		return nullptr;

	FGameplayAbilitySpec Spec{};
	specthing(&Spec, AbilityClass->DefaultObject, 1, -1, Source);
	Spec.RemoveAfterActivation = bActivateOnce;

	GiveAbility(PlayerState->AbilitySystemComponent, &Spec.Handle, Spec);

	return &Spec;
}

void GivePlayerStateAbilitySet(AFortPlayerStateAthena* PS)
{
	static auto AthenaPlayerSet = StaticLoadObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_AthenaPlayer.GAS_AthenaPlayer");
	for (int i = 0; i < AthenaPlayerSet->GameplayAbilities.Num(); i++)
	{
		GiveAbilityToPlayerState(PS, AthenaPlayerSet->GameplayAbilities[i].Get());
	}
}


static char (*InternalServerTryActivateAbility)(UAbilitySystemComponent* a1, FGameplayAbilitySpecHandle a2, FPredictionKey a3, UGameplayAbility** a4, void* a5, FGameplayEventData* a6) = decltype(InternalServerTryActivateAbility)(BaseAddress() + 0xb78580);

void InternalServerTryActivateAbilityHook(UAbilitySystemComponent* ASC, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey, FGameplayEventData* TriggerEventData)
{
	FGameplayAbilitySpec* Spec = nullptr;
	for (int i = 0; i < ASC->ActivatableAbilities.Items.Num(); i++)
	{
		if (ASC->ActivatableAbilities.Items[i].Handle.Handle == Handle.Handle)
		{
			Spec = &ASC->ActivatableAbilities.Items[i];
		}
	}

	if (!Spec)
	{
		ASC->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
		return;
	}

	UGameplayAbility* InstancedAbility = nullptr;
	Spec->InputPressed = true;

	if (!InternalServerTryActivateAbility(ASC, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
	{
		LOG("Server fail activate chat");
		ASC->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
		Spec->InputPressed = false;

		ASC->ActivatableAbilities.MarkItemDirty(*Spec);
	}

}
static __int64 (*Fgameplauyabilirtyspecctor)(void*, void*, char, int, void*) = decltype(Fgameplauyabilirtyspecctor)(BaseAddress() + 0xB9AF40);

FGameplayAbilitySpec* GrantAbility(AFortPlayerStateAthena* PlayerState, UClass* AbilityClass, UObject* SourceObj = nullptr, bool ActivateOnce = false)
{
	if (!PlayerState || !AbilityClass)
		return nullptr;
	if (!PlayerState->AbilitySystemComponent)
		return nullptr;

	FGameplayAbilitySpec TEST{};
	Fgameplauyabilirtyspecctor(&TEST, AbilityClass->DefaultObject, 1, -1, SourceObj);
	TEST.RemoveAfterActivation = ActivateOnce;

	GiveAbility(PlayerState->AbilitySystemComponent, &TEST.Handle, TEST);

	return &TEST;
}