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


// Function BP_VictoryDrone_RiftDisolve.BP_VictoryDrone_RiftDisolve_C.PlaySpawnAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VictoryDrone_RiftDisolve_C::PlaySpawnAnim(class UAnimMontage* Montage, float NewLocalVar_0, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_VictoryDrone_RiftDisolve_C", "PlaySpawnAnim");

	Params::ABP_VictoryDrone_RiftDisolve_C_PlaySpawnAnim_Params Parms;

	Parms.Montage = Montage;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VictoryDrone_RiftDisolve.BP_VictoryDrone_RiftDisolve_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_VictoryDrone_RiftDisolve_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_VictoryDrone_RiftDisolve_C", "ReceiveBeginPlay");

	Params::ABP_VictoryDrone_RiftDisolve_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VictoryDrone_RiftDisolve.BP_VictoryDrone_RiftDisolve_C.ExecuteUbergraph_BP_VictoryDrone_RiftDisolve
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VictoryDrone_RiftDisolve_C::ExecuteUbergraph_BP_VictoryDrone_RiftDisolve(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_VictoryDrone_RiftDisolve_C", "ExecuteUbergraph_BP_VictoryDrone_RiftDisolve");

	Params::ABP_VictoryDrone_RiftDisolve_C_ExecuteUbergraph_BP_VictoryDrone_RiftDisolve_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
