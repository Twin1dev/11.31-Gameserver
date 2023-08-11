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

// 0x10 (0xA40 - 0xA30)
// BlueprintGeneratedClass GA_TrapBuildGeneric.GA_TrapBuildGeneric_C
class UGA_TrapBuildGeneric_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          PlacedCue;                                         // 0xA38(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_TrapBuildGeneric_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_TrapBuildGeneric(int32 EntryPoint, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
