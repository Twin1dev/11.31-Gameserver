#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xA80 - 0xA38)
// BlueprintGeneratedClass B_SneakySnowmanV2_Athena.B_SneakySnowmanV2_Athena_C
class AB_SneakySnowmanV2_Athena_C : public AB_UtilityItem_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWorldItemDefinition*              SnowmanItemDef;                                    // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        ShouldSnowmanInTurret;                             // 0xA50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UFortItem*>                     SnowmanItemInstances;                              // 0xA70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AB_SneakySnowmanV2_Athena_C* GetDefaultObj();

	void K2_OnUnEquip();
	void ExecuteUbergraph_B_SneakySnowmanV2_Athena(int32 EntryPoint);
};

}


