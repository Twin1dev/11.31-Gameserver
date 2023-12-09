#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x280 - 0x268)
// WidgetBlueprintGeneratedClass DivisionDetailsProgress.DivisionDetailsProgress_C
class UDivisionDetailsProgress_C : public UFortShowdownDivisionRankProgressView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         CommonBorder_CalloutOffset;                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ProgressBarContainer;                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDivisionDetailsProgress_C* GetDefaultObj();

	void OnSetInProgress(float NewPercent, bool bIsInProgress);
	void ExecuteUbergraph_DivisionDetailsProgress(int32 EntryPoint, float K2Node_Event_NewPercent, bool K2Node_Event_bIsInProgress, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


