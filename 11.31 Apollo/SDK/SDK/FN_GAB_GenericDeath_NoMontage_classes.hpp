#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA38 - 0xA30)
// BlueprintGeneratedClass GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C
class UGAB_GenericDeath_NoMontage_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGAB_GenericDeath_NoMontage_C* GetDefaultObj();

	void OnCancelled_878A944E4E232FA54BF973ACBC126DA3();
	void OnInterrupted_878A944E4E232FA54BF973ACBC126DA3();
	void OnBlendOut_878A944E4E232FA54BF973ACBC126DA3();
	void OnCompleted_878A944E4E232FA54BF973ACBC126DA3();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_GenericDeath_NoMontage(int32 EntryPoint, class UFortAbilityTask_PlayAnimAndWait* CallFunc_CreatePlayAnimAndWaitProxy_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData);
};

}


