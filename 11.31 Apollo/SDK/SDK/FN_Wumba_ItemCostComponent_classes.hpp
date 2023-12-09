#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB0 - 0xB0)
// BlueprintGeneratedClass Wumba_ItemCostComponent.Wumba_ItemCostComponent_C
class UWumba_ItemCostComponent_C : public UItemCostComponent_C
{
public:

	static class UClass* StaticClass();
	static class UWumba_ItemCostComponent_C* GetDefaultObj();

	void GetCost(TMap<enum class EFortResourceType, int32>* Cost, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class AB_Athena_Wumba_C* K2Node_DynamicCast_AsB_Athena_Wumba, bool K2Node_DynamicCast_bSuccess, TMap<enum class EFortResourceType, int32> K2Node_MakeMap_Map);
};

}


