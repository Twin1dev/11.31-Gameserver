#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xBB8 - 0xBA0)
// WidgetBlueprintGeneratedClass AthenaHUDBoundActionButton.AthenaHUDBoundActionButton_C
class UAthenaHUDBoundActionButton_C : public UFortBoundActionButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               ContentBorder;                                     // 0xBA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             InputActionIconScale;                              // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaHUDBoundActionButton_C* GetDefaultObj();

	void UpdateInputActionIconSize(float Temp_float_Variable, float Temp_float_Variable_1, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Select_Default);
	void Construct();
	void ExecuteUbergraph_AthenaHUDBoundActionButton(int32 EntryPoint);
};

}


