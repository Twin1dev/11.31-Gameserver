#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x319 - 0x300)
// WidgetBlueprintGeneratedClass NewLevelWidget.NewLevelWidget_C
class UNewLevelWidget_C : public UAthenaLevelUpWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      PlacementOffset;                                   // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class ULevelUpVisuals_C*                     LevelUpVisuals;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsPlaced;                                          // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UNewLevelWidget_C* GetDefaultObj();

	void ShowWidget(int32 NewLevel);
	void Construct();
	void OutroFinished();
	void ShowLevelReward();
	void EventMoveforEoM(class FName Placement);
	void ExecuteUbergraph_NewLevelWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_Event_NewLevel, class FText CallFunc_Conv_IntToText_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class FName K2Node_CustomEvent_Placement, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_NameName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


