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

// 0x4C (0x7D4 - 0x788)
// BlueprintGeneratedClass B_Athena_FrenchYedoc_JWFriendly.B_Athena_FrenchYedoc_JWFriendly_C
class AB_Athena_FrenchYedoc_JWFriendly_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x788(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortAthenaAIBotCustomizationData*     BotData;                                           // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                  DecoyLifetimeRow;                                  // 0x7A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                 BotPawn;                                           // 0x7B0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBeforeSpawningStartingSpawninFX;              // 0x7B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VictoryDroneLifespan;                              // 0x7BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Spawn;                                          // 0x7C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBeforeCue;                                    // 0x7C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFriendly;                                        // 0x7CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4ED9[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        TimeBeforeRevealingWeapon;                         // 0x7D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Athena_FrenchYedoc_JWFriendly_C");
		return Clss;
	}

	void SetBotWeaponsHiddenInGame(class AFortPawn* BotPawn, bool NewHidden, bool bPropagateToChildren, int32 Temp_int_Array_Index_Variable, TArray<class USkeletalMeshComponentBudgeted*>& CallFunc_GetWeaponMeshes_WeaponMeshes, int32 Temp_int_Loop_Counter_Variable, class USkeletalMeshComponentBudgeted* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnRep_BotPawn(bool CallFunc_IsDedicatedServer_ReturnValue);
	void StartBotSpawnInVisuals();
	void RevealWeapon();
	void ReceiveBeginPlay();
	void UnhideBotPawn();
	void ExecuteUbergraph_B_Athena_FrenchYedoc_JWFriendly(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, uint8 CallFunc_GetActorTeam_ReturnValue, float Temp_float_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable_1, bool Temp_bool_Variable, uint8 Temp_byte_Variable, bool Temp_bool_Variable_1, uint8 K2Node_Select_Default, float K2Node_Select_Default_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AAthena_GameMode_C* K2Node_DynamicCast_AsAthena_Game_Mode, bool K2Node_DynamicCast_bSuccess_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortServerBotManagerAthena* CallFunc_GetServerBotManager_ReturnValue, class AFortPlayerPawnAthena* CallFunc_SpawnBot_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortAthenaAIBotController* K2Node_DynamicCast_AsFort_Athena_AIBot_Controller, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_4, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_VictoryDrone_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
