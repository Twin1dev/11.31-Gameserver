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

// 0x44 (0x50C - 0x4C8)
// BlueprintGeneratedClass BP_Discoverable_SaxHat.BP_Discoverable_SaxHat_C
class ABP_Discoverable_SaxHat_C : public ABP_Cozy_Discoverable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DisplayMeshInitLoc;                                // 0x4D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DiscoInitLoc;                                      // 0x4E4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsStart;                                          // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRotator                              NewVar_1;                                          // 0x4F4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               NewVar_2;                                          // 0x500(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Discoverable_SaxHat_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void NotifiedByDiscoverable(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag, bool bIsStart);
	void ExecuteUbergraph_BP_Discoverable_SaxHat(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, bool K2Node_Event_bIsStart, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
