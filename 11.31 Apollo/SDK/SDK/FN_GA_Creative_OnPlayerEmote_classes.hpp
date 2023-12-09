#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA38 - 0xA30)
// BlueprintGeneratedClass GA_Creative_OnPlayerEmote.GA_Creative_OnPlayerEmote_C
class UGA_Creative_OnPlayerEmote_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Creative_OnPlayerEmote_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Creative_OnPlayerEmote(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue_1, TScriptInterface<class ICreative_Listener_PlayerEmote_Interface_C> K2Node_DynamicCast_AsCreative_Listener_Player_Emote_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue_1, TScriptInterface<class ICreative_Listener_PlayerEmote_Interface_C> K2Node_DynamicCast_AsCreative_Listener_Player_Emote_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1);
};

}


