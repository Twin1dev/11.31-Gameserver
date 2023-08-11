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

// 0x8 (0xA38 - 0xA30)
// BlueprintGeneratedClass GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C
class UGA_Athena_RemoveIceFeetOnWater_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_RemoveIceFeetOnWater_C");
		return Clss;
	}

	void Added_ABAD1DEE46A337533ED461815C2B7BED();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
