#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C0 (0xFF8 - 0xE38)
// BlueprintGeneratedClass GA_Athena_GiftBox.GA_Athena_GiftBox_C
class UGA_Athena_GiftBox_C : public UGA_Athena_SuperTowerGrenadeWithTrajectory_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFortGameplayAbilityMontageInfo       Montage;                                           // 0xE40(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo       Green_Windup_Montage;                              // 0xE98(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo       Green_Outro_Montage;                               // 0xEF0(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo       Red_Intro_Montage;                                 // 0xF48(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo       Red_Outro_Montage;                                 // 0xFA0(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_GiftBox_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Athena_GiftBox(int32 EntryPoint, int32 Temp_int_Variable, class UClass* Temp_class_Variable, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AB_Grenade_Tower_GIftBox_Athena_C* K2Node_DynamicCast_AsB_Grenade_Tower_GIft_Box_Athena, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Greater_IntInt_ReturnValue, class AB_Grenade_Tower_GIftBox_Athena_C* K2Node_DynamicCast_AsB_Grenade_Tower_GIft_Box_Athena_1, bool K2Node_DynamicCast_bSuccess_3, class UClass* Temp_class_Variable_1, class UClass* Temp_class_Variable_2, class UClass* K2Node_Select_Default);
};

}


