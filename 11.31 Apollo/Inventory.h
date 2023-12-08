#pragma once
#include "Includes.h"

namespace Inventory
{
	FFortItemEntry* FindItemEntry(AFortPlayerController* PC, FGuid& OtherGuid)
	{
		if (!PC || !PC->WorldInventory)
			return nullptr;
		for (int i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); ++i)
		{
			if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == OtherGuid)
			{
				return &PC->WorldInventory->Inventory.ReplicatedEntries[i];
			}
		}
		return nullptr;
	}

	FFortItemEntry* FindItemEntry(AFortPlayerController* PC, UFortItemDefinition* ItemDef)
	{
		if (!PC || !PC->WorldInventory || !ItemDef)
			return nullptr;
		for (int i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); ++i)
		{
			if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition == ItemDef)
			{
				return &PC->WorldInventory->Inventory.ReplicatedEntries[i];
			}
		}
		return nullptr;
	}

	UFortWorldItem* CreateItem(AFortPlayerController* Player, UFortItemDefinition* ItemDef, int Count = 1)
	{
		auto WorldItem = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 0);
		WorldItem->SetOwningControllerForTemporaryItem(Player);
		return WorldItem;
	}
}


UFortWorldItem* FindItemInstanceByDef(AFortPlayerController* PC, UFortItemDefinition* Def)
{
	for (int i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
	{
		if (PC->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemDefinition == Def)
			return PC->WorldInventory->Inventory.ItemInstances[i];
	}

	return nullptr;
}

UFortWeaponItemDefinition* FindItemDefFromGuid(AFortPlayerController* PC, FGuid ItemGuid)
{
	for (int i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
	{
		if (PC->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemGuid == ItemGuid)
			return (UFortWeaponItemDefinition*)PC->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemDefinition;
	}

	return nullptr;
}

FFortItemEntry* FindItemEntry(AFortPlayerController* PC, UFortItemDefinition* ItemDef)
{
	if (!PC || !ItemDef)
		return nullptr;
	for (int i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
	{
		if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition == ItemDef)
			return &PC->WorldInventory->Inventory.ReplicatedEntries[i];
	}
	return nullptr;
}

UFortWorldItem* GivePCItem(AFortPlayerController* PC, UFortItemDefinition* ItemDef, int Count = 1, int LoadedAmmo = 0)
{
	if (Count < 1)
		return nullptr;
	auto NewItem = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 1);

	auto& ItemInstances = PC->WorldInventory->Inventory.ItemInstances;

	NewItem->ItemEntry.Count = Count;
	NewItem->ItemEntry.LoadedAmmo = LoadedAmmo;

	NewItem->SetOwningControllerForTemporaryItem(PC);
	NewItem->OwnerInventory = PC->WorldInventory;

	ItemInstances.Add(NewItem);
	auto& RepEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Add(NewItem->ItemEntry);
	RepEntry.LoadedAmmo = LoadedAmmo;

	return NewItem;
}
static void Update(AFortPlayerController* PC)
{
	PC->WorldInventory->HandleInventoryLocalUpdate();
	PC->WorldInventory->Inventory.MarkArrayDirty();
}