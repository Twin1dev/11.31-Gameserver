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

// 0x3C (0xFF0 - 0xFB4)
// BlueprintGeneratedClass B_Galileo_Bun_Auto_Athena.B_Galileo_Bun_Auto_Athena_C
class AB_Galileo_Bun_Auto_Athena_C : public AB_Assault_Generic_C
{
public:
	uint8                                        Pad_6671[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       OverheatAudioLayer;                                // 0xFC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Overheat;                                        // 0xFC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Overheat_V2;                                     // 0xFD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          OverheatFXTimer;                                   // 0xFD8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           OverheatAudioFeedbackCurve;                        // 0xFE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          OverheatFXTimerReplicated;                         // 0xFE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Galileo_Bun_Auto_Athena_C");
		return Clss;
	}

	void OverheatFX(uint8 Overheat_Val);
	void OnFinishedCooling();
	void OnStartCooling();
	void OnStartHeating();
	void OnWeaponAttached();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void CustomEvent_0();
	void OverheatFXReplicated(uint8 Overheat_Val);
	void OnStartOverheated();
	void CustomEvent_1();
	void ExecuteUbergraph_B_Galileo_Bun_Auto_Athena(int32 EntryPoint, float Temp_float_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable_1, uint8 K2Node_CustomEvent_Overheat_Val_1, bool CallFunc_IsMobilePlatform_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool Temp_bool_Variable, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, float K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetCurrentOverheatValue_ReturnValue, float CallFunc_GetOverheatingMaxValue_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, uint8 K2Node_CustomEvent_Overheat_Val, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_GetCurrentOverheatValue_ReturnValue_1, float CallFunc_GetOverheatingMaxValue_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
