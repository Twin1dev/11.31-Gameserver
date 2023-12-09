#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10D (0x9B8 - 0x8AB)
// BlueprintGeneratedClass BGA_Athena_SuperDingo_Box.BGA_Athena_SuperDingo_Box_C
class ABGA_Athena_SuperDingo_Box_C : public ABGA_Athena_WithGravity_Parent_C
{
public:
	uint8                                        Pad_6B50[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x8B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Trail;                                             // 0x8C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemsToDrop;                                       // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       Rarity;                                            // 0x8D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_6B51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EFortRarity, class FName>    RarityToItemsMap;                                  // 0x8D8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<enum class EFortRarity, struct FColor>  RarityToColorMap;                                  // 0x928(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FColor                                ColorOfBox;                                        // 0x978(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Destroy;                                        // 0x97C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Tracer_Lifetime;                                   // 0x984(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SpawnPositionOffset;                               // 0x988(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 T_AmmoTossTag;                                     // 0x998(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABGA_Athena_SuperDingo_Box_C* GetDefaultObj();

	void FindRarityToItemsAndColor(const struct FColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void UserConstructionScript();
	void StopSim(const struct FHitResult& Hit);
	void Spawn_Items();
	void HideAndKill();
	void ExecuteUbergraph_BGA_Athena_SuperDingo_Box(int32 EntryPoint, const struct FHitResult& K2Node_Event_Hit, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<struct FFortItemEntry>& CallFunc_PickLootDrops_OutLootToDrop, bool CallFunc_PickLootDrops_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFortItemEntry& CallFunc_Array_Get_Item, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue, const struct FFortItemEntry& CallFunc_GetItemEntry_ReturnValue, class UFortWeaponItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Item_Definition, bool K2Node_DynamicCast_bSuccess_1);
};

}


