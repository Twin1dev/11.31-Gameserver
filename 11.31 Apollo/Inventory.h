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

UFortWorldItem* FindItemInstanceByGUID(AFortPlayerController* PC, FGuid Guid)
{
	for (int i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
	{
		if (PC->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemGuid == Guid)
			return PC->WorldInventory->Inventory.ItemInstances[i];
	}

	return nullptr;
}

FFortItemEntry* FindItemEntryByGUID(AFortPlayerController* PC, FGuid ItemGuid)
{
	for (int i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
	{
		if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == ItemGuid)
			return &PC->WorldInventory->Inventory.ReplicatedEntries[i];
	}

	return nullptr;
}


static UFortWorldItem* GivePCItem(AFortPlayerController* PC, UFortItemDefinition* ItemDef, int Count, int LoadedAmmo = 0)
{
	UFortWorldItem* NewItem = Cast<UFortWorldItem>(ItemDef->CreateTemporaryItemInstanceBP(Count, 1));

	if (!NewItem)
		return nullptr;

	int OverStack = 0;

	if (ItemDef->MaxStackSize > 1)
	{
		for (int i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			auto ItemInstance = PC->WorldInventory->Inventory.ItemInstances[i];

			if (ItemInstance->ItemEntry.ItemDefinition == ItemDef)
			{
				if (ItemInstance->ItemEntry.Count < ItemDef->MaxStackSize || !ItemDef->bAllowMultipleStacks)
				{
					OverStack = ItemInstance->ItemEntry.Count + Count - ItemDef->MaxStackSize;

					if (!ItemDef->bAllowMultipleStacks && !(ItemInstance->ItemEntry.Count < ItemDef->MaxStackSize))
						break;

					auto RepEntry = FindItemEntryByGUID(PC, ItemInstance->ItemEntry.ItemGuid);

					// that would be quite silly
					if (!RepEntry)
						return nullptr;

					int AmountToStack = OverStack > 0 ? Count - OverStack : Count;

					ItemInstance->ItemEntry.Count += AmountToStack;
					RepEntry->Count += AmountToStack;

					PC->WorldInventory->Inventory.MarkItemDirty(ItemInstance->ItemEntry);
					PC->WorldInventory->Inventory.MarkItemDirty(*RepEntry);

					if (OverStack <= 0)
						return ItemInstance;
				}
			}
		}
	}

	Count = OverStack > 0 ? OverStack : Count;

	NewItem->ItemEntry.Count = Count;
	NewItem->ItemEntry.LoadedAmmo = LoadedAmmo;
	NewItem->SetOwningControllerForTemporaryItem(PC);
	NewItem->OwnerInventory = PC->WorldInventory;

	PC->WorldInventory->Inventory.ItemInstances.Add(NewItem);

	auto& RepEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Add(NewItem->ItemEntry);

	RepEntry.Count = Count;

	RepEntry.LoadedAmmo = LoadedAmmo;

	return NewItem;
}

static void RemoveItemFromPC(AFortPlayerController* PC, FGuid Item, int Count)
{
	auto ItemEntry = FindItemEntryByGUID(PC, Item);

	auto NewCount = ItemEntry->Count - Count;

	if (NewCount <= 0)
	{
		for (int i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			auto ItemInstance = PC->WorldInventory->Inventory.ItemInstances[i];
			auto CurrentGuid = ItemInstance->GetItemGuid();

			if (CurrentGuid == Item)
			{
				PC->WorldInventory->Inventory.ReplicatedEntries.Remove(i);
				break;
			}
		}

		for (int i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
		{
			auto ItemEntry = PC->WorldInventory->Inventory.ReplicatedEntries[i];
			auto CurrentGuid = ItemEntry.ItemGuid;

			if (CurrentGuid == Item)
			{
				PC->WorldInventory->Inventory.ReplicatedEntries.Remove(i);
				break;
			}
		}
	}
	else {
		ItemEntry->Count = NewCount;

		auto ItemInstance = FindItemInstanceByGUID(PC, Item);

		ItemInstance->ItemEntry.Count = NewCount;

		PC->WorldInventory->Inventory.MarkItemDirty(ItemInstance->ItemEntry);
		PC->WorldInventory->Inventory.MarkItemDirty(*ItemEntry);
	}
}

UFortItemDefinition* FindItemDefFromGuid(FGuid Guid, AFortPlayerController* PC)
{
	for (int i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
	{
		if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == Guid)
			return PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition;
	}

	return nullptr;
}

static __forceinline void Update(AFortPlayerController* PC, bool bMark = true)
{
	// buh?
	PC->WorldInventory->bRequiresLocalUpdate = true;
	PC->WorldInventory->HandleInventoryLocalUpdate();

	if (bMark)
		PC->WorldInventory->Inventory.MarkArrayDirty();
}

namespace Inventory
{
	void InitHooks()
	{
		// todo

	}
}