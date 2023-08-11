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

// 0x88 (0xAB8 - 0xA30)
// BlueprintGeneratedClass GA_Athena_FloppingRabbit_Pull.GA_Athena_FloppingRabbit_Pull_C
class UGA_Athena_FloppingRabbit_Pull_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       Target;                                            // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       Launcher;                                          // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_InVehicle;                                       // 0xA48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        LaunchArc;                                         // 0xA50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LaunchGrav;                                        // 0xA54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_PullAmount;                                    // 0xA58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_PullEnabled;                                   // 0xA78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_CanPullFriends;                                // 0xA98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_FloppingRabbit_Pull_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_FloppingRabbit_Pull(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_1, bool CallFunc_OnSameTeam_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue_1, bool CallFunc_OnSameTeam_ReturnValue_2, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
