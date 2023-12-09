#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x290 - 0x268)
// WidgetBlueprintGeneratedClass AthenaServerShutdownWidget.AthenaServerShutdownWidget_C
class UAthenaServerShutdownWidget_C : public UAthenaShutdownWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      Text_Countdown;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  StartingCountdownText;                             // 0x278(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UAthenaServerShutdownWidget_C* GetDefaultObj();

	void SetCountdownText(float RemainingTime, int32 CallFunc_Round_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnUpdateCountdown(float RemainingTime);
	void OnStartShowing(float RemainingTime);
	void OnStopShowing(float RemainingTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaServerShutdownWidget(int32 EntryPoint, float K2Node_Event_RemainingTime, float K2Node_Event_RemainingTime_1, bool K2Node_Event_IsDesignTime, float K2Node_Event_RemainingTime_2);
};

}


