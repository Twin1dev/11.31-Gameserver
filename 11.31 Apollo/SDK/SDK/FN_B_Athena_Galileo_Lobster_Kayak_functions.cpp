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


// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.CreateSkeletalAudioComp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSkeletalAudioComponent* Component                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UFortSkeletalAudioComponent* CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_Galileo_Lobster_Kayak_C::CreateSkeletalAudioComp(class UFortSkeletalAudioComponent** Component, const struct FTransform& Temp_struct_Variable, class UFortSkeletalAudioComponent* CallFunc_AddComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_Galileo_Lobster_Kayak_C", "CreateSkeletalAudioComp");

	Params::AB_Athena_Galileo_Lobster_Kayak_C_CreateSkeletalAudioComp_Params Parms;

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Component != nullptr)
		*Component = Parms.Component;

}


// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Athena_Galileo_Lobster_Kayak_C::Timeline_2__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Athena_Galileo_Lobster_Kayak_C", "Timeline_2__FinishedFunc");

	Params::AB_Athena_Galileo_Lobster_Kayak_C_Timeline_2__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Athena_Galileo_Lobster_Kayak_C::Timeline_2__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Athena_Galileo_Lobster_Kayak_C", "Timeline_2__UpdateFunc");

	Params::AB_Athena_Galileo_Lobster_Kayak_C_Timeline_2__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.Timeline_2__TurnOnIdleLightningBeam__EventFunc
// (BlueprintEvent)
// Parameters:

void AB_Athena_Galileo_Lobster_Kayak_C::Timeline_2__TurnOnIdleLightningBeam__EventFunc()
{
	static auto Func = Class->GetFunction("B_Athena_Galileo_Lobster_Kayak_C", "Timeline_2__TurnOnIdleLightningBeam__EventFunc");

	Params::AB_Athena_Galileo_Lobster_Kayak_C_Timeline_2__TurnOnIdleLightningBeam__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.BlockBreak
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Athena_Galileo_Lobster_Kayak_C::BlockBreak()
{
	static auto Func = Class->GetFunction("B_Athena_Galileo_Lobster_Kayak_C", "BlockBreak");

	Params::AB_Athena_Galileo_Lobster_Kayak_C_BlockBreak_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.CurrentPoiseChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentPoise                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_Galileo_Lobster_Kayak_C::CurrentPoiseChanged(float CurrentPoise)
{
	static auto Func = Class->GetFunction("B_Athena_Galileo_Lobster_Kayak_C", "CurrentPoiseChanged");

	Params::AB_Athena_Galileo_Lobster_Kayak_C_CurrentPoiseChanged_Params Parms;

	Parms.CurrentPoise = CurrentPoise;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.StartIdleFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Athena_Galileo_Lobster_Kayak_C::StartIdleFX()
{
	static auto Func = Class->GetFunction("B_Athena_Galileo_Lobster_Kayak_C", "StartIdleFX");

	Params::AB_Athena_Galileo_Lobster_Kayak_C_StartIdleFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.DoBulletBlockEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_Galileo_Lobster_Kayak_C::DoBulletBlockEffect(const struct FVector& ImpactLocation)
{
	static auto Func = Class->GetFunction("B_Athena_Galileo_Lobster_Kayak_C", "DoBulletBlockEffect");

	Params::AB_Athena_Galileo_Lobster_Kayak_C_DoBulletBlockEffect_Params Parms;

	Parms.ImpactLocation = ImpactLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.TurnOnLobster
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Athena_Galileo_Lobster_Kayak_C::TurnOnLobster()
{
	static auto Func = Class->GetFunction("B_Athena_Galileo_Lobster_Kayak_C", "TurnOnLobster");

	Params::AB_Athena_Galileo_Lobster_Kayak_C_TurnOnLobster_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C.ExecuteUbergraph_B_Athena_Galileo_Lobster_Kayak
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_CurrentPoise                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ImpactLocation                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_Galileo_Lobster_Kayak_C::ExecuteUbergraph_B_Athena_Galileo_Lobster_Kayak(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float K2Node_Event_CurrentPoise, const struct FVector& K2Node_Event_ImpactLocation, float CallFunc_GetGameTimeInSeconds_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_Galileo_Lobster_Kayak_C", "ExecuteUbergraph_B_Athena_Galileo_Lobster_Kayak");

	Params::AB_Athena_Galileo_Lobster_Kayak_C_ExecuteUbergraph_B_Athena_Galileo_Lobster_Kayak_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.K2Node_Event_CurrentPoise = K2Node_Event_CurrentPoise;
	Parms.K2Node_Event_ImpactLocation = K2Node_Event_ImpactLocation;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
