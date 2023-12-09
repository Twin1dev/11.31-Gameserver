#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CreativePickupItemCostComponent.CreativePickupItemCostComponent_C
// (None)

class UClass* UCreativePickupItemCostComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativePickupItemCostComponent_C");

	return Clss;
}


// CreativePickupItemCostComponent_C CreativePickupItemCostComponent.Default__CreativePickupItemCostComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreativePickupItemCostComponent_C* UCreativePickupItemCostComponent_C::GetDefaultObj()
{
	static class UCreativePickupItemCostComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativePickupItemCostComponent_C*>(UCreativePickupItemCostComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativePickupItemCostComponent.CreativePickupItemCostComponent_C.GetCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<enum class EFortResourceType, int32>Cost                                                             (Parm, OutParm, ZeroConstructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EFortResourceType, int32>CallFunc_GetCost_Cost                                            (ZeroConstructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFort_Pickup_Creative_C*     K2Node_DynamicCast_AsFort_Pickup_Creative                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_GetItemCosts_ReturnValue                                (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<enum class EFortResourceType, int32>K2Node_MakeMap_Map                                               (ZeroConstructor)

void UCreativePickupItemCostComponent_C::GetCost(TMap<enum class EFortResourceType, int32>* Cost, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, TMap<enum class EFortResourceType, int32> CallFunc_GetCost_Cost, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class AFort_Pickup_Creative_C* K2Node_DynamicCast_AsFort_Pickup_Creative, bool K2Node_DynamicCast_bSuccess, TArray<int32>& CallFunc_GetItemCosts_ReturnValue, bool CallFunc_IsValid_ReturnValue, TMap<enum class EFortResourceType, int32> K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePickupItemCostComponent_C", "GetCost");

	Params::UCreativePickupItemCostComponent_C_GetCost_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_GetCost_Cost = CallFunc_GetCost_Cost;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pickup_Creative = K2Node_DynamicCast_AsFort_Pickup_Creative;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemCosts_ReturnValue = CallFunc_GetItemCosts_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;

	UObject::ProcessEvent(Func, &Parms);

	if (Cost != nullptr)
		*Cost = Parms.Cost;

}

}


