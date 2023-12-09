#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x3C0 - 0x2B8)
// WidgetBlueprintGeneratedClass TrickFeedView.TrickFeedView_C
class UTrickFeedView_C : public UAthenaTrickFeedBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      TrickReset;                                        // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TrickComplete;                                     // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TrickFailed;                                       // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TriangleFlare;                                     // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MultiplierBump;                                    // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Crit;                                              // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      FailedText;                                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Glow;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Multiplier;                                        // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichTrickStats;                                    // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TotalScore;                                        // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TrickInformation;                                  // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortDynamicEntryBox*                  TrickList;                                         // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TrickStats;                                        // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          RemoveInfoTimer;                                   // 0x330(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCritical;                                        // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6C01[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CritThreshold;                                     // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAmazing;                                         // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6C02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AmazingThreshold;                                  // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DEVCritDisplay;                                    // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DEVFinalDisplay;                                   // 0x349(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6C03[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          OkTricksDescription;                               // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          NiceTricksDescription;                             // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          AmazingTricksDescription;                          // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          WipeoutDescription;                                // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAudioComponent*                       TrickSequenceMusic;                                // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_OnFail;                                      // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_OnCancel;                                    // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_OnSuccess;                                   // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_OnNewTrick;                                  // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_TrickSequenceMusic;                          // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTrickFeedView_C* GetDefaultObj();

	void FadeOutMusic(bool CallFunc_IsValid_ReturnValue);
	void GetCalloutText(class FText* Callout, bool Temp_bool_Variable, bool Temp_bool_Variable_1, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_Select_Default, TArray<class FText>& K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FText CallFunc_Array_Get_Item);
	void HIdeTrickUI();
	void AddTrick(class FText& TrickName);
	void UpdateScore(class UFortVehicleTrickSet* TrickSet, int32 TotalScore);
	void UpdateMultiplier(int32 Multiplier);
	void SimulateTrick();
	void PreConstruct(bool IsDesignTime);
	void CritStyleEvent(bool IsCritical);
	void ToggleCompleteStyle(bool IsComplete);
	void EventTrickCompliment();
	void UpdateTrickStats(class FText& StatsText);
	void TrickSequenceStarted();
	void TrickSequenceFailed();
	void TrickSequenceComplete();
	void TrickSequenceCanceled();
	void WidgetAnimationEvt_TrickFailed_K2Node_WidgetAnimationEvent_0();
	void WidgetAnimationEvt_TrickComplete_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_TrickFeedView(int32 EntryPoint, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, class FText K2Node_Event_TrickName, class UUserWidget* CallFunc_BP_CreateEntry_ReturnValue, class UTrickEntry_C* K2Node_DynamicCast_AsTrick_Entry, bool K2Node_DynamicCast_bSuccess, class UFortVehicleTrickSet* K2Node_Event_TrickSet, int32 K2Node_Event_TotalScore, float CallFunc_Conv_IntToFloat_ReturnValue, int32 K2Node_Event_Multiplier, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, bool Temp_bool_Variable_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_isCritical, const struct FVector2D& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UObject* K2Node_Select_Default_2, int32 Temp_int_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable_6, int32 K2Node_Select_Default_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FLinearColor& Temp_struct_Variable_5, bool Temp_bool_Variable_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool K2Node_CustomEvent_isComplete, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UObject* K2Node_Select_Default_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_Select_Default_6, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default_7, enum class ESlateVisibility Temp_byte_Variable, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_8, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_8, class UCalloutEntry_C* CallFunc_BP_CreateEntryOfClass_ReturnValue, class FText CallFunc_GetCalloutText_Callout, class UCalloutEntry_C* K2Node_DynamicCast_AsCallout_Entry, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_TextIsEmpty_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText K2Node_Event_StatsText, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class FText CallFunc_Array_Get_Item, class FText CallFunc_TextToUpper_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


