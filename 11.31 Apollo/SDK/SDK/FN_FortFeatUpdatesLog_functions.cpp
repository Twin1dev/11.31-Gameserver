#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FortFeatUpdatesLog.FortFeatUpdatesLog_C
// (None)

class UClass* UFortFeatUpdatesLog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortFeatUpdatesLog_C");

	return Clss;
}


// FortFeatUpdatesLog_C FortFeatUpdatesLog.Default__FortFeatUpdatesLog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortFeatUpdatesLog_C* UFortFeatUpdatesLog_C::GetDefaultObj()
{
	static class UFortFeatUpdatesLog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortFeatUpdatesLog_C*>(UFortFeatUpdatesLog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FortFeatUpdatesLog.FortFeatUpdatesLog_C.CreateAnnouncementUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo*     QuestItemToCheck                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortFeatUpdatesLog_C::CreateAnnouncementUpdate(class UFortQuestObjectiveInfo* QuestItemToCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFeatUpdatesLog_C", "CreateAnnouncementUpdate");

	Params::UFortFeatUpdatesLog_C_CreateAnnouncementUpdate_Params Parms{};

	Parms.QuestItemToCheck = QuestItemToCheck;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortFeatUpdatesLog.FortFeatUpdatesLog_C.ExecuteUbergraph_FortFeatUpdatesLog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestObjectiveInfo*     K2Node_Event_QuestItemToCheck                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetOwningQuest_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestUpdateInfo     K2Node_MakeStruct_DynamicQuestUpdateInfo                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnnounce_QuestUpdate_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void UFortFeatUpdatesLog_C::ExecuteUbergraph_FortFeatUpdatesLog(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UFortQuestObjectiveInfo* K2Node_Event_QuestItemToCheck, class UFortQuestItem* CallFunc_GetOwningQuest_ReturnValue, const struct FDynamicQuestUpdateInfo& K2Node_MakeStruct_DynamicQuestUpdateInfo, class AAnnounce_QuestUpdate_C* CallFunc_FinishSpawningActor_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFeatUpdatesLog_C", "ExecuteUbergraph_FortFeatUpdatesLog");

	Params::UFortFeatUpdatesLog_C_ExecuteUbergraph_FortFeatUpdatesLog_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_Event_QuestItemToCheck = K2Node_Event_QuestItemToCheck;
	Parms.CallFunc_GetOwningQuest_ReturnValue = CallFunc_GetOwningQuest_ReturnValue;
	Parms.K2Node_MakeStruct_DynamicQuestUpdateInfo = K2Node_MakeStruct_DynamicQuestUpdateInfo;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


