#pragma once
#include "NetHooks.h"
#include "Hooks.h"
#include "Player.h"

struct ItemRow
{
	UFortItemDefinition* Def;
	int Level = -1;
	int DropCount;
	float Weight;
	int LoadedAmmo = 0;
};


namespace looting
{
	// yay
	static bool bspawnloot = true;
}


struct FUObjectItem
{
	UObject* Object;
	int32 Flags;
	int32 ClusterRootIndex;
	int32 SerialNumber;

	bool IsPendingKill() const
	{

	}
	}
};

if (IsFactionChest)
{
	/*for (size_t i = 0; i < 2 /*3* /; i++)
	{*/
	ItemRow* Item = GetRandomItem(TierGroupStr, EFortItemType::WeaponRanged);
	while (!Item) {
		Item = GetRandomItem(TierGroupStr, EFortItemType::WeaponRanged);
	}
	if (!Item || !Item->Def)
		return 0;

	int Ammo2 = 0;
	if (Item->Def->GetName().starts_with("WID_Assault_LMG_Athena_")) {
		Ammo2 = 45;
	}

	SpawnPickup(Loc, Item->Def, Item->DropCount, Item->LoadedAmmo, Flag, Source);
	UFortAmmoItemDefinition* AmmoDef = (UFortAmmoItemDefinition*)((UFortWeaponRangedItemDefinition*)Item->Def)->GetAmmoWorldItemDefinition_BP();
	if (AmmoDef && Item->Def != AmmoDef && (AmmoDef->DropCount > 0 || Ammo2 > 0) && AmmoDef->GetName() != "AmmoInfiniteCrossbow_Athena")
	{
		SpawnPickup(Loc, AmmoDef, Ammo2 == 0 ? AmmoDef->DropCount == 4 ? 6 : (AmmoDef->DropCount == 10 ? 2 : AmmoDef->DropCount) : Ammo2, 0, Flag, Source);
	}
	}
}
Object->bAlreadySearched = true;
