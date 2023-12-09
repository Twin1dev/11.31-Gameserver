#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B4 (0xA9C - 0x8E8)
// BlueprintGeneratedClass B_Athena_VendingMachine.B_Athena_VendingMachine_C
class AB_Athena_VendingMachine_C : public ABuildingItemCollectorActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Destroyed_Effect_Vending;                        // 0x8F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x8F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackComponent*               ForceFeedbackFail;                                 // 0x900(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackComponent*               ForceFeedbackSuccess;                              // 0x908(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       VendingMachine_Ambient;                            // 0x910(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Loot_Effect_Vending;                             // 0x918(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_VendingMachineQuest;                            // 0x920(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x928(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        VendWobble_Flash_70FB301E43A001CE1340FE8051EE86B5; // 0x930(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VendWobble_WobbleTime_70FB301E43A001CE1340FE8051EE86B5; // 0x934(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                VendWobble__Direction_70FB301E43A001CE1340FE8051EE86B5; // 0x938(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    VendWobble;                                        // 0x940(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SwitchHitch_Slide_A93D31CA462BFD95FDDD9E8A0BE99DA5; // 0x948(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SwitchHitch_Flash_A93D31CA462BFD95FDDD9E8A0BE99DA5; // 0x94C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SwitchHitch_Wobble_A93D31CA462BFD95FDDD9E8A0BE99DA5; // 0x950(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SwitchHitch__Direction_A93D31CA462BFD95FDDD9E8A0BE99DA5; // 0x954(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SwitchHitch;                                       // 0x958(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MonitorMat;                                        // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MetalMat;                                          // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentCaptureCount;                               // 0x970(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Vend_String;                                       // 0x978(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            SearchSound;                                       // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            VendFailedSound;                                   // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CycleSound;                                        // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CostAmount;                                        // 0x9A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              MaterialType;                                      // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Vend_Succeeded_Sound;                              // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VendSuccess;                                       // 0x9C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasHit;                                            // 0x9C1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D16[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CycleSoundVolume;                                  // 0x9C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                  TossOnGroundSetting;                               // 0x9C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                  Wood_String;                                       // 0x9D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Stone_String;                                      // 0x9F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Metal_String;                                      // 0xA08(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EFortRarity                       OverrideVendingMachineRarity;                      // 0xA20(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Ambient_SoundCue;                                  // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Free_String;                                       // 0xA30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            DestroyedSound;                                    // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MaxItemsToSpawn;                                   // 0xA50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ItemsAreFree;                                      // 0xA70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ItemsAreFreeCached;                                // 0xA90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpawnedItemCount;                                  // 0xA94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxItemsToSpawnCached;                             // 0xA98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Athena_VendingMachine_C* GetDefaultObj();

	bool GetOverrideRarity(enum class EFortRarity* Rarity, bool bHasOverride, enum class EFortRarity NewRarity, enum class EFortRarity CallFunc_GetOverrideRarity_Rarity, bool CallFunc_GetOverrideRarity_ReturnValue);
	void SetRarityColors(const struct FLinearColor& Color);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SwitchHitch__FinishedFunc();
	void SwitchHitch__UpdateFunc();
	void VendWobble__FinishedFunc();
	void VendWobble__UpdateFunc();
	void VendWobble__Start_FF_Time__EventFunc();
	void OnReady_21959F7346995C2CA1D67DB9455B627D(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void UpdateCollectorsActiveItem(int32 StartingSeedValue, class UFortWorldItemDefinition* InputItem, class UTexture* InputTexture, int32 CurrentGoal, int32 CurrentCollectedAmount, int32 CurrentCaptureCount, class UTexture* OutputTexture);
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	void BlueprintOnBeginInteract();
	void PlayVendFX();
	void ReceiveBeginPlay();
	void PlayVendFailFX();
	void OnForcedCycle();
	void DoVendDeath();
	void PickupSpawned_Bind();
	void ExecuteUbergraph_B_Athena_VendingMachine(int32 EntryPoint, bool Temp_bool_Variable, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortPlaylist* Temp_object_Variable, class AFortGameStateAthena* Temp_object_Variable_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FName Temp_name_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, int32 K2Node_Event_StartingSeedValue, class UFortWorldItemDefinition* K2Node_Event_InputItem, class UTexture* K2Node_Event_InputTexture, int32 K2Node_Event_CurrentGoal, int32 K2Node_Event_CurrentCollectedAmount, int32 K2Node_Event_CurrentCaptureCount, class UTexture* K2Node_Event_OutputTexture, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class FName Temp_name_Variable_1, bool Temp_bool_Variable_1, class AFortPawn* K2Node_Event_InteractingPawn, enum class EInteractionBeingAttempted K2Node_Event_InteractionBeingAttempted, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 Temp_int_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FRotator& CallFunc_RLerp_ReturnValue, class FName K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_SelectFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, enum class EFortRarity CallFunc_GetOverrideRarity_Rarity, bool CallFunc_GetOverrideRarity_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 K2Node_Select_Default_1, bool K2Node_SwitchInteger_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_EvaluateCurveTableRow_OutXY_1, bool CallFunc_EvaluateCurveTableRow_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue);
};

}


