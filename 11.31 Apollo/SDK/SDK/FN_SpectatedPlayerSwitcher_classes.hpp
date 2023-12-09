#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x268 - 0x258)
// WidgetBlueprintGeneratedClass SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C
class USpectatedPlayerSwitcher_C : public UFortSpectatedPlayerSwitcher
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USpectatedPlayerSwitcher_C* GetDefaultObj();

	void FocusWidget();
	void PreConstruct(bool IsDesignTime);
	void OnDisplayedTargetsUpdated();
	void ExecuteUbergraph_SpectatedPlayerSwitcher(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_Event_IsDesignTime, class USpectatedPlayerItem_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class USpectatedPlayerItem_C* CallFunc_Create_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FPotentialSpectatorTarget& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


