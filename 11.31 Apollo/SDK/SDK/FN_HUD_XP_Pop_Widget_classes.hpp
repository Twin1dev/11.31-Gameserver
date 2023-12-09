#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x378 - 0x2D0)
// WidgetBlueprintGeneratedClass HUD_XP_Pop_Widget.HUD_XP_Pop_Widget_C
class UHUD_XP_Pop_Widget_C : public UAthenaXPWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ScoreBump;                                         // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Outro;                                             // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_xp;                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_xp_plus;                           // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_ScoreContainer;                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_XP_Pop_Source_C*                  HUD_XP_Pop_Source;                                 // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_XP_Pop_Source_C*                  HUD_XP_Pop_Source_1;                               // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_XP_Pop_Source_C*                  HUD_XP_Pop_Source_2;                               // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_XP_Pop_Source_C*                  HUD_XP_Pop_Source_3;                               // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Flare;                                       // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Shadow;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               Number_Score;                                      // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URestedIcon_C*                         RestedIcon;                                        // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_SourceContainer;                       // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsRested;                                          // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E1C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  RestedColor;                                       // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                  NotRestedColor;                                    // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UHUD_XP_Pop_Widget_C* GetDefaultObj();

	void UpdateXPAmount(int32 NewAmount, class USoundCue* Cue);
	void UpdateXPSource(class FText& NewSourceText);
	void Construct();
	void OutroFinished();
	void SetRestedVisuals();
	void PreConstruct(bool IsDesignTime);
	void EventEmptySources();
	void SetSourceRestedVisuals(class UHUD_XP_Pop_Source_C* SourceWidget);
	void UpdateRestXP(int32 RestXpRemaining);
	void ExecuteUbergraph_HUD_XP_Pop_Widget(int32 EntryPoint, bool Temp_bool_Variable, int32 K2Node_Event_NewAmount, class USoundCue* K2Node_Event_Cue, class FText K2Node_Event_NewSourceText, bool CallFunc_TextIsEmpty_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, const struct FLinearColor& CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_Array_Get_Item_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable, bool K2Node_Event_IsDesignTime, class UMaterialInterface* Temp_object_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHUD_XP_Pop_Source_C* K2Node_CustomEvent_SourceWidget, const struct FLinearColor& CallFunc_Array_Get_Item_2, const struct FLinearColor& CallFunc_Array_Get_Item_3, class UMaterialInterface* Temp_object_Variable_1, const struct FLinearColor& K2Node_Select_Default, bool Temp_bool_Variable_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInterface* K2Node_Select_Default_1, int32 K2Node_Event_RestXpRemaining, bool CallFunc_Greater_IntInt_ReturnValue, class UHUD_XP_Pop_Source_C* CallFunc_Create_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool Temp_bool_Variable_3, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, const struct FLinearColor& K2Node_Select_Default_2, int32 CallFunc_Array_Length_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UWidget* CallFunc_GetChildAt_ReturnValue, class UHUD_XP_Pop_Source_C* K2Node_DynamicCast_AsHUD_XP_Pop_Source, bool K2Node_DynamicCast_bSuccess, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, bool CallFunc_EqualEqual_TextText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_3, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_3, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default_3);
};

}


