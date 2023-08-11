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


// Function BuildingToy.BuildingToy_C.GetVisualComponents
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class USceneComponent*>     Components                                                       (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
// TArray<class USceneComponent*>     CallFunc_K2_GetComponentsByClass_ReturnValue                     (ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void ABuildingToy_C::GetVisualComponents(TArray<class USceneComponent*>* Components, TArray<class USceneComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue)
{
	static auto Func = Class->GetFunction("BuildingToy_C", "GetVisualComponents");

	Params::ABuildingToy_C_GetVisualComponents_Params Parms;

	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Components != nullptr)
		*Components = Parms.Components;

}


// Function BuildingToy.BuildingToy_C.DesiredVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisibleDuringMinigame_IsVisibleDuringMinigame         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInPlayMode_Play_Mode                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABuildingToy_C::DesiredVisibility(bool* Visibility, class AActor* Temp_object_Variable, bool CallFunc_IsVisibleDuringMinigame_IsVisibleDuringMinigame, bool CallFunc_IsInPlayMode_Play_Mode, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("BuildingToy_C", "DesiredVisibility");

	Params::ABuildingToy_C_DesiredVisibility_Params Parms;

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsVisibleDuringMinigame_IsVisibleDuringMinigame = CallFunc_IsVisibleDuringMinigame_IsVisibleDuringMinigame;
	Parms.CallFunc_IsInPlayMode_Play_Mode = CallFunc_IsInPlayMode_Play_Mode;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function BuildingToy.BuildingToy_C.IsVisibleDuringMinigame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsVisibleDuringMinigame                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABuildingToy_C::IsVisibleDuringMinigame(bool* IsVisibleDuringMinigame)
{
	static auto Func = Class->GetFunction("BuildingToy_C", "IsVisibleDuringMinigame");

	Params::ABuildingToy_C_IsVisibleDuringMinigame_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (IsVisibleDuringMinigame != nullptr)
		*IsVisibleDuringMinigame = Parms.IsVisibleDuringMinigame;

}


// Function BuildingToy.BuildingToy_C.UpdateVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldBeVisible                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DesiredVisibility_Visibility                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USceneComponent*>     CallFunc_GetVisualComponents_Components                          (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildingToy_C::UpdateVisuals(bool bShouldBeVisible, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_DesiredVisibility_Visibility, TArray<class USceneComponent*>& CallFunc_GetVisualComponents_Components, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BuildingToy_C", "UpdateVisuals");

	Params::ABuildingToy_C_UpdateVisuals_Params Parms;

	Parms.bShouldBeVisible = bShouldBeVisible;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_DesiredVisibility_Visibility = CallFunc_DesiredVisibility_Visibility;
	Parms.CallFunc_GetVisualComponents_Components = CallFunc_GetVisualComponents_Components;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingToy.BuildingToy_C.MinigameIsRunning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GameIsRunning                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasStarted_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABuildingToy_C::MinigameIsRunning(bool* GameIsRunning, bool CallFunc_HasStarted_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("BuildingToy_C", "MinigameIsRunning");

	Params::ABuildingToy_C_MinigameIsRunning_Params Parms;

	Parms.CallFunc_HasStarted_ReturnValue = CallFunc_HasStarted_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GameIsRunning != nullptr)
		*GameIsRunning = Parms.GameIsRunning;

}


// Function BuildingToy.BuildingToy_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInteractionBeingAttemptedInteractionBeingAttempted                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ABuildingToy_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted)
{
	static auto Func = Class->GetFunction("BuildingToy_C", "BlueprintGetInteractionString");

	Params::ABuildingToy_C_BlueprintGetInteractionString_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BuildingToy.BuildingToy_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInteractionBeingAttemptedInteractionBeingAttempted                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               bInteractSuccess                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortVolume*                 CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasStarted_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABuildingToy_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, bool bInteractSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1, class AFortVolume* CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume, bool CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_HasStarted_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("BuildingToy_C", "BlueprintCanInteract");

	Params::ABuildingToy_C_BlueprintCanInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.bInteractSuccess = bInteractSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume = CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume;
	Parms.CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue = CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_HasStarted_ReturnValue = CallFunc_HasStarted_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BuildingToy.BuildingToy_C.BlueprintOnLocalInteract
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABuildingToy_C::BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("BuildingToy_C", "BlueprintOnLocalInteract");

	Params::ABuildingToy_C_BlueprintOnLocalInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BuildingToy.BuildingToy_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABuildingToy_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("BuildingToy_C", "BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature");

	Params::ABuildingToy_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingToy.BuildingToy_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABuildingToy_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("BuildingToy_C", "BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature");

	Params::ABuildingToy_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingToy.BuildingToy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABuildingToy_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BuildingToy_C", "ReceiveBeginPlay");

	Params::ABuildingToy_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingToy.BuildingToy_C.OnMinigameStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuildingToy_C::OnMinigameStarted()
{
	static auto Func = Class->GetFunction("BuildingToy_C", "OnMinigameStarted");

	Params::ABuildingToy_C_OnMinigameStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingToy.BuildingToy_C.OnMinigameEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuildingToy_C::OnMinigameEnded()
{
	static auto Func = Class->GetFunction("BuildingToy_C", "OnMinigameEnded");

	Params::ABuildingToy_C_OnMinigameEnded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingToy.BuildingToy_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_2_OnMinigameAssignmentChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortMinigame*               Minigame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildingToy_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_2_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame)
{
	static auto Func = Class->GetFunction("BuildingToy_C", "BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_2_OnMinigameAssignmentChanged__DelegateSignature");

	Params::ABuildingToy_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_2_OnMinigameAssignmentChanged__DelegateSignature_Params Parms;

	Parms.Minigame = Minigame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingToy.BuildingToy_C.On Play Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               Minigame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsInPlayMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABuildingToy_C::On_Play_Mode_Changed(class AFortMinigame* Minigame, bool bIsInPlayMode)
{
	static auto Func = Class->GetFunction("BuildingToy_C", "On Play Mode Changed");

	Params::ABuildingToy_C_On_Play_Mode_Changed_Params Parms;

	Parms.Minigame = Minigame;
	Parms.bIsInPlayMode = bIsInPlayMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingToy.BuildingToy_C.ExecuteUbergraph_BuildingToy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMinigame*               K2Node_ComponentBoundEvent_Minigame                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPlayMode_Play_Mode                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               K2Node_CustomEvent_Minigame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsInPlayMode                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABuildingToy_C::ExecuteUbergraph_BuildingToy(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, class AActor* Temp_object_Variable, class AFortMinigame* K2Node_ComponentBoundEvent_Minigame, bool CallFunc_IsInPlayMode_Play_Mode, class AFortMinigame* K2Node_CustomEvent_Minigame, bool K2Node_CustomEvent_bIsInPlayMode)
{
	static auto Func = Class->GetFunction("BuildingToy_C", "ExecuteUbergraph_BuildingToy");

	Params::ABuildingToy_C_ExecuteUbergraph_BuildingToy_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_ComponentBoundEvent_Minigame = K2Node_ComponentBoundEvent_Minigame;
	Parms.CallFunc_IsInPlayMode_Play_Mode = CallFunc_IsInPlayMode_Play_Mode;
	Parms.K2Node_CustomEvent_Minigame = K2Node_CustomEvent_Minigame;
	Parms.K2Node_CustomEvent_bIsInPlayMode = K2Node_CustomEvent_bIsInPlayMode;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
