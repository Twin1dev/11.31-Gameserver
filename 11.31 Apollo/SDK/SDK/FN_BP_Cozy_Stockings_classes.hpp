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

// 0x64 (0x4CC - 0x468)
// BlueprintGeneratedClass BP_Cozy_Stockings.BP_Cozy_Stockings_C
class ABP_Cozy_Stockings_C : public AFortEventLevelNavigationActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       FXLoc;                                             // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_ProgressJiggle_43ACA2B24424D191A05A13A532DABCFF; // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_43ACA2B24424D191A05A13A532DABCFF; // 0x47C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mid;                                               // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Highlightmesh;                                 // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortQuestItemDefinition*>      PossibleStockingQuests;                            // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bHasStockingQuestActive;                           // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UStaticMesh*                           SM_EmptyStocking;                                  // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           SM_FullStocking;                                   // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              FirstStockingQuest;                                // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JiggleIntensity;                                   // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Cozy_Stockings_C");
		return Clss;
	}

	void GetHasStockingQuestActive(bool* bHasStockingQuestActive);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnFrontendInteract();
	void SetStateEmpty();
	void SetStateFull();
	void ReceiveBeginPlay();
	void CheckStockingState();
	void Debug_CurrentQuestsTotal();
	void BP_OnInventoryUpdated();
	void StartInteraction();
	void StopInteraction();
	void ExecuteUbergraph_BP_Cozy_Stockings(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_SetStaticMesh_ReturnValue, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortQuestItemDefinition* CallFunc_Array_Get_Item, bool CallFunc_Athena_HasQuest_PlayerHasQuest, bool CallFunc_HasCompletedObjective_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Athena_HasQuest_PlayerHasQuest_1, bool CallFunc_BooleanAND_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
