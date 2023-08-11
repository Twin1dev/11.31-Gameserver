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


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.GetLootTier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_Map_Keys_Keys                                           (ZeroConstructor, ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Athena_FlopperSpawn_Parent_C::GetLootTier(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_Athena_FlopperSpawn_Parent_C", "GetLootTier");

	Params::ABGA_Athena_FlopperSpawn_Parent_C_GetLootTier_Params Parms;

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ShouldKill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Athena_FlopperSpawn_Parent_C::ShouldKill(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_Athena_FlopperSpawn_Parent_C", "ShouldKill");

	Params::ABGA_Athena_FlopperSpawn_Parent_C_ShouldKill_Params Parms;

	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HandleUseTracking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_FlopperSpawn_Parent_C::HandleUseTracking(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_Athena_FlopperSpawn_Parent_C", "HandleUseTracking");

	Params::ABGA_Athena_FlopperSpawn_Parent_C_HandleUseTracking_Params Parms;

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SetBalanceValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_FlopperSpawn_Parent_C::SetBalanceValues(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_Athena_FlopperSpawn_Parent_C", "SetBalanceValues");

	Params::ABGA_Athena_FlopperSpawn_Parent_C_SetBalanceValues_Params Parms;

	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInteractionBeingAttemptedInteractionBeingAttempted                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABGA_Athena_FlopperSpawn_Parent_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted)
{
	static auto Func = Class->GetFunction("BGA_Athena_FlopperSpawn_Parent_C", "BlueprintCanInteract");

	Params::ABGA_Athena_FlopperSpawn_Parent_C_BlueprintCanInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Athena_FlopperSpawn_Parent_C::UserConstructionScript(bool CallFunc_IsServer_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_Athena_FlopperSpawn_Parent_C", "UserConstructionScript");

	Params::ABGA_Athena_FlopperSpawn_Parent_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.OnReady_5804F209455A50B3EE64E3AED087DE64
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*        GameState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*               Playlist                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABGA_Athena_FlopperSpawn_Parent_C::OnReady_5804F209455A50B3EE64E3AED087DE64(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("BGA_Athena_FlopperSpawn_Parent_C", "OnReady_5804F209455A50B3EE64E3AED087DE64");

	Params::ABGA_Athena_FlopperSpawn_Parent_C_OnReady_5804F209455A50B3EE64E3AED087DE64_Params Parms;

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SpawnItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Hooked                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             HookComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SpawnLoc                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ItemSpawnDelay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CaughtWithFishingRod                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CaughtWithHappyGhost                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      ItemUsedToFish                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_FlopperSpawn_Parent_C::SpawnItem(class AActor* Target, bool Hooked, class USceneComponent* HookComponent, const struct FVector& SpawnLoc, class AActor* Player, float ItemSpawnDelay, bool CaughtWithFishingRod, bool CaughtWithHappyGhost, class AActor* ItemUsedToFish)
{
	static auto Func = Class->GetFunction("BGA_Athena_FlopperSpawn_Parent_C", "SpawnItem");

	Params::ABGA_Athena_FlopperSpawn_Parent_C_SpawnItem_Params Parms;

	Parms.Target = Target;
	Parms.Hooked = Hooked;
	Parms.HookComponent = HookComponent;
	Parms.SpawnLoc = SpawnLoc;
	Parms.Player = Player;
	Parms.ItemSpawnDelay = ItemSpawnDelay;
	Parms.CaughtWithFishingRod = CaughtWithFishingRod;
	Parms.CaughtWithHappyGhost = CaughtWithHappyGhost;
	Parms.ItemUsedToFish = ItemUsedToFish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABGA_Athena_FlopperSpawn_Parent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BGA_Athena_FlopperSpawn_Parent_C", "ReceiveBeginPlay");

	Params::ABGA_Athena_FlopperSpawn_Parent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HideAndKill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_FlopperSpawn_Parent_C::HideAndKill()
{
	static auto Func = Class->GetFunction("BGA_Athena_FlopperSpawn_Parent_C", "HideAndKill");

	Params::ABGA_Athena_FlopperSpawn_Parent_C_HideAndKill_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_Athena_FlopperSpawn_Parent_C::BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("BGA_Athena_FlopperSpawn_Parent_C", "BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABGA_Athena_FlopperSpawn_Parent_C_BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.PlaySpawnItemHightier
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_FlopperSpawn_Parent_C::PlaySpawnItemHightier(const struct FVector& Location)
{
	static auto Func = Class->GetFunction("BGA_Athena_FlopperSpawn_Parent_C", "PlaySpawnItemHightier");

	Params::ABGA_Athena_FlopperSpawn_Parent_C_PlaySpawnItemHightier_Params Parms;

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortItemEntry>      CallFunc_PickLootDrops_OutLootToDrop                             (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_PickLootDrops_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemEntry              CallFunc_Array_Get_Item                                          ()
// class UFortWorldItemDefinition*    K2Node_DynamicCast_AsFort_World_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetPoiGridTagsForLocation_ReturnValue                   ()
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class APrj_Athena_FloppingRabbit_C*K2Node_DynamicCast_AsPrj_Athena_Flopping_Rabbit                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Hooked                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             K2Node_CustomEvent_HookComponent                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_SpawnLoc                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_player                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ItemSpawnDelay                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CaughtWithFishingRod                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_CaughtWithHappyGhost                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_ItemUsedToFish                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SendComplexCustomStatEvent_QuestActive                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SendComplexCustomStatEvent_QuestCompleted               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPickup*                 CallFunc_K2_SpawnPickupInWorld_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CurrentPlaylistReady*CallFunc_PlaylistDataReadyAsync_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlaylist*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable                                             ()
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_CustomEvent_GameState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*               K2Node_CustomEvent_Playlist                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_PlaylistContextTags                           (ConstParm)
// struct FGameplayTagContainer       K2Node_Select_Default_1                                          ()
// bool                               CallFunc_SendComplexCustomStatEvent_QuestActive_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SendComplexCustomStatEvent_QuestCompleted_1             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Athena_FlopperSpawn_Parent_C::ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsServer_ReturnValue, TArray<struct FFortItemEntry>& CallFunc_PickLootDrops_OutLootToDrop, bool CallFunc_PickLootDrops_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FFortItemEntry& CallFunc_Array_Get_Item, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTagContainer& CallFunc_GetPoiGridTagsForLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class APrj_Athena_FloppingRabbit_C* K2Node_DynamicCast_AsPrj_Athena_Flopping_Rabbit, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetValueAtLevel_ReturnValue, class AActor* K2Node_CustomEvent_Target, bool K2Node_CustomEvent_Hooked, class USceneComponent* K2Node_CustomEvent_HookComponent, const struct FVector& K2Node_CustomEvent_SpawnLoc, class AActor* K2Node_CustomEvent_player, float K2Node_CustomEvent_ItemSpawnDelay, bool K2Node_CustomEvent_CaughtWithFishingRod, bool K2Node_CustomEvent_CaughtWithHappyGhost, class AActor* K2Node_CustomEvent_ItemUsedToFish, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_3, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_Select_Default, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, class AFortGameStateAthena* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UFortPlaylist* Temp_object_Variable_1, const struct FGameplayTagContainer& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, const struct FGameplayTagContainer& K2Node_Select_Default_1, bool CallFunc_SendComplexCustomStatEvent_QuestActive_1, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted_1)
{
	static auto Func = Class->GetFunction("BGA_Athena_FlopperSpawn_Parent_C", "ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent");

	Params::ABGA_Athena_FlopperSpawn_Parent_C_ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_PickLootDrops_OutLootToDrop = CallFunc_PickLootDrops_OutLootToDrop;
	Parms.CallFunc_PickLootDrops_ReturnValue = CallFunc_PickLootDrops_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_World_Item_Definition = K2Node_DynamicCast_AsFort_World_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPoiGridTagsForLocation_ReturnValue = CallFunc_GetPoiGridTagsForLocation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsPrj_Athena_Flopping_Rabbit = K2Node_DynamicCast_AsPrj_Athena_Flopping_Rabbit;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.K2Node_CustomEvent_Hooked = K2Node_CustomEvent_Hooked;
	Parms.K2Node_CustomEvent_HookComponent = K2Node_CustomEvent_HookComponent;
	Parms.K2Node_CustomEvent_SpawnLoc = K2Node_CustomEvent_SpawnLoc;
	Parms.K2Node_CustomEvent_player = K2Node_CustomEvent_player;
	Parms.K2Node_CustomEvent_ItemSpawnDelay = K2Node_CustomEvent_ItemSpawnDelay;
	Parms.K2Node_CustomEvent_CaughtWithFishingRod = K2Node_CustomEvent_CaughtWithFishingRod;
	Parms.K2Node_CustomEvent_CaughtWithHappyGhost = K2Node_CustomEvent_CaughtWithHappyGhost;
	Parms.K2Node_CustomEvent_ItemUsedToFish = K2Node_CustomEvent_ItemUsedToFish;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestActive = CallFunc_SendComplexCustomStatEvent_QuestActive;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestCompleted = CallFunc_SendComplexCustomStatEvent_QuestCompleted;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SpawnPickupInWorld_ReturnValue = CallFunc_K2_SpawnPickupInWorld_ReturnValue;
	Parms.CallFunc_PlaylistDataReadyAsync_ReturnValue = CallFunc_PlaylistDataReadyAsync_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_GameState = K2Node_CustomEvent_GameState;
	Parms.K2Node_CustomEvent_Playlist = K2Node_CustomEvent_Playlist;
	Parms.K2Node_CustomEvent_PlaylistContextTags = K2Node_CustomEvent_PlaylistContextTags;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestActive_1 = CallFunc_SendComplexCustomStatEvent_QuestActive_1;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestCompleted_1 = CallFunc_SendComplexCustomStatEvent_QuestCompleted_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
