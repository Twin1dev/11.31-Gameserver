#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x280 (0xA08 - 0x788)
// BlueprintGeneratedClass BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C
class ABGA_Athena_FlopperSpawn_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x788(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         OverlapVolume;                                     // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_MaxUses;                                       // 0x7A0(0x20)(Edit, BlueprintVisible)
	struct FScalableFloat                        Row_MinUses;                                       // 0x7C0(0x20)(Edit, BlueprintVisible)
	int32                                        Uses;                                              // 0x7E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AfterHideLifeSpan;                                 // 0x7E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemsToDrop;                                       // 0x7E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Spawn;                                          // 0x7F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_SpawnChanceMax;                                // 0x7F8(0x20)(Edit, BlueprintVisible)
	bool                                         IsWorldSpawner;                                    // 0x818(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_573F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_SpawnChanceMin;                                // 0x820(0x20)(Edit, BlueprintVisible)
	TMap<struct FGameplayTag, class FName>       Map_TagToLoot_HighTier;                            // 0x840(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         AlreadySpawnChecked;                               // 0x890(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5740[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, class FName>       Map_TagToLoot_DefaultTier;                         // 0x898(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FGameplayTag, class FName>       Map_TagToLoot_ToUse;                               // 0x8E8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         HasTypeTag;                                        // 0x938(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5741[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x940(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                 LocationTags;                                      // 0x950(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         MaxUses;                                           // 0x970(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Debug;                                             // 0x971(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5742[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_AddedBobChanceOnOverlapMin;                    // 0x978(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_AddedBobChanceOnOverlapMax;                    // 0x998(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPickup*                           SpawnedItem;                                       // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_HighTierPoolSpawn;                           // 0x9C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 QuestTag_DefaultSpawn;                             // 0x9C8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 QuestTag_WorldSpawn;                               // 0x9E8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABGA_Athena_FlopperSpawn_Parent_C* GetDefaultObj();

	void GetLootTier(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ShouldKill(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue);
	void HandleUseTracking(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void SetBalanceValues(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	void UserConstructionScript(bool CallFunc_IsServer_ReturnValue);
	void OnReady_5804F209455A50B3EE64E3AED087DE64(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void SpawnItem(class AActor* Target, bool Hooked, class USceneComponent* HookComponent, const struct FVector& SpawnLoc, class AActor* Player, float ItemSpawnDelay, bool CaughtWithFishingRod, bool CaughtWithHappyGhost, class AActor* ItemUsedToFish);
	void ReceiveBeginPlay();
	void HideAndKill();
	void BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void PlaySpawnItemHightier(const struct FVector& Location);
	void ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsServer_ReturnValue, TArray<struct FFortItemEntry>& CallFunc_PickLootDrops_OutLootToDrop, bool CallFunc_PickLootDrops_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FFortItemEntry& CallFunc_Array_Get_Item, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTagContainer& CallFunc_GetPoiGridTagsForLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class APrj_Athena_FloppingRabbit_C* K2Node_DynamicCast_AsPrj_Athena_Flopping_Rabbit, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetValueAtLevel_ReturnValue, class AActor* K2Node_CustomEvent_Target, bool K2Node_CustomEvent_Hooked, class USceneComponent* K2Node_CustomEvent_HookComponent, const struct FVector& K2Node_CustomEvent_SpawnLoc, class AActor* K2Node_CustomEvent_player, float K2Node_CustomEvent_ItemSpawnDelay, bool K2Node_CustomEvent_CaughtWithFishingRod, bool K2Node_CustomEvent_CaughtWithHappyGhost, class AActor* K2Node_CustomEvent_ItemUsedToFish, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_3, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_Select_Default, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, class AFortGameStateAthena* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UFortPlaylist* Temp_object_Variable_1, const struct FGameplayTagContainer& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, const struct FGameplayTagContainer& K2Node_Select_Default_1, bool CallFunc_SendComplexCustomStatEvent_QuestActive_1, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted_1);
};

}


