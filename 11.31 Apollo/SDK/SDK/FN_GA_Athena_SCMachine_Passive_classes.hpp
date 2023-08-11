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

// 0x1C (0xA4C - 0xA30)
// BlueprintGeneratedClass GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C
class UGA_Athena_SCMachine_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawnAthena*                 PlayerPawn;                                        // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SpawnZOffset;                                      // 0xA40(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_SCMachine_Passive_C");
		return Clss;
	}

	void Check_Resurrection_Active(bool* bEnabled, class AFortGameStateAthena* GameStateAthena, bool PlaylistValid, class FName TestPlaylist, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsResurrectionEnabled_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess);
	void SaveOutPlayer(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess);
	void Spawn();
	void HandleOnFortPlayerDied(class AFortPlayerPawnAthena* FortPlayerPawnAthena);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_SCMachine_Passive(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsBattleLabModePlaylist_ReturnValue, bool CallFunc_IsCreativeLTMPlaylist_ReturnValue, bool CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Check_Resurrection_Active_bEnabled, class ABGA_Athena_SCMachine_Pickup_C* CallFunc_FinishSpawningActor_ReturnValue, class AFortPlayerPawnAthena* K2Node_CustomEvent_FortPlayerPawnAthena, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsRespawningAllowed_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
