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


// Function BP_ProjectileTrajectory_AthenaRed_Playset.BP_ProjectileTrajectory_AthenaRed_Playset_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ProjectileTrajectory_AthenaRed_Playset_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_AthenaRed_Playset_C", "ReceiveBeginPlay");

	Params::ABP_ProjectileTrajectory_AthenaRed_Playset_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileTrajectory_AthenaRed_Playset.BP_ProjectileTrajectory_AthenaRed_Playset_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ProjectileTrajectory_AthenaRed_Playset_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_AthenaRed_Playset_C", "ReceiveDestroyed");

	Params::ABP_ProjectileTrajectory_AthenaRed_Playset_C_ReceiveDestroyed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileTrajectory_AthenaRed_Playset.BP_ProjectileTrajectory_AthenaRed_Playset_C.ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed_Playset
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class USplineMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_AthenaRed_Playset_C::ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed_Playset(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& Temp_struct_Variable, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_AthenaRed_Playset_C", "ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed_Playset");

	Params::ABP_ProjectileTrajectory_AthenaRed_Playset_C_ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed_Playset_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
