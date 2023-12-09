#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA71 - 0xA71)
// BlueprintGeneratedClass GA_Athena_HappyGhost_Fire.GA_Athena_HappyGhost_Fire_C
class UGA_Athena_HappyGhost_Fire_C : public UGA_Ranged_GenericDamage_C
{
public:

	static class UClass* StaticClass();
	static class UGA_Athena_HappyGhost_Fire_C* GetDefaultObj();

	void Overflow(class UFortWorldItem* Item_Dropped);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_CommitExecute(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AB_HappyGhost_Athena_C* K2Node_DynamicCast_AsB_Happy_Ghost_Athena, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_2);
};

}


