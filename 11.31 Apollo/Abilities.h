#pragma once
#include "Includes.h"
#include "Util.h"
static FGameplayAbilitySpecHandle* (*GiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec) = decltype(GiveAbility)(BaseAddress() + 0xb76e70);

static void GivePCAbilitySet(UAbilitySystemComponent* ASC)
{
	auto AbilitySet = StaticFindObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_AthenaPlayer.GAS_AthenaPlayer");
	for (int i = 0; i < AbilitySet->GameplayAbilities.Num(); i++)
	{
		UClass* AbilityClass = AbilitySet->GameplayAbilities[i].Get();
		UGameplayAbility* AbilityDefaultObject = (UGameplayAbility*)AbilityClass->DefaultObject;

		FGameplayAbilitySpecHandle Handle{};
		Handle.GenerateNewHandle();

		FGameplayAbilitySpec Spec{ -1,-1,-1 };
		Spec.Ability = AbilityDefaultObject;
		Spec.Level = 0;
		Spec.InputID = -1;
		Spec.Handle = Handle;

		GiveAbility(ASC, &Handle, Spec);
	}
}