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


// Function VaultWorld.VaultWorld_C.GetVaultRotator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVaultRotator_C*             VaultRotator                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVaultRotator_C*             K2Node_DynamicCast_AsVault_Rotator                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultWorld_C::GetVaultRotator(class AVaultRotator_C** VaultRotator, class AVaultRotator_C* K2Node_DynamicCast_AsVault_Rotator, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("VaultWorld_C", "GetVaultRotator");

	Params::AVaultWorld_C_GetVaultRotator_Params Parms;

	Parms.K2Node_DynamicCast_AsVault_Rotator = K2Node_DynamicCast_AsVault_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (VaultRotator != nullptr)
		*VaultRotator = Parms.VaultRotator;

}


// Function VaultWorld.VaultWorld_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AVaultWorld_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("VaultWorld_C", "ReceiveBeginPlay");

	Params::AVaultWorld_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultWorld.VaultWorld_C.ExecuteUbergraph_VaultWorld
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortStaticMeshActor*        K2Node_DynamicCast_AsFort_Static_Mesh_Actor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultWorld_C::ExecuteUbergraph_VaultWorld(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AFortStaticMeshActor* K2Node_DynamicCast_AsFort_Static_Mesh_Actor, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("VaultWorld_C", "ExecuteUbergraph_VaultWorld");

	Params::AVaultWorld_C_ExecuteUbergraph_VaultWorld_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Static_Mesh_Actor = K2Node_DynamicCast_AsFort_Static_Mesh_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
