#pragma once
#include "Includes.h"


UFortWorldItem* FindItemInstanceByDef(AFortPlayerController* PC, UFortItemDefinition* Def)
{
	for (int i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
	{
		if (PC->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemDefinition == Def)
			return PC->WorldInventory->Inventory.ItemInstances[i];
	}

	return nullptr;
}


UFortWorldItem* GivePCItem(AFortPlayerController* PC, UFortItemDefinition* ItemDef, int Count = 1, int LoadedAmmo = 0)
{
	auto NewItem = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 1);

	auto& ItemInstances = PC->WorldInventory->Inventory.ItemInstances;
	
	NewItem->ItemEntry.Count = Count;
	NewItem->ItemEntry.LoadedAmmo = LoadedAmmo;

	NewItem->SetOwningControllerForTemporaryItem(PC);
	NewItem->OwnerInventory = PC->WorldInventory;

	ItemInstances.Add(NewItem);
	auto& RepEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Add(NewItem->ItemEntry);
	RepEntry.LoadedAmmo = LoadedAmmo;

	//PC->WorldInventory->Inventory.MarkItemDirty(NewItem->ItemEntry);
	//PC->WorldInventory->Inventory.MarkItemDirty(RepEntry);

	return NewItem;
}

UFortItemDefinition* FindItemDefFromGuid(FGuid Guid, AFortPlayerController* PC)
{
	for (int i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
	{
		if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == Guid)
			return PC->WorldInventory->Inventory.ReplicatedEntries.GetRef(i)->ItemDefinition;
	}

	return nullptr;
}

static void Update(AFortPlayerController* PC)
{
	PC->WorldInventory->HandleInventoryLocalUpdate();
	PC->WorldInventory->Inventory.MarkArrayDirty();
}