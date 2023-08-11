#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB38 - 0xB30)
// BlueprintGeneratedClass GA_Athena_Flopper_Effective.GA_Athena_Flopper_Effective_C
class UGA_Athena_Flopper_Effective_C : public UGA_Athena_MedConsumable_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Flopper_Effective_C");
		return Clss;
	}

	void K2_CommitExecute();
	void ExecuteUbergraph_GA_Athena_Flopper_Effective(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
