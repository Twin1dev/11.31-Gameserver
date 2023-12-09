#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA90 - 0xA88)
// BlueprintGeneratedClass GA_Creative_EnergyComponent_PassiveRecharge.GA_Creative_EnergyComponent_PassiveRecharge_C
class UGA_Creative_EnergyComponent_PassiveRecharge_C : public UGAT_Creative_ActiveAbility_BuildingActor_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Creative_EnergyComponent_PassiveRecharge_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Creative_EnergyComponent_PassiveRecharge(int32 EntryPoint, bool K2Node_Event_bWasCancelled, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue);
};

}


