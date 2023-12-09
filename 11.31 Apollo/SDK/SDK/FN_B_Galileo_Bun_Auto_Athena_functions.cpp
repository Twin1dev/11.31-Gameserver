#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Galileo_Bun_Auto_Athena.B_Galileo_Bun_Auto_Athena_C
// (Actor)

class UClass* AB_Galileo_Bun_Auto_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Galileo_Bun_Auto_Athena_C");

	return Clss;
}


// B_Galileo_Bun_Auto_Athena_C B_Galileo_Bun_Auto_Athena.Default__B_Galileo_Bun_Auto_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Galileo_Bun_Auto_Athena_C* AB_Galileo_Bun_Auto_Athena_C::GetDefaultObj()
{
	static class AB_Galileo_Bun_Auto_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Galileo_Bun_Auto_Athena_C*>(AB_Galileo_Bun_Auto_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Galileo_Bun_Auto_Athena.B_Galileo_Bun_Auto_Athena_C.OverheatFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Overheat_Val                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Galileo_Bun_Auto_Athena_C::OverheatFX(uint8 Overheat_Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Galileo_Bun_Auto_Athena_C", "OverheatFX");

	Params::AB_Galileo_Bun_Auto_Athena_C_OverheatFX_Params Parms{};

	Parms.Overheat_Val = Overheat_Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Galileo_Bun_Auto_Athena.B_Galileo_Bun_Auto_Athena_C.OnFinishedCooling
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Galileo_Bun_Auto_Athena_C::OnFinishedCooling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Galileo_Bun_Auto_Athena_C", "OnFinishedCooling");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Galileo_Bun_Auto_Athena.B_Galileo_Bun_Auto_Athena_C.OnStartCooling
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Galileo_Bun_Auto_Athena_C::OnStartCooling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Galileo_Bun_Auto_Athena_C", "OnStartCooling");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Galileo_Bun_Auto_Athena.B_Galileo_Bun_Auto_Athena_C.OnStartHeating
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Galileo_Bun_Auto_Athena_C::OnStartHeating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Galileo_Bun_Auto_Athena_C", "OnStartHeating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Galileo_Bun_Auto_Athena.B_Galileo_Bun_Auto_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Galileo_Bun_Auto_Athena_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Galileo_Bun_Auto_Athena_C", "OnWeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Galileo_Bun_Auto_Athena.B_Galileo_Bun_Auto_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Galileo_Bun_Auto_Athena_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Galileo_Bun_Auto_Athena_C", "OnPlayWeaponFireFX");

	Params::AB_Galileo_Bun_Auto_Athena_C_OnPlayWeaponFireFX_Params Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Galileo_Bun_Auto_Athena.B_Galileo_Bun_Auto_Athena_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Galileo_Bun_Auto_Athena_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Galileo_Bun_Auto_Athena_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Galileo_Bun_Auto_Athena.B_Galileo_Bun_Auto_Athena_C.OverheatFXReplicated
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Overheat_Val                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Galileo_Bun_Auto_Athena_C::OverheatFXReplicated(uint8 Overheat_Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Galileo_Bun_Auto_Athena_C", "OverheatFXReplicated");

	Params::AB_Galileo_Bun_Auto_Athena_C_OverheatFXReplicated_Params Parms{};

	Parms.Overheat_Val = Overheat_Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Galileo_Bun_Auto_Athena.B_Galileo_Bun_Auto_Athena_C.OnStartOverheated
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Galileo_Bun_Auto_Athena_C::OnStartOverheated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Galileo_Bun_Auto_Athena_C", "OnStartOverheated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Galileo_Bun_Auto_Athena.B_Galileo_Bun_Auto_Athena_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Galileo_Bun_Auto_Athena_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Galileo_Bun_Auto_Athena_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Galileo_Bun_Auto_Athena.B_Galileo_Bun_Auto_Athena_C.ExecuteUbergraph_B_Galileo_Bun_Auto_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_Overheat_Val_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentOverheatValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetOverheatingMaxValue_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              K2Node_CustomEvent_Overheat_Val                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentOverheatValue_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetOverheatingMaxValue_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Galileo_Bun_Auto_Athena_C::ExecuteUbergraph_B_Galileo_Bun_Auto_Athena(int32 EntryPoint, float Temp_float_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable_1, uint8 K2Node_CustomEvent_Overheat_Val_1, bool CallFunc_IsMobilePlatform_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool Temp_bool_Variable, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, float K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetCurrentOverheatValue_ReturnValue, float CallFunc_GetOverheatingMaxValue_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, uint8 K2Node_CustomEvent_Overheat_Val, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_GetCurrentOverheatValue_ReturnValue_1, float CallFunc_GetOverheatingMaxValue_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Galileo_Bun_Auto_Athena_C", "ExecuteUbergraph_B_Galileo_Bun_Auto_Athena");

	Params::AB_Galileo_Bun_Auto_Athena_C_ExecuteUbergraph_B_Galileo_Bun_Auto_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_CustomEvent_Overheat_Val_1 = K2Node_CustomEvent_Overheat_Val_1;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetCurrentOverheatValue_ReturnValue = CallFunc_GetCurrentOverheatValue_ReturnValue;
	Parms.CallFunc_GetOverheatingMaxValue_ReturnValue = CallFunc_GetOverheatingMaxValue_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue_1 = CallFunc_GetInstigator_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Overheat_Val = K2Node_CustomEvent_Overheat_Val;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetCurrentOverheatValue_ReturnValue_1 = CallFunc_GetCurrentOverheatValue_ReturnValue_1;
	Parms.CallFunc_GetOverheatingMaxValue_ReturnValue_1 = CallFunc_GetOverheatingMaxValue_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue_2 = CallFunc_GetInstigator_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


