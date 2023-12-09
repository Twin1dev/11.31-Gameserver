#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA40 - 0xA30)
// BlueprintGeneratedClass GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C
class UGA_BoostJumpPack_Equip_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_BoostJumpPack_Equip_C* GetDefaultObj();

	class UFortItem* GetGadgetItem(class AFortPlayerPawn* Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, class AFortPlayerControllerZone* CallFunc_GetPlayerController_AsFort_Player_Controller_Zone, class UFortItem* CallFunc_BP_GetInventoryItemWithGuid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetPlayerController(class AFortPlayerPawn* Pawn, class AFortPlayerControllerZone** AsFort_Player_Controller_Zone, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void IsAuthority(bool* bAuthority, bool CallFunc_HasAuthority_ReturnValue);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AFortPlayerPawn* LocalPlayerPawn, const struct FGameplayTagContainer& ErrorReasonGamepad, const struct FGameplayTagContainer& ErrorReason);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_BoostJumpPack_Equip(int32 EntryPoint);
};

}


