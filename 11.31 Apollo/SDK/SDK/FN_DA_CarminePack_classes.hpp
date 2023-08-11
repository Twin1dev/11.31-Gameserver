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

// 0xA0 (0xB60 - 0xAC0)
// BlueprintGeneratedClass DA_CarminePack.DA_CarminePack_C
class ADA_CarminePack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TimePressed;                                       // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PunchPicker;                                       // 0xACC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasLandedAfterBeam;                                // 0xAD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 Carmine_Ability_Tags;                              // 0xAD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                  StoneTags;                                         // 0xAF8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	TArray<struct FGameplayTag>                  GemTags;                                           // 0xB08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        Int;                                               // 0xB18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AFB[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 SkydiveCue;                                        // 0xB20(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TrailsCue;                                         // 0xB40(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DA_CarminePack_C");
		return Clss;
	}

	void OnRep_StoneTags();
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void ReceiveBeginPlay();
	void Landed(struct FHitResult& Hit);
	void BindPartchanged();
	void ExecuteUbergraph_DA_CarminePack(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper_1, class AFortDecoHelper* K2Node_Event_FortDecoHelper, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFalling_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, int32 Temp_int_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_2, bool Temp_bool_Variable_1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_3, const struct FHitResult& K2Node_CustomEvent_Hit, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_GetInstigator_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class APawn* CallFunc_GetInstigator_ReturnValue_5, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithSourceTags_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_6, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_5, const struct FGameplayTag& CallFunc_Array_Get_Item, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithSourceTags_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
