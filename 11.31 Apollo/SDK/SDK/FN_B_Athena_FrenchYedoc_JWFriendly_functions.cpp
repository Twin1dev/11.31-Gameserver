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


// Function B_Athena_FrenchYedoc_JWFriendly.B_Athena_FrenchYedoc_JWFriendly_C.SetBotWeaponsHiddenInGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   BotPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewHidden                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bPropagateToChildren                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponentBudgeted*>CallFunc_GetWeaponMeshes_WeaponMeshes                            (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponentBudgeted*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Athena_FrenchYedoc_JWFriendly_C::SetBotWeaponsHiddenInGame(class AFortPawn* BotPawn, bool NewHidden, bool bPropagateToChildren, int32 Temp_int_Array_Index_Variable, TArray<class USkeletalMeshComponentBudgeted*>& CallFunc_GetWeaponMeshes_WeaponMeshes, int32 Temp_int_Loop_Counter_Variable, class USkeletalMeshComponentBudgeted* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_FrenchYedoc_JWFriendly_C", "SetBotWeaponsHiddenInGame");

	Params::AB_Athena_FrenchYedoc_JWFriendly_C_SetBotWeaponsHiddenInGame_Params Parms;

	Parms.BotPawn = BotPawn;
	Parms.NewHidden = NewHidden;
	Parms.bPropagateToChildren = bPropagateToChildren;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetWeaponMeshes_WeaponMeshes = CallFunc_GetWeaponMeshes_WeaponMeshes;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_FrenchYedoc_JWFriendly.B_Athena_FrenchYedoc_JWFriendly_C.OnRep_BotPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Athena_FrenchYedoc_JWFriendly_C::OnRep_BotPawn(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_FrenchYedoc_JWFriendly_C", "OnRep_BotPawn");

	Params::AB_Athena_FrenchYedoc_JWFriendly_C_OnRep_BotPawn_Params Parms;

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_FrenchYedoc_JWFriendly.B_Athena_FrenchYedoc_JWFriendly_C.StartBotSpawnInVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Athena_FrenchYedoc_JWFriendly_C::StartBotSpawnInVisuals()
{
	static auto Func = Class->GetFunction("B_Athena_FrenchYedoc_JWFriendly_C", "StartBotSpawnInVisuals");

	Params::AB_Athena_FrenchYedoc_JWFriendly_C_StartBotSpawnInVisuals_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_FrenchYedoc_JWFriendly.B_Athena_FrenchYedoc_JWFriendly_C.RevealWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Athena_FrenchYedoc_JWFriendly_C::RevealWeapon()
{
	static auto Func = Class->GetFunction("B_Athena_FrenchYedoc_JWFriendly_C", "RevealWeapon");

	Params::AB_Athena_FrenchYedoc_JWFriendly_C_RevealWeapon_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_FrenchYedoc_JWFriendly.B_Athena_FrenchYedoc_JWFriendly_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Athena_FrenchYedoc_JWFriendly_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Athena_FrenchYedoc_JWFriendly_C", "ReceiveBeginPlay");

	Params::AB_Athena_FrenchYedoc_JWFriendly_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_FrenchYedoc_JWFriendly.B_Athena_FrenchYedoc_JWFriendly_C.UnhideBotPawn
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Athena_FrenchYedoc_JWFriendly_C::UnhideBotPawn()
{
	static auto Func = Class->GetFunction("B_Athena_FrenchYedoc_JWFriendly_C", "UnhideBotPawn");

	Params::AB_Athena_FrenchYedoc_JWFriendly_C_UnhideBotPawn_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_FrenchYedoc_JWFriendly.B_Athena_FrenchYedoc_JWFriendly_C.ExecuteUbergraph_B_Athena_FrenchYedoc_JWFriendly
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameMode_C*          K2Node_DynamicCast_AsAthena_Game_Mode                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UFortServerBotManagerAthena* CallFunc_GetServerBotManager_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       CallFunc_SpawnBot_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaAIBotController*  K2Node_DynamicCast_AsFort_Athena_AIBot_Controller                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VictoryDrone_C*          CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_FrenchYedoc_JWFriendly_C::ExecuteUbergraph_B_Athena_FrenchYedoc_JWFriendly(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, uint8 CallFunc_GetActorTeam_ReturnValue, float Temp_float_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable_1, bool Temp_bool_Variable, uint8 Temp_byte_Variable, bool Temp_bool_Variable_1, uint8 K2Node_Select_Default, float K2Node_Select_Default_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AAthena_GameMode_C* K2Node_DynamicCast_AsAthena_Game_Mode, bool K2Node_DynamicCast_bSuccess_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortServerBotManagerAthena* CallFunc_GetServerBotManager_ReturnValue, class AFortPlayerPawnAthena* CallFunc_SpawnBot_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortAthenaAIBotController* K2Node_DynamicCast_AsFort_Athena_AIBot_Controller, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_4, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_VictoryDrone_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_FrenchYedoc_JWFriendly_C", "ExecuteUbergraph_B_Athena_FrenchYedoc_JWFriendly");

	Params::AB_Athena_FrenchYedoc_JWFriendly_C_ExecuteUbergraph_B_Athena_FrenchYedoc_JWFriendly_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_Mode = K2Node_DynamicCast_AsAthena_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetServerBotManager_ReturnValue = CallFunc_GetServerBotManager_ReturnValue;
	Parms.CallFunc_SpawnBot_ReturnValue = CallFunc_SpawnBot_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Athena_AIBot_Controller = K2Node_DynamicCast_AsFort_Athena_AIBot_Controller;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena_1 = K2Node_DynamicCast_AsPlayer_Pawn_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
