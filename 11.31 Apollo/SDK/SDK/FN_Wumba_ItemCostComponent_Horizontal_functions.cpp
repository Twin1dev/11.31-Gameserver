#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wumba_ItemCostComponent_Horizontal.Wumba_ItemCostComponent_Horizontal_C
// (None)

class UClass* UWumba_ItemCostComponent_Horizontal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wumba_ItemCostComponent_Horizontal_C");

	return Clss;
}


// Wumba_ItemCostComponent_Horizontal_C Wumba_ItemCostComponent_Horizontal.Default__Wumba_ItemCostComponent_Horizontal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWumba_ItemCostComponent_Horizontal_C* UWumba_ItemCostComponent_Horizontal_C::GetDefaultObj()
{
	static class UWumba_ItemCostComponent_Horizontal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWumba_ItemCostComponent_Horizontal_C*>(UWumba_ItemCostComponent_Horizontal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Wumba_ItemCostComponent_Horizontal.Wumba_ItemCostComponent_Horizontal_C.GetCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<enum class EFortResourceType, int32>Cost                                                             (Parm, OutParm, ZeroConstructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Athena_Wumba_C*           K2Node_DynamicCast_AsB_Athena_Wumba                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<enum class EFortResourceType, int32>K2Node_MakeMap_Map                                               (ZeroConstructor)

void UWumba_ItemCostComponent_Horizontal_C::GetCost(TMap<enum class EFortResourceType, int32>* Cost, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class AB_Athena_Wumba_C* K2Node_DynamicCast_AsB_Athena_Wumba, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TMap<enum class EFortResourceType, int32> K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Wumba_ItemCostComponent_Horizontal_C", "GetCost");

	Params::UWumba_ItemCostComponent_Horizontal_C_GetCost_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Athena_Wumba = K2Node_DynamicCast_AsB_Athena_Wumba;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;

	UObject::ProcessEvent(Func, &Parms);

	if (Cost != nullptr)
		*Cost = Parms.Cost;

}

}


