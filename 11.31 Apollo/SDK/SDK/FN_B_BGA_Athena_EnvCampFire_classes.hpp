#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D1 (0x959 - 0x788)
// BlueprintGeneratedClass B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C
class AB_BGA_Athena_EnvCampFire_C : public ABuildingGameplayActorCampFire
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x788(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Cylinder;                                          // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       FireLoc;                                           // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Wood;                                              // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  FirePitEmpty;                                      // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             InteractingPawn;                                   // 0x7B8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BeenUsed;                                          // 0x7C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DousedSmokeLife;                                   // 0x7C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_DousedSmokeLife;                               // 0x7C8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HotfixedEnabled;                                   // 0x7E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DestroyIfDisabled;                                 // 0x7E9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Destroyed;                                         // 0x7EA(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_59CD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_HotfixEnabled;                                 // 0x7F0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               TraceOffset;                                       // 0x810(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Season7Campfire;                                   // 0x81C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CustomSpecialS7Tags;                               // 0x820(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        SpecialS7FireTime;                                 // 0x840(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          DousedSmokeWispTimer;                              // 0x848(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       S7SuccessEmitter;                                  // 0x850(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            S7SuccessSound;                                    // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockInteraction;                                  // 0x860(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LitRepBool;                                        // 0x864(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DousedCue;                                         // 0x868(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          FireCue;                                           // 0x870(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DeathCue;                                          // 0x878(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_Light_Cost;                                    // 0x880(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_Light;                                        // 0x8A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_LightCost;                                    // 0x8B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_LightCostNeedMore;                            // 0x8D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*              Item_Wood;                                         // 0x8E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Stoked;                                            // 0x8F0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_59D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          StokedCue;                                         // 0x8F4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_Stoke_Cost;                                    // 0x900(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_HotfixStokeEnabled;                            // 0x920(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_StokeCostNeedMore;                            // 0x940(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HasBeenLit;                                        // 0x958(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AB_BGA_Athena_EnvCampFire_C* GetDefaultObj();

	void OnRep_Stoked();
	class FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, bool Temp_bool_Variable, float CallFunc_GetValueAtLevel_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_FCeil_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText K2Node_Select_Default);
	int32 GetCostReActivate(float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FCeil_ReturnValue);
	void OnRep_LitRepBool(bool CallFunc_Conv_IntToBool_ReturnValue);
	void OnRep_Destroyed();
	void CheckIfUserIsSpecialS7(class AFortPawn* PawnWhoLitFire, bool* UserIsSpecial, const struct FGameplayTagContainer& Temp_struct_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasAllTags_ReturnValue);
	bool RowToBool(struct FScalableFloat& Input, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void SetSheetValues(bool CallFunc_RowToBool_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_RowToBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void OnReady_9F4554BE40FCB41157835B9AD897EE69(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void ReceiveBeginPlay();
	void Start();
	void BuildingActorDestroyedCleanUp(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void BindToFloor();
	void HandleBoundDestroyed();
	void CheckDestroyDisabled();
	void GoOut();
	void Light();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	void SpecialS7LightsFireAfterOut();
	void KillDouseSmokeWisp();
	void Server_QuestObjectiveUpdated(class AFortPlayerController* Controller, class UFortQuestItemDefinition* QuestDef, class FName BackendName, int32 CompletionCount, bool ObjectiveCompleted, bool QuestCompleted);
	void HandleCharacterVariantTransition(class AFortPawn* TransitioningPawn);
	void PayLightCost(class AFortPawn* InteractingPawn);
	void PayStokeCost(class AFortPawn* InteractingPawn);
	void ExecuteUbergraph_B_BGA_Athena_EnvCampFire(int32 EntryPoint, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortPlaylist* Temp_object_Variable, class AFortGameStateAthena* Temp_object_Variable_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFortPawn* K2Node_Event_InteractingPawn, enum class EInteractionBeingAttempted K2Node_Event_InteractionBeingAttempted, bool CallFunc_CheckIfUserIsSpecialS7_UserIsSpecial, class AFortPlayerController* K2Node_CustomEvent_Controller, class UFortQuestItemDefinition* K2Node_CustomEvent_QuestDef, class FName K2Node_CustomEvent_BackendName, int32 K2Node_CustomEvent_CompletionCount, bool K2Node_CustomEvent_ObjectiveCompleted, bool K2Node_CustomEvent_QuestCompleted, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPawn* K2Node_CustomEvent_TransitioningPawn, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_CheckIfUserIsSpecialS7_UserIsSpecial_1, class AController* CallFunc_GetController_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AFortPawn* K2Node_CustomEvent_InteractingPawn_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, int32 CallFunc_GetCostReActivate_ReturnValue, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FCeil_ReturnValue, class AFortPawn* K2Node_CustomEvent_InteractingPawn, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, TArray<class AActor*>& Temp_object_Variable_2, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_1);
};

}


