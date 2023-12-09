#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xB48 - 0xAC0)
// BlueprintGeneratedClass DA_AshtonPack.DA_AshtonPack_C
class ADA_AshtonPack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TimePressed;                                       // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PunchPicker;                                       // 0xACC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasLanded;                                         // 0xAD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E12[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 AshtonAbilityTags;                                 // 0xAD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 GC_JumpTrails;                                     // 0xAF8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 GC_SkydiveTrails;                                  // 0xB18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          PrimaryFireEventTag;                               // 0xB38(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          SecondaryFireEventTag;                             // 0xB40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADA_AshtonPack_C* GetDefaultObj();

	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void ReceiveBeginPlay();
	void Landed(struct FHitResult& Hit);
	void ExecuteUbergraph_DA_AshtonPack(int32 EntryPoint, bool Temp_bool_Variable, class AFortDecoHelper* K2Node_Event_FortDecoHelper_1, bool CallFunc_Not_PreBool_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_IsFalling_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_GetInstigator_ReturnValue_3, const struct FHitResult& K2Node_CustomEvent_Hit, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_GetInstigator_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class APawn* CallFunc_GetInstigator_ReturnValue_5, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_6, bool Temp_bool_Variable_1, int32 CallFunc_RemoveActiveEffectsWithSourceTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_RemoveActiveEffectsWithSourceTags_ReturnValue_1);
};

}


