#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerPawn_Athena_Galileo.BP_PlayerPawn_Athena_Galileo_C
// (Actor, Pawn)

class UClass* ABP_PlayerPawn_Athena_Galileo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerPawn_Athena_Galileo_C");

	return Clss;
}


// BP_PlayerPawn_Athena_Galileo_C BP_PlayerPawn_Athena_Galileo.Default__BP_PlayerPawn_Athena_Galileo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerPawn_Athena_Galileo_C* ABP_PlayerPawn_Athena_Galileo_C::GetDefaultObj()
{
	static class ABP_PlayerPawn_Athena_Galileo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerPawn_Athena_Galileo_C*>(ABP_PlayerPawn_Athena_Galileo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerPawn_Athena_Galileo.BP_PlayerPawn_Athena_Galileo_C.OnRep_IsPatrolling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerAnimInstance*     K2Node_DynamicCast_AsFort_Player_Anim_Instance                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerPawn_Athena_Galileo_C::OnRep_IsPatrolling(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortPlayerAnimInstance* K2Node_DynamicCast_AsFort_Player_Anim_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPawn_Athena_Galileo_C", "OnRep_IsPatrolling");

	Params::ABP_PlayerPawn_Athena_Galileo_C_OnRep_IsPatrolling_Params Parms{};

	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Anim_Instance = K2Node_DynamicCast_AsFort_Player_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Athena_Galileo.BP_PlayerPawn_Athena_Galileo_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_Athena_Galileo_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPawn_Athena_Galileo_C", "ReceiveTick");

	Params::ABP_PlayerPawn_Athena_Galileo_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Athena_Galileo.BP_PlayerPawn_Athena_Galileo_C.OnCharacterCustomizationCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_Athena_Galileo_C::OnCharacterCustomizationCompleted(class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPawn_Athena_Galileo_C", "OnCharacterCustomizationCompleted");

	Params::ABP_PlayerPawn_Athena_Galileo_C_OnCharacterCustomizationCompleted_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Athena_Galileo.BP_PlayerPawn_Athena_Galileo_C.ExecuteUbergraph_BP_PlayerPawn_Athena_Galileo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_Event_Pawn                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_Athena_Galileo_C::ExecuteUbergraph_BP_PlayerPawn_Athena_Galileo(int32 EntryPoint, class AFortPlayerPawn* K2Node_Event_Pawn, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPawn_Athena_Galileo_C", "ExecuteUbergraph_BP_PlayerPawn_Athena_Galileo");

	Params::ABP_PlayerPawn_Athena_Galileo_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Galileo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Pawn = K2Node_Event_Pawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


