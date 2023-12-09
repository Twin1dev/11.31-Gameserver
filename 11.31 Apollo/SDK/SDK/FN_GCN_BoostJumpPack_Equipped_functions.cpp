#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C
// (None)

class UClass* UGCN_BoostJumpPack_Equipped_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_BoostJumpPack_Equipped_C");

	return Clss;
}


// GCN_BoostJumpPack_Equipped_C GCN_BoostJumpPack_Equipped.Default__GCN_BoostJumpPack_Equipped_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_BoostJumpPack_Equipped_C* UGCN_BoostJumpPack_Equipped_C::GetDefaultObj()
{
	static class UGCN_BoostJumpPack_Equipped_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_BoostJumpPack_Equipped_C*>(UGCN_BoostJumpPack_Equipped_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerPawn_Athena_C*        PlayerPawn                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFuelPercent_Fuel_Percent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGCN_BoostJumpPack_Equipped_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class APlayerPawn_Athena_C* PlayerPawn, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetFuelPercent_Fuel_Percent, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_BoostJumpPack_Equipped_C", "OnExecute");

	Params::UGCN_BoostJumpPack_Equipped_C_OnExecute_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.PlayerPawn = PlayerPawn;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFuelPercent_Fuel_Percent = CallFunc_GetFuelPercent_Fuel_Percent;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.GetMaxFuel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerPawn_Athena_C*        PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          Attribute                                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSimulatedAttributeValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGCN_BoostJumpPack_Equipped_C::GetMaxFuel(class APlayerPawn_Athena_C* PlayerPawn, const struct FGameplayAttribute& Attribute, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedAttributeValue_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_BoostJumpPack_Equipped_C", "GetMaxFuel");

	Params::UGCN_BoostJumpPack_Equipped_C_GetMaxFuel_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.Attribute = Attribute;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSimulatedAttributeValue_ReturnValue = CallFunc_GetSimulatedAttributeValue_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.GetFuel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerPawn_Athena_C*        PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          Attribute                                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// float                              CallFunc_GetSimulatedAttributeValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

float UGCN_BoostJumpPack_Equipped_C::GetFuel(class APlayerPawn_Athena_C* PlayerPawn, const struct FGameplayAttribute& Attribute, float CallFunc_GetSimulatedAttributeValue_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_BoostJumpPack_Equipped_C", "GetFuel");

	Params::UGCN_BoostJumpPack_Equipped_C_GetFuel_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.Attribute = Attribute;
	Parms.CallFunc_GetSimulatedAttributeValue_ReturnValue = CallFunc_GetSimulatedAttributeValue_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.GetFuelPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerPawn_Athena_C*        PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Fuel_Percent                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFuel_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxFuel_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_BoostJumpPack_Equipped_C::GetFuelPercent(class APlayerPawn_Athena_C* PlayerPawn, float* Fuel_Percent, float CallFunc_GetFuel_ReturnValue, float CallFunc_GetMaxFuel_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_BoostJumpPack_Equipped_C", "GetFuelPercent");

	Params::UGCN_BoostJumpPack_Equipped_C_GetFuelPercent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.CallFunc_GetFuel_ReturnValue = CallFunc_GetFuel_ReturnValue;
	Parms.CallFunc_GetMaxFuel_ReturnValue = CallFunc_GetMaxFuel_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Fuel_Percent != nullptr)
		*Fuel_Percent = Parms.Fuel_Percent;

}


// Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.WhileActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerPawn_Athena_C*        PlayerPawn                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFuelPercent_Fuel_Percent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGCN_BoostJumpPack_Equipped_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class APlayerPawn_Athena_C* PlayerPawn, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, float CallFunc_GetFuelPercent_Fuel_Percent, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_BoostJumpPack_Equipped_C", "WhileActive");

	Params::UGCN_BoostJumpPack_Equipped_C_WhileActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.PlayerPawn = PlayerPawn;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.CallFunc_GetFuelPercent_Fuel_Percent = CallFunc_GetFuelPercent_Fuel_Percent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


