#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x478 - 0x468)
// BlueprintGeneratedClass BP_CozyLodge_AnimCharacter.BP_CozyLodge_AnimCharacter_C
class ABP_CozyLodge_AnimCharacter_C : public AFortEventLevelNavigationActor
{
public:
	class UChildActorComponent*                  SoldierMannequin_Male;                             // 0x468(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Highlightmesh;                                 // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CozyLodge_AnimCharacter_C* GetDefaultObj();

	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}


