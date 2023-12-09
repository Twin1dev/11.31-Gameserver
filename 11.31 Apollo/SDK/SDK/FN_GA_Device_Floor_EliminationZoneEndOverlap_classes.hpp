#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA68 - 0xA60)
// BlueprintGeneratedClass GA_Device_Floor_EliminationZoneEndOverlap.GA_Device_Floor_EliminationZoneEndOverlap_C
class UGA_Device_Floor_EliminationZoneEndOverlap_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA60(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Device_Floor_EliminationZoneEndOverlap_C* GetDefaultObj();

	void RemoveGameplayEffects(class AActor* Actor, int32* EffectsRemoved, const TArray<class AFortPlayerPawn*>& Passengers, int32 TotalEffectsRemoved, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFortPlayerPawn* CallFunc_Array_Get_Item, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Device_Floor_EliminationZoneEndOverlap(int32 EntryPoint, int32 CallFunc_RemoveGameplayEffects_EffectsRemoved, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


