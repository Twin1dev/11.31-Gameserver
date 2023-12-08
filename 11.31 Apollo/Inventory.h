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
	if(!PC || !ItemDef)
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
//code to remove item
void RemoveItem(AFortPlayerController* Player, UFortItemDefinition* ItemDef, int Count = -1)
{
	for (int j = 0; j < Player->WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
	{
		if (Player->WorldInventory->Inventory.ReplicatedEntries[j].ItemDefinition == ItemDef)
		{
			if (Count == -1 || Count >= Player->WorldInventory->Inventory.ReplicatedEntries[j].Count)
			{
				Player->WorldInventory->Inventory.ReplicatedEntries.Remove(j);
				break;
			}
			return;
		}
	}

	for (int i = 0; i < Player->WorldInventory->Inventory.ItemInstances.Num(); i++)
	{
		if (Player->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemDefinition == ItemDef)
		{
			Player->WorldInventory->Inventory.ItemInstances.Remove(i);

			break;
		}
	}
	Update(Player);
}

void RemoveItem(AFortPlayerController* Player, FGuid& ItemGuid, int Count = -1)
{
	for (int j = 0; j < Player->WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
	{
		if (Player->WorldInventory->Inventory.ReplicatedEntries[j].ItemGuid == ItemGuid)
		{
			if (Count == -1 || Count >= Player->WorldInventory->Inventory.ReplicatedEntries[j].Count)
			{
				Player->WorldInventory->Inventory.ReplicatedEntries.Remove(j);
				break;
			}
			return;
		}
	}

	for (int i = 0; i < Player->WorldInventory->Inventory.ItemInstances.Num(); i++)
	{
		if (Player->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemGuid == ItemGuid)
		{
			Player->WorldInventory->Inventory.ItemInstances.Remove(i);

			break;
		}
	}
	Update(Player);
}

	UFortWorldItem* CreateItem(AFortPlayerController * Player, UFortItemDefinition * ItemDef, int Count = 1)
	{
		auto WorldItem = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 0);
		WorldItem->SetOwningControllerForTemporaryItem(Player);
		return WorldItem;
	}

	FFortItemEntry* AddItem(AFortPlayerController* Player, UFortItemDefinition* ItemDef, int Count = 1, int LoadedAmmo = -1, bool bForceCreate = false)
	{
		if (!ItemDef || !Player || !Player->WorldInventory)
			return nullptr;

		if (!bForceCreate)
		{
			if (auto FoundEntry = Inventory::FindItemEntry(Player, ItemDef))
			{
				if (ItemDef->MaxStackSize <= 1)
				{
					return AddItem(Player, ItemDef, Count, LoadedAmmo, true);
				}

				int NewCount = FoundEntry->Count + Count;
				if (NewCount > ItemDef->MaxStackSize)
				{
					// stinky bozo L
					FoundEntry->Count = ItemDef->MaxStackSize;				}
				else
				{
					FoundEntry->Count = NewCount;
				}

				return FoundEntry;
			}
		}
