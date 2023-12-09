#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA70 - 0xA60)
// BlueprintGeneratedClass GAT_Creative_TriggeredAbility_BuildingActor.GAT_Creative_TriggeredAbility_BuildingActor_C
class UGAT_Creative_TriggeredAbility_BuildingActor_C : public UGAT_Creative_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABuildingActor*                        AbilityOwner;                                      // 0xA68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGAT_Creative_TriggeredAbility_BuildingActor_C* GetDefaultObj();

	void SetupBuildingActorAbility(class ABuildingActor** BuildingActor, class ABuildingActor* LocalBuildingActor, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAT_Creative_TriggeredAbility_BuildingActor(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class ABuildingActor* CallFunc_SetupBuildingActorAbility_BuildingActor);
};

}


