#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x278 - 0x268)
// WidgetBlueprintGeneratedClass StatValueWidget.StatValueWidget_C
class UStatValueWidget_C : public UAthenaProfileStatWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonNumericTextBlock*               Value;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatValueWidget_C* GetDefaultObj();

	void OnStatChanged();
	void ExecuteUbergraph_StatValueWidget(int32 EntryPoint, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, float CallFunc_GetStat_ReturnValue);
};

}


