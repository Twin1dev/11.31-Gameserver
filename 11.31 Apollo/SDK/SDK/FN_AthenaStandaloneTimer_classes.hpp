#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2E0 - 0x2C8)
// WidgetBlueprintGeneratedClass AthenaStandaloneTimer.AthenaStandaloneTimer_C
class UAthenaStandaloneTimer_C : public UAthenaTimeWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                        TimeRichText;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  DefaultStyle;                                      // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaStandaloneTimer_C* GetDefaultObj();

	bool IsTextStyleValid(class FName& DisplayTextStyle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnMinigameEnded();
	void UpdateDisplay(class FText& DisplayText, class FName& DisplayTextStyle);
	void OnMinigameStarted();
	void ExecuteUbergraph_AthenaStandaloneTimer(int32 EntryPoint, class FText K2Node_Event_DisplayText, class FName K2Node_Event_DisplayTextStyle, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool Temp_bool_Variable, class FName K2Node_Select_Default, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


