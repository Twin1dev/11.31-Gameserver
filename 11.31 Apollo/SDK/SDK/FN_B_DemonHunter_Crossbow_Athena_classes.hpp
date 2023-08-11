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

// 0x14 (0xFC8 - 0xFB4)
// BlueprintGeneratedClass B_DemonHunter_Crossbow_Athena.B_DemonHunter_Crossbow_Athena_C
class AB_DemonHunter_Crossbow_Athena_C : public AB_Ranged_Generic_C
{
public:
	uint8                                        Pad_4628[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_DemonHunter_Crossbow_FireTipFlare;               // 0xFC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_DemonHunter_Crossbow_Athena_C");
		return Clss;
	}

	void OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile);
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage);
	void ExecuteUbergraph_B_DemonHunter_Crossbow_Athena(int32 EntryPoint, enum class EFortReloadFXState K2Node_Event_ReloadStage, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsActive_ReturnValue, class AFortProjectileBase* K2Node_Event_SpawnProjectile);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
