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

// 0x10 (0x798 - 0x788)
// BlueprintGeneratedClass GCNL_Galileo_Lobster_Dodge_Active.GCNL_Galileo_Lobster_Dodge_Active_C
class AGCNL_Galileo_Lobster_Dodge_Active_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x788(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortTaggedSoundBank*                  TaggedSoundBank_Start;                             // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Galileo_Lobster_Dodge_Active_C");
		return Clss;
	}

	void GetSoundFromBank(class AActor* Target_Actor, bool* Sound_Exists, class USoundBase** Sound, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, const struct FGameplayTagContainer& CallFunc_GetWeaponDataGameplayTags_GameplayTags, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USoundBase* CallFunc_GetSoundToPlay_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCNL_Galileo_Lobster_Dodge_Active(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, bool CallFunc_GetSoundFromBank_Sound_Exists, class USoundBase* CallFunc_GetSoundFromBank_Sound, class UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
