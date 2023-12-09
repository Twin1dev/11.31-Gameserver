#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x330 - 0x328)
// WidgetBlueprintGeneratedClass FortFeatUpdatesLog.FortFeatUpdatesLog_C
class UFortFeatUpdatesLog_C : public UFortQuestUpdatesLog
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UFortFeatUpdatesLog_C* GetDefaultObj();

	void CreateAnnouncementUpdate(class UFortQuestObjectiveInfo* QuestItemToCheck);
	void ExecuteUbergraph_FortFeatUpdatesLog(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UFortQuestObjectiveInfo* K2Node_Event_QuestItemToCheck, class UFortQuestItem* CallFunc_GetOwningQuest_ReturnValue, const struct FDynamicQuestUpdateInfo& K2Node_MakeStruct_DynamicQuestUpdateInfo, class AAnnounce_QuestUpdate_C* CallFunc_FinishSpawningActor_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array);
};

}


