#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function FL_NiagaraVehicleUserVariables.FL_NiagaraVehicleUserVariables_C.setNiagaraSkydiveUserVariables
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           Niagara                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AccumulatedSpeed                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NiagaraVehicleUserVariables_C::SetNiagaraSkydiveUserVariables(class UNiagaraComponent* Niagara, const struct FVector& Velocity, class UObject* __WorldContext, float AccumulatedSpeed, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue)
{
	static auto Func = Class->GetFunction("FL_NiagaraVehicleUserVariables_C", "setNiagaraSkydiveUserVariables");

	Params::UFL_NiagaraVehicleUserVariables_C_SetNiagaraSkydiveUserVariables_Params Parms;

	Parms.Niagara = Niagara;
	Parms.Velocity = Velocity;
	Parms.__WorldContext = __WorldContext;
	Parms.AccumulatedSpeed = AccumulatedSpeed;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_NiagaraVehicleUserVariables.FL_NiagaraVehicleUserVariables_C.niagaraPontoonModule
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           Niagara                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVehicleSphericalPontoon    Pontoon                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           NS                                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NiagaraVehicleUserVariables_C::NiagaraPontoonModule(class UNiagaraComponent* Niagara, const struct FVehicleSphericalPontoon& Pontoon, class UObject* __WorldContext, class UNiagaraComponent* NS, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Conv_NameToString_ReturnValue_4, class FName CallFunc_Conv_StringToName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class FName CallFunc_Conv_StringToName_ReturnValue_3)
{
	static auto Func = Class->GetFunction("FL_NiagaraVehicleUserVariables_C", "niagaraPontoonModule");

	Params::UFL_NiagaraVehicleUserVariables_C_NiagaraPontoonModule_Params Parms;

	Parms.Niagara = Niagara;
	Parms.Pontoon = Pontoon;
	Parms.__WorldContext = __WorldContext;
	Parms.NS = NS;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_3 = CallFunc_Conv_NameToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_NameToString_ReturnValue_4 = CallFunc_Conv_NameToString_ReturnValue_4;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Conv_StringToName_ReturnValue_3 = CallFunc_Conv_StringToName_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_NiagaraVehicleUserVariables.FL_NiagaraVehicleUserVariables_C.setNiagaraPontoonUserVariables
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           Niagara                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVehicleSphericalPontoon    Pontoon                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           NS                                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NiagaraVehicleUserVariables_C::SetNiagaraPontoonUserVariables(class UNiagaraComponent* Niagara, const struct FVehicleSphericalPontoon& Pontoon, class UObject* __WorldContext, class UNiagaraComponent* NS)
{
	static auto Func = Class->GetFunction("FL_NiagaraVehicleUserVariables_C", "setNiagaraPontoonUserVariables");

	Params::UFL_NiagaraVehicleUserVariables_C_SetNiagaraPontoonUserVariables_Params Parms;

	Parms.Niagara = Niagara;
	Parms.Pontoon = Pontoon;
	Parms.__WorldContext = __WorldContext;
	Parms.NS = NS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_NiagaraVehicleUserVariables.FL_NiagaraVehicleUserVariables_C.setNiagaraVehicleUserVariables
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnableSpawning                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InWater                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InAir                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasDriver                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Boost                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ForwardSpeed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TurnDirection                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TurnSpeed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TurningAngle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           NS                                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnableSpawn                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NiagaraVehicleUserVariables_C::SetNiagaraVehicleUserVariables(class UNiagaraComponent* NiagaraSystem, bool EnableSpawning, bool InWater, bool InAir, bool HasDriver, float Boost, float ForwardSpeed, float TurnDirection, float TurnSpeed, float TurningAngle, class UObject* __WorldContext, class UNiagaraComponent* NS, bool EnableSpawn)
{
	static auto Func = Class->GetFunction("FL_NiagaraVehicleUserVariables_C", "setNiagaraVehicleUserVariables");

	Params::UFL_NiagaraVehicleUserVariables_C_SetNiagaraVehicleUserVariables_Params Parms;

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.EnableSpawning = EnableSpawning;
	Parms.InWater = InWater;
	Parms.InAir = InAir;
	Parms.HasDriver = HasDriver;
	Parms.Boost = Boost;
	Parms.ForwardSpeed = ForwardSpeed;
	Parms.TurnDirection = TurnDirection;
	Parms.TurnSpeed = TurnSpeed;
	Parms.TurningAngle = TurningAngle;
	Parms.__WorldContext = __WorldContext;
	Parms.NS = NS;
	Parms.EnableSpawn = EnableSpawn;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
