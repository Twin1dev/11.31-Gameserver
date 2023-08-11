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

// 0x10 (0x4D8 - 0x4C8)
// BlueprintGeneratedClass BP_Discoverable_MusicPlayer.BP_Discoverable_MusicPlayer_C
class ABP_Discoverable_MusicPlayer_C : public ABP_Cozy_Discoverable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Discoverable_MusicPlayer_C");
		return Clss;
	}

	void NotifiedByDiscoverable(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag, bool bIsStart);
	void ExecuteUbergraph_BP_Discoverable_MusicPlayer(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, bool K2Node_Event_bIsStart, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
