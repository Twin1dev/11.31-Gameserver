#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0xA78 - 0xA59)
// BlueprintGeneratedClass GAT_Creative_ActiveAbility.GAT_Creative_ActiveAbility_C
class UGAT_Creative_ActiveAbility_C : public UGAT_ActiveAbility_C
{
public:
	uint8                                        Pad_5824[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FName>                          OverriddenPropertyNames;                           // 0xA68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGAT_Creative_ActiveAbility_C* GetDefaultObj();

	void IsPropertyOverridden(class FName PropertyName, bool* bResult, bool CallFunc_Array_Contains_ReturnValue);
	void K2_ActivateAbility();
	void SetupAbilityFailsafeTimer(float Duration);
	void AbilityTimeout();
	void ExecuteUbergraph_GAT_Creative_ActiveAbility(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<class FName>& CallFunc_ApplySourcePropertyOverrides_OverriddenPropertyNames, bool CallFunc_ApplySourcePropertyOverrides_ReturnValue, float K2Node_CustomEvent_Duration, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


