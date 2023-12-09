#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB0 - 0xB0)
// BlueprintGeneratedClass ItemCostComponent.ItemCostComponent_C
class UItemCostComponent_C : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UItemCostComponent_C* GetDefaultObj();

	void GetCost(TMap<enum class EFortResourceType, int32>* Cost);
};

}


