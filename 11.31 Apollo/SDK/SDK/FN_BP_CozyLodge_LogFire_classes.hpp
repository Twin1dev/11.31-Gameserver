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

// 0x94 (0x4FC - 0x468)
// BlueprintGeneratedClass BP_CozyLodge_LogFire.BP_CozyLodge_LogFire_C
class ABP_CozyLodge_LogFire_C : public AFortEventLevelNavigationActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Fire_Loop;                                         // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Highlightmesh;                                 // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          XPTimer;                                           // 0x488(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       XPSocketLocation;                                  // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFXSystemComponent*                    XPFX;                                              // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       XP_Pop_Audio;                                      // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        XpSizeRoll;                                        // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4563[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UDataTable*                            XPData;                                            // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLogFireXPData>                XPRowData;                                         // 0x4C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        TimerVariancePct;                                  // 0x4D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AverageTimeBetweenTicks;                           // 0x4D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                  AverageTimeBetweenTicksRow;                        // 0x4D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                  TimerVariancePctRow;                               // 0x4E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        FirstXPDelay;                                      // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_CozyLodge_LogFire_C");
		return Clss;
	}

	void SpawnXPFX(const struct FVector& SpawnLocation, int32 XPIndex, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, bool K2Node_SwitchInteger_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Conv_VectorToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Conv_VectorToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Conv_VectorToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue_1, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue_2, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue_3, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
	void UserConstructionScript(const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void ReceiveBeginPlay();
	void StartXPgain();
	void EndXPgain();
	void HandleObjectSpecialInteraction(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag);
	void GrantXP(int32 XPIndex, int32 XpValue);
	void ExecuteUbergraph_BP_CozyLodge_LogFire(int32 EntryPoint, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortGameStateComponent_EventLevel* CallFunc_GetOwningGameStateComp_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGameStateComponent_EventLevel* CallFunc_GetOwningGameStateComp_ReturnValue_1, bool CallFunc_CanGainRestedXp_bResult, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class UFortGameStateComponent_EventLevel* CallFunc_GetOwningGameStateComp_ReturnValue_2, const struct FVector& CallFunc_Array_Get_Item, int32 K2Node_CustomEvent_XPIndex, int32 K2Node_CustomEvent_XPValue, int32 Temp_int_Array_Index_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<class FString>& CallFunc_GetDataTableColumnAsString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FLogFireXPData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY_1, bool CallFunc_EvaluateCurveTableRow_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, int32 Temp_int_Array_Index_Variable_1, TArray<struct FVector>& K2Node_MakeArray_Array_1, const struct FLogFireXPData& CallFunc_Array_Get_Item_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
