#pragma once
#include "NetHooks.h"
#include "Hooks.h"
#include "Player.h"

namespace looting
{
	// yay
	static bool bspawnloot = true;
}

void InitLooting()
{
	void InitLooting()
	{
		//AR
		ItemRow Row1{};
#ifndef TESTING_LOOTPOOL
#ifndef ONE_SHOT
		Row1.Def = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_Auto_Athena_C_Ore_T02.WID_Assault_Auto_Athena_C_Ore_T02");
		Row1.Level = 0;
		Row1.DropCount = 1;
		Row1.LoadedAmmo = GetAmmoForDef((UFortWeaponItemDefinition*)Row1.Def);
		Row1.Weight = 0.15f;
		LootForTiers["Loot_AthenaFloorLoot_Warmup"].push_back(Row1);
		LootForTiers["Loot_AthenaFloorLoot"].push_back(Row1);
		LootForTiers["Loot_AthenaTreasure"].push_back(Row1);
		LootForTiers["Loot_AthenaVending"].push_back(Row1);

		Row1.Def = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_Auto_Athena_UC_Ore_T03.WID_Assault_Auto_Athena_UC_Ore_T03");
		Row1.Level = 1;
		Row1.DropCount = 1;
		Row1.LoadedAmmo = GetAmmoForDef((UFortWeaponItemDefinition*)Row1.Def);
		Row1.Weight = 0.30f;
		LootForTiers["Loot_AthenaFloorLoot_Warmup"].push_back(Row1);
		LootForTiers["Loot_AthenaFloorLoot"].push_back(Row1);
		Row1.Weight = 0.15f;
		LootForTiers["Loot_AthenaTreasure"].push_back(Row1);
		LootForTiers["Loot_AthenaVending"].push_back(Row1);

		Row1.Def = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_Auto_Athena_R_Ore_T03.WID_Assault_Auto_Athena_R_Ore_T03");
		Row1.Level = 2;
		Row1.DropCount = 1;
		Row1.LoadedAmmo = GetAmmoForDef((UFortWeaponItemDefinition*)Row1.Def);
		Row1.Weight = 0.10f;
		LootForTiers["Loot_AthenaFloorLoot_Warmup"].push_back(Row1);
		LootForTiers["Loot_AthenaFloorLoot"].push_back(Row1);
		Row1.Weight = 0.35f;
		LootForTiers["Loot_AthenaTreasure"].push_back(Row1);
		LootForTiers["Loot_AthenaVending"].push_back(Row1);

		Row1.Def = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_AutoHigh_Athena_VR_Ore_T03.WID_Assault_AutoHigh_Athena_VR_Ore_T03");
		Row1.Level = 3;
		Row1.DropCount = 1;
		Row1.LoadedAmmo = GetAmmoForDef((UFortWeaponItemDefinition*)Row1.Def);
		Row1.Weight = 0.05f;
		LootForTiers["Loot_AthenaTreasure"].push_back(Row1);
		LootForTiers["Loot_AthenaVending"].push_back(Row1);

		Row1.Def = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03");
		Row1.Level = 4;
		Row1.DropCount = 1;
		Row1.LoadedAmmo = GetAmmoForDef((UFortWeaponItemDefinition*)Row1.Def);
		Row1.Weight = 0.01f;
		LootForTiers["Loot_AthenaTreasure"].push_back(Row1);
		LootForTiers["Loot_AthenaVending"].push_back(Row1);
		//End AR

		//Burst Rifle
		Row1.Def = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_SemiAuto_Athena_C_Ore_T02.WID_Assault_SemiAuto_Athena_C_Ore_T02");
		Row1.Level = 0;
		Row1.DropCount = 1;
		Row1.LoadedAmmo = GetAmmoForDef((UFortWeaponItemDefinition*)Row1.Def);
		Row1.Weight = 0.15f;
		LootForTiers["Loot_AthenaFloorLoot_Warmup"].push_back(Row1);
		LootForTiers["Loot_AthenaFloorLoot"].push_back(Row1);
		LootForTiers["Loot_AthenaTreasure"].push_back(Row1);
		LootForTiers["Loot_AthenaVending"].push_back(Row1);

		Row1.Def = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_SemiAuto_Athena_UC_Ore_T03.WID_Assault_SemiAuto_Athena_UC_Ore_T03");
		Row1.Level = 1;
		Row1.DropCount = 1;
		Row1.LoadedAmmo = GetAmmoForDef((UFortWeaponItemDefinition*)Row1.Def);
		Row1.Weight = 0.30f;
		LootForTiers["Loot_AthenaFloorLoot_Warmup"].push_back(Row1);
		LootForTiers["Loot_AthenaFloorLoot"].push_back(Row1);
		Row1.Weight = 0.15f;
		LootForTiers["Loot_AthenaTreasure"].push_back(Row1);
		LootForTiers["Loot_AthenaVending"].push_back(Row1);

		Row1.Def = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_SemiAuto_Athena_R_Ore_T03.WID_Assault_SemiAuto_Athena_R_Ore_T03");
		Row1.Level = 2;
		Row1.DropCount = 1;
		Row1.LoadedAmmo = GetAmmoForDef((UFortWeaponItemDefinition*)Row1.Def);
		Row1.Weight = 0.10f;
		LootForTiers["Loot_AthenaFloorLoot_Warmup"].push_back(Row1);
		LootForTiers["Loot_AthenaFloorLoot"].push_back(Row1);
		Row1.Weight = 0.35f;
		LootForTiers["Loot_AthenaTreasure"].push_back(Row1);
		LootForTiers["Loot_AthenaVending"].push_back(Row1);

		Row1.Def = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_SemiAuto_Athena_VR_Ore_T03.WID_Assault_SemiAuto_Athena_VR_Ore_T03");
		Row1.Level = 3;
		Row1.DropCount = 1;
		Row1.LoadedAmmo = GetAmmoForDef((UFortWeaponItemDefinition*)Row1.Def);
		Row1.Weight = 0.05f;
		LootForTiers["Loot_AthenaTreasure"].push_back(Row1);
		LootForTiers["Loot_AthenaVending"].push_back(Row1);

		Row1.Def = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_SemiAuto_Athena_SR_Ore_T03.WID_Assault_SemiAuto_Athena_SR_Ore_T03");
		Row1.Level = 4;
		Row1.DropCount = 1;
		Row1.LoadedAmmo = GetAmmoForDef((UFortWeaponItemDefinition*)Row1.Def);
		Row1.Weight = 0.01f;
		LootForTiers["Loot_AthenaTreasure"].push_back(Row1);
		LootForTiers["Loot_AthenaVending"].push_back(Row1);
		//End Burst Rifle

}
