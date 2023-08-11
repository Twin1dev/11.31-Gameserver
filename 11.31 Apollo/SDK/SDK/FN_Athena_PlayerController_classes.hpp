#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x3520 - 0x3460)
// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
class AAthena_PlayerController_C : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       ListenerOverride;                                  // 0x3468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       VictoryRoyaleAudio;                                // 0x3470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       VictoryRoyaleMusic;                                // 0x3478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            VictoryRoyaleMenuMusicAsset;                       // 0x3480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 BladeWielderTag;                                   // 0x3488(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EFortItemType                     InteractingItemType;                               // 0x34A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 InteractionTags;                                   // 0x34B0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastInlineDelegateProperty_            PawnPossessedDispatcher;                           // 0x34D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        PermissionRecheckTime;                             // 0x34E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          PermissionsRecheckTimerHandle;                     // 0x34E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        LobbyMusicOnVictoryDelayTime;                      // 0x34F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundMix*                             CamUnderwaterSoundMix;                             // 0x34F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CamUnderwaterLoopSound;                            // 0x3500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CamUnderwaterAudio;                                // 0x3508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CamUnderwaterStartSound;                           // 0x3510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CamUnderwaterStopSound;                            // 0x3518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_PlayerController_C");
		return Clss;
	}

	bool Is_Creative_Mode(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCreativeModePlaylist_ReturnValue, bool CallFunc_IsCreativeLTMPlaylist_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetupPermissionRecheckTimer(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void LeftAllVolumes(bool* bLeftVolumes, bool InTempVolume, const TArray<class AFortVolume*>& ContainingVolumes, int32 Temp_int_Array_Index_Variable, class AFortVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool CallFunc_IsDead_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_WillVolumeDeleteAfterActorSpawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AFortVolume*>& CallFunc_GetVolumesForLocation_Volumes, bool CallFunc_GetVolumesForLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript(class UAthenaMarkerComponent* CallFunc_GetMarkerComponent_ReturnValue);
	void OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(class UObject* Loaded);
	void OnReady_B4409EAB4038578B1EBA9DB1586489B9(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Start_Victory_Royale_Music();
	void OnMusicPackLoaded(class UAthenaMusicPackItemDefinition* NewMusicPack);
	void HandlePermissions(class AFortVolume* Volume);
	void GrantItem(TSoftObjectPtr<class UFortWorldItemDefinition> Item);
	void RevokeItem(TSoftObjectPtr<class UFortWorldItemDefinition> Item);
	void PermissionsChanged();
	void OnLocalInteraction(class AActor* ReceivingActor);
	void RemoveItem();
	void RevokeCreativeTool();
	void ReactToPawnPossession(class APawn* PossessedPawn);
	void PlayWinEffects(class APawn* FinisherPawn, class UFortWeaponItemDefinition* FinishingWeapon, enum class EDeathCause DeathCause, bool bAudioOnly);
	void ReceiveBeginPlay();
	void ReplicateRotationScaleReset();
	void K2_OnLeaveVolume(class AFortVolume* Volume);
	void K2_OnEnterVolume(class AFortVolume* Volume);
	void On_Camera_Underwater_State_Changed(bool bIsUnderWater, float DepthUnderwater);
	void ExecuteUbergraph_Athena_PlayerController(int32 EntryPoint, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWaterSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EAudioComponentPlayState CallFunc_GetPlayState_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, float CallFunc_VictoryStingerTimeUntilFadeOut_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, class AFortGameStateAthena* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue_2, class UFortPlaylist* Temp_object_Variable_1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_1, class USoundCue* CallFunc_GetVictoryStinger_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, const struct FGameplayTagContainer& Temp_struct_Variable, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_NewMusicPack, bool CallFunc_IsValid_ReturnValue_5, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_2, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, bool CallFunc_IsCreativeModePlaylist_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LeftAllVolumes_bLeftVolumes, bool CallFunc_IsCreativeModePlaylist_ReturnValue_1, class AFortVolume* K2Node_CustomEvent_Volume, TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item_1, bool CallFunc_IsReadOnly_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TArray<class UFortLevelSaveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UFortLevelSaveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_DoesPlayerHavePermissionToEdit_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition_1, bool K2Node_DynamicCast_bSuccess_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, class AFortVolume* CallFunc_GetCurrentVolume_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* K2Node_Event_ReceivingActor, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess_5, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, class APawn* K2Node_CustomEvent_PossessedPawn, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena_2, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsCreativeModePlaylist_ReturnValue_2, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, class UObject* Temp_object_Variable_2, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition_2, bool K2Node_DynamicCast_bSuccess_8, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1, class APawn* K2Node_Event_FinisherPawn, class UFortWeaponItemDefinition* K2Node_Event_FinishingWeapon, enum class EDeathCause K2Node_Event_DeathCause, bool K2Node_Event_bAudioOnly, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UClass* CallFunc_GetWeaponActorClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class UClass* K2Node_ClassDynamicCast_AsFort_Weapon_Ranged_Dual, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsB_Ranged_Generic, bool K2Node_ClassDynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_Is_Creative_Mode_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, class AFortVolume* CallFunc_GetVolumeForLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AFortVolume* K2Node_Event_Volume_1, class AFortVolume* K2Node_Event_Volume, bool CallFunc_IsValid_ReturnValue_10, bool K2Node_CustomEvent_bIsUnderWater, float K2Node_CustomEvent_DepthUnderwater, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_RandomFloatInRange_ReturnValue, class UFortMusicContext* CallFunc_GetContext_ReturnValue_2, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue, bool CallFunc_Is_Creative_Mode_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4);
	void PawnPossessedDispatcher__DelegateSignature(class APawn* PossessedPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
