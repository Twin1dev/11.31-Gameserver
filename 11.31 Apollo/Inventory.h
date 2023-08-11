#pragma once
#include "Includes.h"

static UFortWorldItem* GivePCItem(AFortPlayerController* PC, UFortItemDefinition* ItemDef, int Count = 1, int LoadedAmmo = 0)
{
	auto NewItem = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 1);

	auto Inventory = PC->WorldInventory->Inventory;

	auto ItemInstances = Inventory.ItemInstances;
	
	NewItem->ItemEntry.Count = Count;
	if (LoadedAmmo > 0)
		NewItem->ItemEntry.LoadedAmmo = LoadedAmmo;
	NewItem->SetOwningControllerForTemporaryItem(PC);

	ItemInstances.Add(NewItem);
	auto& RepEntry = Inventory.ReplicatedEntries.Add(NewItem->ItemEntry);
	if (LoadedAmmo > 0)
		RepEntry.LoadedAmmo = LoadedAmmo;

	Inventory.MarkItemDirty(NewItem->ItemEntry);
	Inventory.MarkItemDirty(RepEntry);

	return NewItem;
}

static void Update(AFortPlayerController* PC)
{
	PC->WorldInventory->HandleInventoryLocalUpdate();
	PC->WorldInventory->Inventory.MarkArrayDirty();
}