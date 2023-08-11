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

// 0x8C (0x13C - 0xB0)
// BlueprintGeneratedClass Creative_Enabled_Component.Creative_Enabled_Component_C
class UCreative_Enabled_Component_C : public UActorComponent
{
public:
	struct FCreative_EnabledState                EnabledState;                                      // 0xB0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            On_Enabled_State_Changed;                          // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         EnabledDuringPlayMode;                             // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnabledDuringEditMode;                             // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UMulticastInlineDelegateProperty_            On_Reset_Complete;                                 // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          Reset_Timer;                                       // 0xE0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSet<enum class EFortMinigameState>          IgnorePhases;                                      // 0xE8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        ResetDelay;                                        // 0x138(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Creative_Enabled_Component_C");
		return Clss;
	}

	void OnRep_EIsEnabled(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	void IsResetting(bool* TURR, float* Remaining_Time, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Reset_Delay_Start(float Delay, const struct FCreative_EnabledState& K2Node_MakeStruct_Creative_EnabledState, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsEnabled_Enabled, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsResetting_True, float CallFunc_IsResetting_Remaining_Time, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void Reset_Delay_Complete(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void Set_Enabled_on_Play_Mode(bool Play_Mode);
	void Set_Enabled(bool bEnabled, enum class EEnabledState Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, enum class EEnabledState Temp_byte_Variable_1, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue_1, enum class EEnabledState K2Node_Select_Default, const struct FCreative_EnabledState& K2Node_MakeStruct_Creative_EnabledState, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void IsEnabled(bool* Enabled, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Set_Enabled_on_Phase(enum class EFortMinigameState State, int32 EnabledIndex, bool CallFunc_IsEnabledPhaseMatch_Enabled, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void On_Reset_Complete__DelegateSignature();
	void On_Enabled_State_Changed__DelegateSignature(bool Enabled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
