#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB0 - 0xB0)
// BlueprintGeneratedClass CreativePickupItemCostComponent.CreativePickupItemCostComponent_C
class UCreativePickupItemCostComponent_C : public UItemCostComponent_C
{
public:

	static class UClass* StaticClass();
	static class UCreativePickupItemCostComponent_C* GetDefaultObj();

	void GetCost(TMap<enum class EFortResourceType, int32>* Cost, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, TMap<enum class EFortResourceType, int32> CallFunc_GetCost_Cost, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class AFort_Pickup_Creative_C* K2Node_DynamicCast_AsFort_Pickup_Creative, bool K2Node_DynamicCast_bSuccess, TArray<int32>& CallFunc_GetItemCosts_ReturnValue, bool CallFunc_IsValid_ReturnValue, TMap<enum class EFortResourceType, int32> K2Node_MakeMap_Map);
};

}


