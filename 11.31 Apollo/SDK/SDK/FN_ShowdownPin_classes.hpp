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

// 0x92 (0x6A2 - 0x610)
// WidgetBlueprintGeneratedClass ShowdownPin.ShowdownPin_C
class UShowdownPin_C : public UFortShowdownPin
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x618(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Focus;                                             // 0x620(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Reveal;                                            // 0x628(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_NoPinPts;                          // 0x630(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_PinPts;                            // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_PinShadow;                                   // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              NoPinContent;                                      // 0x648(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      NoPinIcon;                                         // 0x650(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               NoPinScoreText;                                    // 0x658(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      NoPinShadow;                                       // 0x660(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PinContent;                                        // 0x668(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PinIcon;                                           // 0x670(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 PinInfoSwitcher;                                   // 0x678(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PinScoreText;                                      // 0x680(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_PointValuesProgress;                   // 0x688(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxPointValues;                            // 0x690(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bRepresentsTournamentBestPin;                      // 0x698(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         DEVShowPin;                                        // 0x699(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HidePoints;                                        // 0x69A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6459[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        DEVPinScore;                                       // 0x69C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ColorSilhouette;                                   // 0x6A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HideBackplate;                                     // 0x6A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ShowdownPin_C");
		return Clss;
	}

	void Refresh(enum class EFortShowdownPinState PinState, enum class EFortShowdownPinState Temp_byte_Variable, bool Temp_bool_Variable, enum class EFortShowdownPinState Temp_byte_Variable_1, int32 CallFunc_GetScoreToDisplay_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UTextBlock* K2Node_Select_Default, class UWidget* K2Node_Select_Default_1, enum class EFortShowdownPinState CallFunc_GetEventPinState_ReturnValue, enum class EFortShowdownPinState CallFunc_GetTournamentBestPinState_ReturnValue, enum class EFortShowdownPinState K2Node_Select_Default_2);
	void RefreshDataBP();
	void PreConstruct(bool IsDesignTime);
	void EventSetTier(int32 Score);
	void EventFixPts(int32 Points);
	void EventColorize();
	void EventRevealAnim();
	void ExecuteUbergraph_ShowdownPin(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable_3, float Temp_float_Variable, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Score, float CallFunc_Conv_IntToFloat_ReturnValue, int32 Temp_int_Variable_4, class FText CallFunc_Conv_IntToText_ReturnValue, int32 K2Node_CustomEvent_Points, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool Temp_bool_Variable_5, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Variable_5, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, int32 Temp_int_Variable_6, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool Temp_bool_Variable_6, int32 CallFunc_GetTournamentPinUnlockScore_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 K2Node_Select_Default_2, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, int32 K2Node_Select_Default_3, bool CallFunc_Less_FloatFloat_ReturnValue_2, int32 K2Node_Select_Default_4, int32 K2Node_Select_Default_5, enum class ESlateVisibility K2Node_Select_Default_6, class UMaterialInterface* K2Node_Select_Default_7);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
