#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Cozy_Stockings.BP_Cozy_Stockings_C
// (Actor)

class UClass* ABP_Cozy_Stockings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Cozy_Stockings_C");

	return Clss;
}


// BP_Cozy_Stockings_C BP_Cozy_Stockings.Default__BP_Cozy_Stockings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Cozy_Stockings_C* ABP_Cozy_Stockings_C::GetDefaultObj()
{
	static class ABP_Cozy_Stockings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Cozy_Stockings_C*>(ABP_Cozy_Stockings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.GetHasStockingQuestActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bHasStockingQuestActive                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Cozy_Stockings_C::GetHasStockingQuestActive(bool* bHasStockingQuestActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "GetHasStockingQuestActive");

	Params::ABP_Cozy_Stockings_C_GetHasStockingQuestActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bHasStockingQuestActive != nullptr)
		*bHasStockingQuestActive = Parms.bHasStockingQuestActive;

}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cozy_Stockings_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "UserConstructionScript");

	Params::ABP_Cozy_Stockings_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Cozy_Stockings_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Cozy_Stockings_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.OnFrontendInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Cozy_Stockings_C::OnFrontendInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "OnFrontendInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.SetStateEmpty
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Cozy_Stockings_C::SetStateEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "SetStateEmpty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.SetStateFull
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Cozy_Stockings_C::SetStateFull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "SetStateFull");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Cozy_Stockings_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.CheckStockingState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Cozy_Stockings_C::CheckStockingState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "CheckStockingState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.Debug_CurrentQuestsTotal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Cozy_Stockings_C::Debug_CurrentQuestsTotal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "Debug_CurrentQuestsTotal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.BP_OnInventoryUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Cozy_Stockings_C::BP_OnInventoryUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "BP_OnInventoryUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.StartInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Cozy_Stockings_C::StartInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "StartInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.StopInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Cozy_Stockings_C::StopInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "StopInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Cozy_Stockings.BP_Cozy_Stockings_C.ExecuteUbergraph_BP_Cozy_Stockings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Athena_HasQuest_PlayerHasQuest                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedObjective_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_HasQuest_PlayerHasQuest_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cozy_Stockings_C::ExecuteUbergraph_BP_Cozy_Stockings(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_SetStaticMesh_ReturnValue, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortQuestItemDefinition* CallFunc_Array_Get_Item, bool CallFunc_Athena_HasQuest_PlayerHasQuest, bool CallFunc_HasCompletedObjective_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Athena_HasQuest_PlayerHasQuest_1, bool CallFunc_BooleanAND_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Cozy_Stockings_C", "ExecuteUbergraph_BP_Cozy_Stockings");

	Params::ABP_Cozy_Stockings_C_ExecuteUbergraph_BP_Cozy_Stockings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue = CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue_1 = CallFunc_GetQuestManager_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Athena_HasQuest_PlayerHasQuest = CallFunc_Athena_HasQuest_PlayerHasQuest;
	Parms.CallFunc_HasCompletedObjective_ReturnValue = CallFunc_HasCompletedObjective_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Athena_HasQuest_PlayerHasQuest_1 = CallFunc_Athena_HasQuest_PlayerHasQuest_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


