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

// 0x10 (0xA88 - 0xA78)
// BlueprintGeneratedClass GAT_Creative_ActiveAbility_BuildingActor.GAT_Creative_ActiveAbility_BuildingActor_C
class UGAT_Creative_ActiveAbility_BuildingActor_C : public UGAT_Creative_ActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA78(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABuildingActor*                        AbilityOwner;                                      // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAT_Creative_ActiveAbility_BuildingActor_C");
		return Clss;
	}

	void SetupBuildingActorAbility(class ABuildingActor** BuildingActor, class ABuildingActor* LocalBuildingActor, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_Creative_ActiveAbility_BuildingActor(int32 EntryPoint, class ABuildingActor* CallFunc_SetupBuildingActorAbility_BuildingActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
