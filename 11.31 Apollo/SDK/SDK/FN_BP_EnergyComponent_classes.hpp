#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xD8 - 0xC0)
// BlueprintGeneratedClass BP_EnergyComponent.BP_EnergyComponent_C
class UBP_EnergyComponent_C : public UFortBuildingEnergyComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	UMulticastInlineDelegateProperty_            EnergyLevelsUpdated;                               // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_EnergyComponent_C* GetDefaultObj();

	void OnCurrentEnergyAttributesChanged();
	void ExecuteUbergraph_BP_EnergyComponent(int32 EntryPoint);
	void EnergyLevelsUpdated__DelegateSignature();
};

}


