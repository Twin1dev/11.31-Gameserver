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

// 0x59 (0x669 - 0x610)
// WidgetBlueprintGeneratedClass TournamentDateEntry.TournamentDateEntry_C
class UTournamentDateEntry_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         CommonBorder_DateContent;                          // 0x618(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_Date;                              // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_Time;                              // 0x628(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_Title;                             // 0x630(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_EntryType;                    // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Strkethrough;                                // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsTitle;                                           // 0x648(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6566[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Title;                                             // 0x650(0x18)(Edit, BlueprintVisible)
	bool                                         _24HourFormat;                                     // 0x668(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TournamentDateEntry_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void EventColor(struct FFortTournamentDisplayInfo& ShowdownData);
	void RefreshDataBP();
	void ExecuteUbergraph_TournamentDateEntry(int32 EntryPoint, enum class EFortShowdownEventState CallFunc_GetEventTimeState_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_showdownData, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 Temp_int_Variable_1, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue, class FText CallFunc_GetEventDateAsText_ReturnValue, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue, const struct FLinearColor& K2Node_Select_Default_2, class FText CallFunc_GetEventDateAsText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue_1, class FText CallFunc_GetEventTimeAsText_ReturnValue, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetEventTimeAsText_ReturnValue_1, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_GetEventDateAsText_ReturnValue_2, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_GetEventDateAsText_ReturnValue_3, bool Temp_bool_Variable_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 K2Node_Select_Default_3, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
