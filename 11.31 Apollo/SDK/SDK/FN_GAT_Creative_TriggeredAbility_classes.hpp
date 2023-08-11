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

// 0x1F (0xA60 - 0xA41)
// BlueprintGeneratedClass GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C
class UGAT_Creative_TriggeredAbility_C : public UGAT_TriggeredAbility_C
{
public:
	uint8                                        Pad_428E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FName>                          OverriddenPropertyNames;                           // 0xA50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAT_Creative_TriggeredAbility_C");
		return Clss;
	}

	void IsPropertyOverridden(class FName PropertyName, bool* bResult, bool CallFunc_Array_Contains_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void SetupAbilityFailsafeTimer(float Duration);
	void AbilityTimeout();
	void ExecuteUbergraph_GAT_Creative_TriggeredAbility(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FGameplayEventData& K2Node_Event_EventData, TArray<class FName>& CallFunc_ApplySourcePropertyOverrides_OverriddenPropertyNames, bool CallFunc_ApplySourcePropertyOverrides_ReturnValue, float K2Node_CustomEvent_Duration, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
