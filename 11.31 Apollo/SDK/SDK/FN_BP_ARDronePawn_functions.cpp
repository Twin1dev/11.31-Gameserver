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


// Function BP_ARDronePawn.BP_ARDronePawn_C.GetWindVolumeFromAltitude
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Altitude                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ARDronePawn_C::GetWindVolumeFromAltitude(float Altitude, float* Volume, float CallFunc_MapRangeClamped_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_ARDronePawn_C", "GetWindVolumeFromAltitude");

	Params::ABP_ARDronePawn_C_GetWindVolumeFromAltitude_Params Parms;

	Parms.Altitude = Altitude;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Volume != nullptr)
		*Volume = Parms.Volume;

}


// Function BP_ARDronePawn.BP_ARDronePawn_C.SetWindAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ARDronePawn_C::SetWindAudioEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BP_ARDronePawn_C", "SetWindAudioEnabled");

	Params::ABP_ARDronePawn_C_SetWindAudioEnabled_Params Parms;

	Parms.Enabled = Enabled;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSound2D_ReturnValue_1 = CallFunc_SpawnSound2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ARDronePawn.BP_ARDronePawn_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 OldController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ARDronePawn_C::ReceiveUnpossessed(class AController* OldController)
{
	static auto Func = Class->GetFunction("BP_ARDronePawn_C", "ReceiveUnpossessed");

	Params::ABP_ARDronePawn_C_ReceiveUnpossessed_Params Parms;

	Parms.OldController = OldController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ARDronePawn.BP_ARDronePawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 NewController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ARDronePawn_C::ReceivePossessed(class AController* NewController)
{
	static auto Func = Class->GetFunction("BP_ARDronePawn_C", "ReceivePossessed");

	Params::ABP_ARDronePawn_C_ReceivePossessed_Params Parms;

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ARDronePawn.BP_ARDronePawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ARDronePawn_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("BP_ARDronePawn_C", "ReceiveTick");

	Params::ABP_ARDronePawn_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ARDronePawn.BP_ARDronePawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ARDronePawn_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_ARDronePawn_C", "ReceiveBeginPlay");

	Params::ABP_ARDronePawn_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ARDronePawn.BP_ARDronePawn_C.Update Wind Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ARDronePawn_C::Update_Wind_Audio()
{
	static auto Func = Class->GetFunction("BP_ARDronePawn_C", "Update Wind Audio");

	Params::ABP_ARDronePawn_C_Update_Wind_Audio_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ARDronePawn.BP_ARDronePawn_C.ExecuteUbergraph_BP_ARDronePawn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_OldController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_NewController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAltitude_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWindVolumeFromAltitude_Volume                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ARDronePawn_C::ExecuteUbergraph_BP_ARDronePawn(int32 EntryPoint, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_FInterpTo_ReturnValue, class AController* K2Node_Event_OldController, class AController* K2Node_Event_NewController, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_GetAltitude_ReturnValue, float CallFunc_GetWindVolumeFromAltitude_Volume, float CallFunc_FInterpTo_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BP_ARDronePawn_C", "ExecuteUbergraph_BP_ARDronePawn");

	Params::ABP_ARDronePawn_C_ExecuteUbergraph_BP_ARDronePawn_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.K2Node_Event_OldController = K2Node_Event_OldController;
	Parms.K2Node_Event_NewController = K2Node_Event_NewController;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_GetAltitude_ReturnValue = CallFunc_GetAltitude_ReturnValue;
	Parms.CallFunc_GetWindVolumeFromAltitude_Volume = CallFunc_GetWindVolumeFromAltitude_Volume;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
