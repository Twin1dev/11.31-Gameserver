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

// 0x28 (0xA58 - 0xA30)
// BlueprintGeneratedClass GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C
class UGA_Athena_HidingProp_LandedOn_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FScalableFloat                        Enabled;                                           // 0xA38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_HidingProp_LandedOn_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Athena_HidingProp_LandedOn(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, float CallFunc_GetValueAtLevel_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
